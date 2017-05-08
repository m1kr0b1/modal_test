[Uno.Compiler.UxGenerated]
public partial class TabHeader: Fuse.Controls.Text
{
    static TabHeader()
    {
    }
    [global::Uno.UX.UXConstructor]
    public TabHeader()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.Color = Fuse.Drawing.Colors.White;
        this.MinWidth = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        this.Alignment = Fuse.Elements.Alignment.CenterLeft;
        this.Margin = float4(20f, 0f, 0f, 0f);
        this.Opacity = 0f;
    }
}
