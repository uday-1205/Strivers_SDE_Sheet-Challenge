void solve(int oldColo, int newColo, int x, int y, int n, int m, vector<vector<int>> &image){
    if(x < 0 || x >= n || y < 0 || y >= m || image[x][y] != oldColo){
        return;
    }

    image[x][y] = newColo;

    solve(oldColo, newColo, x+1, y, n, m, image);
    solve(oldColo, newColo, x-1, y, n, m, image);
    solve(oldColo, newColo, x, y+1, n, m, image);
    solve(oldColo, newColo, x, y-1, n, m, image);

}

vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    int oldColor = image[x][y];

    if(oldColor == newColor){
        return image;
    }

    int n = image.size();
    int m = image[0].size();

    solve(oldColor, newColor, x, y, n, m, image);

    return image;
}