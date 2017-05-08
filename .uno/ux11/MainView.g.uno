[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Circle();
            __self.Color = float4(0.5215687f, 0.5333334f, 0.5294118f, 1f);
            __self.Margin = float4(1.5f, 1.5f, 1.5f, 1.5f);
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template1(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Uno.UX.FileSource> temp_File_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb0;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "temp_eb0"
        };
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.DockPanel();
            var temp = new global::Fuse.Controls.Image();
            temp_File_inst = new dontbeatourist_FuseControlsImage_File_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("LocalPhoto");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp4 = new global::Fuse.Reactive.Data("locClick");
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new dontbeatourist_FuseControlsTextControl_Value_Property(temp1, __selector1);
            var temp5 = new global::Fuse.Reactive.Data("Title");
            var temp2 = new global::Fuse.Controls.Text();
            temp2_Value_inst = new dontbeatourist_FuseControlsTextControl_Value_Property(temp2, __selector1);
            var temp6 = new global::Fuse.Reactive.Data("Description");
            var temp7 = new global::Fuse.Controls.Rectangle();
            var temp8 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
            var temp9 = new global::Fuse.Controls.Rectangle();
            var temp10 = new global::Fuse.Reactive.DataBinding(temp_File_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Gestures.Clicked();
            var temp_eb0 = new global::Fuse.Reactive.EventBinding(temp4, __g_nametable);
            var temp12 = new global::Fuse.Controls.Panel();
            var temp13 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp14 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Height = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
            __self.Margin = float4(10f, 20f, 10f, 20f);
            temp7.CornerRadius = float4(10f, 10f, 10f, 10f);
            temp7.Layer = Fuse.Layer.Background;
            temp7.Fill = temp8;
            temp9.Height = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
            temp9.Margin = float4(0f, -10f, 0f, -10f);
            global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Top);
            temp9.Children.Add(temp);
            temp.Height = new Uno.UX.Size(230f, Uno.UX.Unit.Unspecified);
            temp.Padding = float4(30f, 30f, 30f, 30f);
            temp.Bindings.Add(temp10);
            temp11.Handler += temp_eb0.OnEvent;
            temp11.Bindings.Add(temp_eb0);
            temp12.Children.Add(temp1);
            temp12.Children.Add(temp2);
            temp1.FontSize = 22f;
            temp1.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp1.Alignment = Fuse.Elements.Alignment.Left;
            temp1.Margin = float4(10f, 0f, 10f, 0f);
            temp1.Padding = float4(10f, 10f, 10f, 10f);
            global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Top);
            temp1.Bindings.Add(temp13);
            temp2.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp2.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp2.Alignment = Fuse.Elements.Alignment.Left;
            temp2.Margin = float4(10f, 30f, 10f, 30f);
            temp2.Padding = float4(10f, 10f, 10f, 10f);
            global::Fuse.Controls.DockPanel.SetDock(temp2, Fuse.Layouts.Dock.Top);
            temp2.Bindings.Add(temp14);
            __g_nametable.Objects.Add(temp_eb0);
            __self.Children.Add(temp7);
            __self.Children.Add(temp9);
            __self.Children.Add(temp11);
            __self.Children.Add(temp12);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "File";
        static global::Uno.UX.Selector __selector1 = "Value";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template2(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Fuse.Visual> nav_Active_inst;
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Gestures.Clicked();
            nav_Active_inst = new dontbeatourist_FuseControlsNavigationControl_Active_Property(__parent.nav, __selector0);
            var temp = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(nav_Active_inst);
            temp.Value = __parent.page2;
            __self.Actions.Add(temp);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Active";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template3(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template4: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template3 __parent;
            [Uno.WeakReference] internal readonly Fuse.Reactive.Each __parentInstance;
            public Template4(Template3 parent, Fuse.Reactive.Each parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<double> __self_Latitude_inst;
            global::Uno.UX.Property<double> __self_Longitude_inst;
            global::Uno.UX.Property<string> __self_Label_inst;
            global::Uno.UX.NameTable __g_nametable;
            static string[] __g_static_nametable = new string[] {
            };
            static Template4()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Controls.MapMarker();
                __self_Latitude_inst = new dontbeatourist_FuseControlsMapMarker_Latitude_Property(__self, __selector0);
                var temp = new global::Fuse.Reactive.Data("lat");
                __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
                __self_Longitude_inst = new dontbeatourist_FuseControlsMapMarker_Longitude_Property(__self, __selector1);
                var temp1 = new global::Fuse.Reactive.Data("lon");
                __self_Label_inst = new dontbeatourist_FuseControlsMapMarker_Label_Property(__self, __selector2);
                var temp2 = new global::Fuse.Reactive.Data("Title");
                var temp3 = new global::Fuse.Reactive.DataBinding(__self_Latitude_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
                var temp4 = new global::Fuse.Reactive.DataBinding(__self_Longitude_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
                var temp5 = new global::Fuse.Reactive.DataBinding(__self_Label_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
                __self.Bindings.Add(temp3);
                __self.Bindings.Add(temp4);
                __self.Bindings.Add(temp5);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "Latitude";
            static global::Uno.UX.Selector __selector1 = "Longitude";
            static global::Uno.UX.Selector __selector2 = "Label";
        }
        global::Uno.UX.Property<object> __self_Items_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Reactive.Each();
            __self_Items_inst = new dontbeatourist_FuseReactiveEach_Items_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("Locations");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp1 = new Template4(this, __self);
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_Items_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Templates.Add(temp1);
            __self.Bindings.Add(temp2);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Items";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template4: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template4(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Uno.UX.FileSource> temp_File_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template4()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.StackPanel();
            var temp = new global::Fuse.Controls.Image();
            temp_File_inst = new dontbeatourist_FuseControlsImage_File_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("LocalPhoto");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new dontbeatourist_FuseControlsTextControl_Value_Property(temp1, __selector1);
            var temp4 = new global::Fuse.Reactive.Data("Title");
            var temp2 = new global::Fuse.Controls.Text();
            temp2_Value_inst = new dontbeatourist_FuseControlsTextControl_Value_Property(temp2, __selector1);
            var temp5 = new global::Fuse.Reactive.Data("Description");
            var temp6 = new global::Fuse.Controls.Rectangle();
            var temp7 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
            var temp8 = new global::Fuse.Controls.Rectangle();
            var temp9 = new global::Fuse.Reactive.DataBinding(temp_File_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp10 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Height = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
            __self.Margin = float4(10f, 10f, 10f, 10f);
            __self.Padding = float4(10f, 10f, 10f, 10f);
            temp6.CornerRadius = float4(10f, 10f, 10f, 10f);
            temp6.Layer = Fuse.Layer.Background;
            temp6.Fill = temp7;
            temp8.Padding = float4(-10f, -10f, -10f, -10f);
            temp8.Children.Add(temp);
            temp.Height = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
            temp.Bindings.Add(temp9);
            temp1.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp1.FontSize = 22f;
            temp1.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp1.Alignment = Fuse.Elements.Alignment.Left;
            global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Top);
            temp1.Bindings.Add(temp10);
            temp2.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp2.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp2.Alignment = Fuse.Elements.Alignment.Left;
            temp2.Bindings.Add(temp11);
            __self.Children.Add(temp6);
            __self.Children.Add(temp8);
            __self.Children.Add(temp1);
            __self.Children.Add(temp2);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "File";
        static global::Uno.UX.Selector __selector1 = "Value";
    }
    global::Uno.UX.Property<Fuse.Visual> nav_Active_inst;
    global::Uno.UX.Property<float4> indicator_Color_inst;
    global::Uno.UX.Property<float4> bgColor_Color_inst;
    global::Uno.UX.Property<float4> titleText_Color_inst;
    global::Uno.UX.Property<Uno.UX.Size> indicator_Width_inst;
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<bool> shrinkIndicatorWidth_Value_inst;
    global::Uno.UX.Property<float4> indicatorColorAttractor_Value_inst;
    global::Uno.UX.Property<float4> bgColorAttractor_Value_inst;
    global::Uno.UX.Property<float4> titleTextAttractor_Value_inst;
    global::Uno.UX.Property<float> h1_Opacity_inst;
    global::Uno.UX.Property<float> col1_Width_inst;
    global::Uno.UX.Property<float4> c1_Color_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<object> temp3_Items_inst;
    global::Uno.UX.Property<float> h2_Opacity_inst;
    global::Uno.UX.Property<float> col2_Width_inst;
    global::Uno.UX.Property<float4> c2_Color_inst;
    global::Uno.UX.Property<float> h3_Opacity_inst;
    global::Uno.UX.Property<float> col3_Width_inst;
    global::Uno.UX.Property<float4> c3_Color_inst;
    global::Uno.UX.Property<float> h4_Opacity_inst;
    global::Uno.UX.Property<float> col4_Width_inst;
    global::Uno.UX.Property<float4> c4_Color_inst;
    internal global::Fuse.Controls.Text titleText;
    internal global::Fuse.Controls.Rectangle indicator;
    internal global::Fuse.Controls.Panel p1;
    internal global::Fuse.Controls.Panel p4;
    internal global::Fuse.Layouts.Column col1;
    internal global::Fuse.Layouts.Column col2;
    internal global::Fuse.Layouts.Column col3;
    internal global::Fuse.Layouts.Column col4;
    internal global::TabIcon c1;
    internal global::TabHeader h1;
    internal global::TabIcon c2;
    internal global::TabHeader h2;
    internal global::TabIcon c3;
    internal global::TabHeader h3;
    internal global::TabIcon c4;
    internal global::TabHeader h4;
    internal global::Fuse.Controls.PageControl nav;
    internal global::Fuse.Animations.Attractor<float4> indicatorColorAttractor;
    internal global::Fuse.Controls.Rectangle bgColor;
    internal global::Fuse.Animations.Attractor<float4> bgColorAttractor;
    internal global::Fuse.Animations.Attractor<float4> titleTextAttractor;
    internal global::Fuse.Triggers.WhileTrue shrinkIndicatorWidth;
    internal global::Fuse.Controls.Page page1;
    internal global::Fuse.Controls.Page page2;
    internal global::Fuse.Controls.Page page3;
    internal global::Fuse.Controls.Page page4;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "titleText",
        "indicator",
        "p1",
        "p4",
        "col1",
        "col2",
        "col3",
        "col4",
        "c1",
        "h1",
        "c2",
        "h2",
        "c3",
        "h3",
        "c4",
        "h4",
        "nav",
        "indicatorColorAttractor",
        "bgColor",
        "bgColorAttractor",
        "titleTextAttractor",
        "shrinkIndicatorWidth",
        "page1",
        "page2",
        "page3",
        "page4"
    };
    static MainView()
    {
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.Linear, "Linear");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticIn, "QuadraticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticOut, "QuadraticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticInOut, "QuadraticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicIn, "CubicIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicOut, "CubicOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicInOut, "CubicInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticIn, "QuarticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticOut, "QuarticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticInOut, "QuarticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticIn, "QuinticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticOut, "QuinticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticInOut, "QuinticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalIn, "SinusoidalIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalOut, "SinusoidalOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalInOut, "SinusoidalInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialIn, "ExponentialIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialOut, "ExponentialOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialInOut, "ExponentialInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularIn, "CircularIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularOut, "CircularOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularInOut, "CircularInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticIn, "ElasticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticOut, "ElasticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticInOut, "ElasticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackIn, "BackIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackOut, "BackOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackInOut, "BackInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceIn, "BounceIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceOut, "BounceOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceInOut, "BounceInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.TopLeft, "TopLeft");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Center, "Center");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Anchor, "Anchor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.HorizontalBoxCenter, "HorizontalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.VerticalBoxCenter, "VerticalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.TransformOriginOffset, "TransformOriginOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.PositionOffset, "PositionOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.SizeFactor, "SizeFactor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.Actions.GiveFocus.Singleton, "GiveFocus");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.WhileKeyboardVisible.Keyboard, "Keyboard");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.SizeLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.WorldPositionChange, "WorldPositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionChange, "PositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ResizeSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ScalingSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Points, "Points");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Pixels, "Pixels");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ContentSize, "ContentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ScrollViewSize, "ScrollViewSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.PreloadRetain, "PreloadRetain");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadUnused, "UnloadUnused");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadInBackgroundPolicy, "UnloadInBackground");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.PlatformDefault, "PlatformDefault");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.ScalingModes.Identity, "Identity");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Local, "Local");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.ParentSize, "ParentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Width, "Width");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Height, "Height");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color0, "color0");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color1, "color1");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color2, "color2");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color3, "color3");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color4, "color4");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp4 = new global::Fuse.Reactive.FuseJS.DiagnosticsImplModule();
        var temp5 = new global::Fuse.Reactive.FuseJS.Http();
        var temp6 = new global::Fuse.Reactive.FuseJS.TimerModule();
        var temp7 = new global::Fuse.Drawing.BrushConverter();
        var temp8 = new global::Fuse.Triggers.BusyTaskModule();
        var temp9 = new global::Fuse.FileSystem.FileSystemModule();
        var temp10 = new global::Fuse.Storage.StorageModule();
        var temp11 = new global::Fuse.WebSocket.WebSocketClientModule();
        var temp12 = new global::Fuse.ImageTools.ImageTools();
        var temp13 = new global::Fuse.GeoLocation.GeoLocation();
        var temp14 = new global::Polyfills.Window.WindowModule();
        var temp15 = new global::FuseJS.Globals();
        var temp16 = new global::FuseJS.Lifecycle();
        var temp17 = new global::FuseJS.Environment();
        var temp18 = new global::FuseJS.Base64();
        var temp19 = new global::FuseJS.Bundle();
        var temp20 = new global::FuseJS.FileReaderImpl();
        var temp21 = new global::FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        nav = new global::Fuse.Controls.PageControl();
        nav_Active_inst = new dontbeatourist_FuseControlsNavigationControl_Active_Property(nav, __selector0);
        indicator = new global::Fuse.Controls.Rectangle();
        indicator_Color_inst = new dontbeatourist_FuseControlsShape_Color_Property(indicator, __selector1);
        bgColor = new global::Fuse.Controls.Rectangle();
        bgColor_Color_inst = new dontbeatourist_FuseControlsShape_Color_Property(bgColor, __selector1);
        titleText = new global::Fuse.Controls.Text();
        titleText_Color_inst = new dontbeatourist_FuseControlsTextControl_Color_Property(titleText, __selector1);
        indicator_Width_inst = new dontbeatourist_FuseElementsElement_Width_Property(indicator, __selector2);
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new dontbeatourist_FuseReactiveEach_Items_Property(temp, __selector3);
        var temp22 = new global::Fuse.Reactive.Data("tours");
        shrinkIndicatorWidth = new global::Fuse.Triggers.WhileTrue();
        shrinkIndicatorWidth_Value_inst = new dontbeatourist_FuseTriggersWhileBool_Value_Property(shrinkIndicatorWidth, __selector4);
        indicatorColorAttractor = new global::Fuse.Animations.Attractor<float4>(indicator_Color_inst);
        indicatorColorAttractor_Value_inst = new dontbeatourist_FuseAnimationsAttractorfloat4_Value_Property(indicatorColorAttractor, __selector4);
        bgColorAttractor = new global::Fuse.Animations.Attractor<float4>(bgColor_Color_inst);
        bgColorAttractor_Value_inst = new dontbeatourist_FuseAnimationsAttractorfloat4_Value_Property(bgColorAttractor, __selector4);
        titleTextAttractor = new global::Fuse.Animations.Attractor<float4>(titleText_Color_inst);
        titleTextAttractor_Value_inst = new dontbeatourist_FuseAnimationsAttractorfloat4_Value_Property(titleTextAttractor, __selector4);
        h1 = new global::TabHeader();
        h1_Opacity_inst = new dontbeatourist_FuseElementsElement_Opacity_Property(h1, __selector5);
        col1 = new global::Fuse.Layouts.Column();
        col1_Width_inst = new dontbeatourist_FuseLayoutsColumn_Width_Property(col1, __selector2);
        c1 = new global::TabIcon();
        c1_Color_inst = new dontbeatourist_FuseControlsImage_Color_Property(c1, __selector1);
        var temp1 = new global::Fuse.Reactive.Each();
        temp1_Items_inst = new dontbeatourist_FuseReactiveEach_Items_Property(temp1, __selector3);
        var temp23 = new global::Fuse.Reactive.Data("locations");
        var temp2 = new global::Fuse.Controls.Text();
        temp2_Value_inst = new dontbeatourist_FuseControlsTextControl_Value_Property(temp2, __selector4);
        var temp24 = new global::Fuse.Reactive.Data("timeoutLocation");
        var temp3 = new global::Fuse.Reactive.Each();
        temp3_Items_inst = new dontbeatourist_FuseReactiveEach_Items_Property(temp3, __selector3);
        var temp25 = new global::Fuse.Reactive.Data("locations");
        h2 = new global::TabHeader();
        h2_Opacity_inst = new dontbeatourist_FuseElementsElement_Opacity_Property(h2, __selector5);
        col2 = new global::Fuse.Layouts.Column();
        col2_Width_inst = new dontbeatourist_FuseLayoutsColumn_Width_Property(col2, __selector2);
        c2 = new global::TabIcon();
        c2_Color_inst = new dontbeatourist_FuseControlsImage_Color_Property(c2, __selector1);
        h3 = new global::TabHeader();
        h3_Opacity_inst = new dontbeatourist_FuseElementsElement_Opacity_Property(h3, __selector5);
        col3 = new global::Fuse.Layouts.Column();
        col3_Width_inst = new dontbeatourist_FuseLayoutsColumn_Width_Property(col3, __selector2);
        c3 = new global::TabIcon();
        c3_Color_inst = new dontbeatourist_FuseControlsImage_Color_Property(c3, __selector1);
        h4 = new global::TabHeader();
        h4_Opacity_inst = new dontbeatourist_FuseElementsElement_Opacity_Property(h4, __selector5);
        col4 = new global::Fuse.Layouts.Column();
        col4_Width_inst = new dontbeatourist_FuseLayoutsColumn_Width_Property(col4, __selector2);
        c4 = new global::TabIcon();
        c4_Color_inst = new dontbeatourist_FuseControlsImage_Color_Property(c4, __selector1);
        var temp26 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp27 = new global::Fuse.Controls.ClientPanel();
        var temp28 = new global::Fuse.Controls.Grid();
        var temp29 = new global::Fuse.Controls.Grid();
        var temp30 = new global::Fuse.Reactive.Each();
        var temp31 = new Template(this, this);
        var temp32 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/Fonts/Roboto-Black.ttf")));
        var temp33 = new global::Fuse.Controls.Image();
        var temp34 = new global::Fuse.Controls.Panel();
        var temp35 = new global::Fuse.Controls.Grid();
        p1 = new global::Fuse.Controls.Panel();
        p4 = new global::Fuse.Controls.Panel();
        var temp36 = new global::Fuse.Controls.Grid();
        var temp37 = new global::Fuse.Controls.Panel();
        var temp38 = new global::Fuse.Controls.Grid();
        var temp39 = new global::Fuse.Gestures.Clicked();
        var temp40 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(nav_Active_inst);
        var temp41 = new global::Fuse.Controls.Panel();
        var temp42 = new global::Fuse.Controls.Grid();
        var temp43 = new global::Fuse.Gestures.Clicked();
        var temp44 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(nav_Active_inst);
        var temp45 = new global::Fuse.Controls.Panel();
        var temp46 = new global::Fuse.Controls.Grid();
        var temp47 = new global::Fuse.Gestures.Clicked();
        var temp48 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(nav_Active_inst);
        var temp49 = new global::Fuse.Controls.Panel();
        var temp50 = new global::Fuse.Controls.Grid();
        var temp51 = new global::Fuse.Gestures.Clicked();
        var temp52 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(nav_Active_inst);
        var temp53 = new global::Fuse.Motion.NavigationMotion();
        var temp54 = new global::Fuse.Animations.Change<Uno.UX.Size>(indicator_Width_inst);
        page1 = new global::Fuse.Controls.Page();
        var temp55 = new global::Fuse.Controls.ScrollView();
        var temp56 = new global::Fuse.Controls.Grid();
        var temp57 = new Template1(this, this);
        var temp58 = new Template2(this, this);
        var temp59 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp22, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp60 = new global::Fuse.Navigation.WhileActive();
        var temp61 = new global::Fuse.Triggers.Actions.Set<bool>(shrinkIndicatorWidth_Value_inst);
        var temp62 = new global::Fuse.Triggers.Actions.Set<float4>(indicatorColorAttractor_Value_inst);
        var temp63 = new global::Fuse.Triggers.Actions.Set<float4>(bgColorAttractor_Value_inst);
        var temp64 = new global::Fuse.Triggers.Actions.Set<float4>(titleTextAttractor_Value_inst);
        var temp65 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp66 = new global::Fuse.Animations.Change<float>(h1_Opacity_inst);
        var temp67 = new global::Fuse.Animations.Change<float>(col1_Width_inst);
        var temp68 = new global::Fuse.Animations.Change<float4>(c1_Color_inst);
        page2 = new global::Fuse.Controls.Page();
        var temp69 = new global::Fuse.Controls.StackPanel();
        var temp70 = new global::Fuse.Controls.Panel();
        var temp71 = new global::Fuse.Controls.NativeViewHost();
        var temp72 = new global::Fuse.Controls.MapView();
        var temp73 = new Template3(this, this);
        var temp74 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp23, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp75 = new global::Fuse.Controls.Panel();
        var temp76 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp24, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp77 = new global::Fuse.Controls.Panel();
        var temp78 = new global::Fuse.Controls.ScrollView();
        var temp79 = new global::Fuse.Controls.Grid();
        var temp80 = new Template4(this, this);
        var temp81 = new global::Fuse.Reactive.DataBinding(temp3_Items_inst, temp25, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp82 = new global::Fuse.Navigation.WhileActive();
        var temp83 = new global::Fuse.Triggers.Actions.Set<bool>(shrinkIndicatorWidth_Value_inst);
        var temp84 = new global::Fuse.Triggers.Actions.Set<float4>(indicatorColorAttractor_Value_inst);
        var temp85 = new global::Fuse.Triggers.Actions.Set<float4>(bgColorAttractor_Value_inst);
        var temp86 = new global::Fuse.Triggers.Actions.Set<float4>(titleTextAttractor_Value_inst);
        var temp87 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp88 = new global::Fuse.Animations.Change<float>(h2_Opacity_inst);
        var temp89 = new global::Fuse.Animations.Change<float>(col2_Width_inst);
        var temp90 = new global::Fuse.Animations.Change<float4>(c2_Color_inst);
        page3 = new global::Fuse.Controls.Page();
        var temp91 = new global::PagePlaceholder();
        var temp92 = new global::Fuse.Navigation.WhileActive();
        var temp93 = new global::Fuse.Triggers.Actions.Set<bool>(shrinkIndicatorWidth_Value_inst);
        var temp94 = new global::Fuse.Triggers.Actions.Set<float4>(indicatorColorAttractor_Value_inst);
        var temp95 = new global::Fuse.Triggers.Actions.Set<float4>(bgColorAttractor_Value_inst);
        var temp96 = new global::Fuse.Triggers.Actions.Set<float4>(titleTextAttractor_Value_inst);
        var temp97 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp98 = new global::Fuse.Animations.Change<float>(h3_Opacity_inst);
        var temp99 = new global::Fuse.Animations.Change<float>(col3_Width_inst);
        var temp100 = new global::Fuse.Animations.Change<float4>(c3_Color_inst);
        page4 = new global::Fuse.Controls.Page();
        var temp101 = new global::PagePlaceholder();
        var temp102 = new global::Fuse.Navigation.WhileActive();
        var temp103 = new global::Fuse.Triggers.Actions.Set<bool>(shrinkIndicatorWidth_Value_inst);
        var temp104 = new global::Fuse.Triggers.Actions.Set<float4>(indicatorColorAttractor_Value_inst);
        var temp105 = new global::Fuse.Triggers.Actions.Set<float4>(bgColorAttractor_Value_inst);
        var temp106 = new global::Fuse.Triggers.Actions.Set<float4>(titleTextAttractor_Value_inst);
        var temp107 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp108 = new global::Fuse.Animations.Move();
        var temp109 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp110 = new global::Fuse.Animations.Change<float>(h4_Opacity_inst);
        var temp111 = new global::Fuse.Animations.Change<float>(col4_Width_inst);
        var temp112 = new global::Fuse.Animations.Change<float4>(c4_Color_inst);
        temp26.Code = "\n\t\tvar Observable = require(\"FuseJS/Observable\");\n        var GeoLocation = require(\"FuseJS/GeoLocation\");\n        var Backend = require(\"/Modules/Backend\");\n        var FileSystem = require(\"FuseJS/FileSystem\");\n\n        // Immediate\n\n        var Tours = Observable();\n        var ToursArr = [];\n\n        fetch('https://dont-be-a-tourist.firebaseio.com/Tours.json')\n            .then(function(response) { return response.json(); })\n            .then(function(responseObject) { \n            \tresponseObject.forEach(function(el){\n            \t\tvar imgUrl = el.Photo;\n            \t\tvar img = imgUrl.substring(imgUrl.lastIndexOf('/')+1,imgUrl.lastIndexOf('.')+4);\n\n\t\t\t\t\tconsole.log(FileSystem.dataDirectory + \"/\" + img);\n\t\t\t\t\tel.LocalPhoto = FileSystem.dataDirectory + \"/\" + img;\n\t\t\t\t    ToursArr.push(el);\n\n\t\t\t\t\tFileSystem.exists(FileSystem.dataDirectory + \"/\" + img)\n\t\t\t\t\t    .then(function(x) {\n\t\t\t\t\t        console.log(x ? \"it's there! =)\" : \"it's missing :/\");\n\t\t\t\t\t       \n\t\t\t\t\t        if (!x){\n\t\t\t\t\t\t\tvar oReq = new XMLHttpRequest();\n\t\t\t\t\t\t\toReq.open(\"GET\", imgUrl, true);\n\t\t\t\t\t\t\toReq.responseType = \"arraybuffer\";\n\n\t\t\t\t\t\t\toReq.onload = function (oEvent) {\n\t\t\t\t\t\t\t  var arrayBuffer = oReq.response; \n\t\t\t\t\t\t\t  if (arrayBuffer) {\n\t\t\t\t\t\t\t    var path = FileSystem.dataDirectory + \"/\" + img;\n\t\t\t\t\t\t\t    FileSystem.writeBufferToFile(path, arrayBuffer);\n\t\t\t\t\t\t\t  }\n\t\t\t\t\t\t\t};\n\n\t\t\t\t\t\t\toReq.send(null);    \t\t\t\t\t        \n\t\t\t\t\t\t\t}\n\n\t\t\t\t\t    }, function(error) {\n\t\t\t\t\t        console.log(\"Unable to check if file exists\");\n\n\t\t\t\t\t    });\n\n\n            \t});\n            \t//console.log(JSON.stringify(ToursArr));\n            \tTours.replaceAll(ToursArr);\n\t\t});\n\n        var Locations = Observable();\n        var MasterLocations = Observable();\n        var LocArr = [];\n\n        fetch('https://dont-be-a-tourist.firebaseio.com/Locations.json')\n            .then(function(response) { return response.json(); })\n            .then(function(responseObject) { \n            \tresponseObject.forEach(function(el){\n\n            \t\tvar imgUrl = el.Photo;\n            \t\tvar img = imgUrl.substring(imgUrl.lastIndexOf('/')+1,imgUrl.lastIndexOf('.')+4);\n\n\t\t\t\t\tel.LocalPhoto = FileSystem.dataDirectory + \"/\" + img;\n\t\t\t\t    LocArr.push(el);\n\n\t\t\t\t\tFileSystem.exists(FileSystem.dataDirectory + \"/\" + img)\n\t\t\t\t\t    .then(function(x) {\n\t\t\t\t\t        console.log(x ? \"it's there! =)\" : \"it's missing :/\");\n\t\t\t\t\t       \n\t\t\t\t\t        if (!x){\n\t\t\t\t\t\t\tvar oReq = new XMLHttpRequest();\n\t\t\t\t\t\t\toReq.open(\"GET\", imgUrl, true);\n\t\t\t\t\t\t\toReq.responseType = \"arraybuffer\";\n\n\t\t\t\t\t\t\toReq.onload = function (oEvent) {\n\t\t\t\t\t\t\t  var arrayBuffer = oReq.response; \n\t\t\t\t\t\t\t  if (arrayBuffer) {\n\t\t\t\t\t\t\t    var path = FileSystem.dataDirectory + \"/\" + img;\n\t\t\t\t\t\t\t    FileSystem.writeBufferToFile(path, arrayBuffer);\n\t\t\t\t\t\t\t  }\n\t\t\t\t\t\t\t};\n\n\t\t\t\t\t\t\toReq.send(null);    \t\t\t\t\t        \n\t\t\t\t\t\t\t}\n\n\t\t\t\t\t    }, function(error) {\n\t\t\t\t\t        console.log(\"Unable to check if file exists\");\n\t\t\t\t\t    });\n\n            \t\tvar strLoc = el.Locations;\n            \t\tMasterLocations.add(el);\n            \t});\n            \t\tLocations.replaceAll(LocArr);\n\t\t});\n\n\n\n        var locClick = function(e){\n        \tvar locs = JSON.parse(e.data.Locations)\n        \tLocations.clear();\n        \t\n        \tMasterLocations.forEach(function(place){\n        \t\tlocs.forEach(function(l){\n        \t\t\t//console.log(l + '=' + place.ID)\n        \t\t\tif (l==place.ID){\n        \t\t\t\tLocations.add(place);\n        \t\t\t\t//console.log('Adding place')\n        \t\t\t}\n        \t\t})\n        \t})\n        }\n\n\t\t\tvar timeoutLocation = Observable(\"\");\n\t\t\tvar timeoutMs = 5000;\n\t\t\tGeoLocation.getLocation(timeoutMs).then(function(location) {\n\t\t\t\ttimeoutLocation.value = JSON.stringify(location);\n\t\t\t});\n\n\n\n        module.exports = {\n            tours: Tours,\n            locations: Locations,\n            locClick : locClick,\n            timeoutLocation: timeoutLocation\n        };\n\n    ";
        temp26.LineNumber = 2;
        temp26.FileName = "MainView.ux";
        temp27.Children.Add(temp28);
        temp27.Children.Add(temp34);
        temp27.Children.Add(nav);
        temp28.Columns = "auto,1*,auto";
        temp28.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp28.Margin = float4(5f, 5f, 5f, 5f);
        global::Fuse.Controls.DockPanel.SetDock(temp28, Fuse.Layouts.Dock.Top);
        temp28.Children.Add(temp29);
        temp28.Children.Add(titleText);
        temp28.Children.Add(temp33);
        temp29.RowCount = 2;
        temp29.ColumnCount = 2;
        temp29.Width = new Uno.UX.Size(22f, Uno.UX.Unit.Unspecified);
        temp29.Height = new Uno.UX.Size(22f, Uno.UX.Unit.Unspecified);
        temp29.Margin = float4(10f, 10f, 10f, 10f);
        temp29.Children.Add(temp30);
        temp30.Count = 4;
        temp30.Templates.Add(temp31);
        titleText.Value = "GEO TEST";
        titleText.FontSize = 25f;
        titleText.Color = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        titleText.Alignment = Fuse.Elements.Alignment.Center;
        titleText.Name = __selector6;
        titleText.Font = temp32;
        temp33.Color = float4(0.5215687f, 0.5333334f, 0.5294118f, 1f);
        temp33.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp33.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp33.Margin = float4(10f, 10f, 10f, 10f);
        temp33.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/search.png"));
        temp34.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp34, Fuse.Layouts.Dock.Top);
        temp34.Children.Add(indicator);
        temp34.Children.Add(temp35);
        temp34.Children.Add(temp36);
        indicator.CornerRadius = float4(30f, 30f, 30f, 30f);
        indicator.Color = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        indicator.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        indicator.Margin = float4(0f, 10f, 0f, 10f);
        indicator.ZOffset = 0.1f;
        indicator.Name = __selector7;
        global::Fuse.Controls.LayoutControl.SetLayoutMaster(indicator, p1);
        temp35.ColumnCount = 5;
        temp35.Margin = float4(-30f, 0f, -30f, 0f);
        temp35.Children.Add(p1);
        temp35.Children.Add(p4);
        p1.Name = __selector8;
        global::Fuse.Controls.Grid.SetColumn(p1, 0);
        global::Fuse.Controls.Grid.SetColumnSpan(p1, 2);
        p4.Name = __selector9;
        global::Fuse.Controls.Grid.SetColumn(p4, 3);
        global::Fuse.Controls.Grid.SetColumnSpan(p4, 2);
        temp36.Margin = float4(-20f, 0f, -20f, 0f);
        temp36.ZOffset = 1f;
        temp36.ColumnList.Add(col1);
        temp36.ColumnList.Add(col2);
        temp36.ColumnList.Add(col3);
        temp36.ColumnList.Add(col4);
        temp36.Children.Add(temp37);
        temp36.Children.Add(temp41);
        temp36.Children.Add(temp45);
        temp36.Children.Add(temp49);
        col1.WidthMetric = Fuse.Layouts.Metric.Proportion;
        col1.Width = 1f;
        col2.WidthMetric = Fuse.Layouts.Metric.Proportion;
        col2.Width = 1f;
        col3.WidthMetric = Fuse.Layouts.Metric.Proportion;
        col3.Width = 1f;
        col4.WidthMetric = Fuse.Layouts.Metric.Proportion;
        col4.Width = 1f;
        temp37.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp37.Children.Add(temp38);
        temp37.Children.Add(temp39);
        temp38.Columns = "auto,1*";
        temp38.Alignment = Fuse.Elements.Alignment.Left;
        temp38.Margin = float4(40f, 0f, 40f, 0f);
        temp38.Children.Add(c1);
        temp38.Children.Add(h1);
        c1.Color = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        c1.Name = __selector10;
        c1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/basket.png"));
        h1.Value = "Tours";
        h1.Name = __selector11;
        temp39.Actions.Add(temp40);
        temp40.Value = page1;
        temp41.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp41.Children.Add(temp42);
        temp41.Children.Add(temp43);
        temp42.Columns = "auto,1*";
        temp42.Alignment = Fuse.Elements.Alignment.Left;
        temp42.Margin = float4(30f, 0f, 30f, 0f);
        temp42.Children.Add(c2);
        temp42.Children.Add(h2);
        c2.Color = float4(0.2156863f, 0.6313726f, 0.8431373f, 1f);
        c2.Name = __selector12;
        c2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/accountbalance.png"));
        h2.Value = "Locations";
        h2.Name = __selector13;
        temp43.Actions.Add(temp44);
        temp44.Value = page2;
        temp45.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp45.Children.Add(temp46);
        temp45.Children.Add(temp47);
        temp46.Columns = "auto,1*";
        temp46.Alignment = Fuse.Elements.Alignment.Left;
        temp46.Margin = float4(30f, 0f, 30f, 0f);
        temp46.Children.Add(c3);
        temp46.Children.Add(h3);
        c3.Color = float4(1f, 0.5960785f, 0.01176471f, 1f);
        c3.Name = __selector14;
        c3.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/play.png"));
        h3.Value = "Information";
        h3.Name = __selector15;
        temp47.Actions.Add(temp48);
        temp48.Value = page3;
        temp49.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp49.Children.Add(temp50);
        temp49.Children.Add(temp51);
        temp50.Columns = "auto,1*";
        temp50.Alignment = Fuse.Elements.Alignment.Left;
        temp50.Margin = float4(30f, 0f, 30f, 0f);
        temp50.Children.Add(c4);
        temp50.Children.Add(h4);
        c4.Color = float4(0.9607843f, 0.5607843f, 0.5294118f, 1f);
        c4.Name = __selector16;
        c4.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/person.png"));
        h4.Value = "Friends";
        h4.Name = __selector17;
        temp51.Actions.Add(temp52);
        temp52.Value = page4;
        nav.Name = __selector18;
        nav.Motion = temp53;
        nav.Children.Add(indicatorColorAttractor);
        nav.Children.Add(bgColor);
        nav.Children.Add(bgColorAttractor);
        nav.Children.Add(titleTextAttractor);
        nav.Children.Add(shrinkIndicatorWidth);
        nav.Children.Add(page1);
        nav.Children.Add(page2);
        nav.Children.Add(page3);
        nav.Children.Add(page4);
        temp53.GotoEasing = Fuse.Animations.Easing.BackOut;
        indicatorColorAttractor.Value = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        indicatorColorAttractor.Name = __selector19;
        bgColor.Color = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        bgColor.Opacity = 0.12f;
        bgColor.Layer = Fuse.Layer.Background;
        bgColor.Name = __selector20;
        bgColorAttractor.Value = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        bgColorAttractor.Name = __selector21;
        titleTextAttractor.Value = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        titleTextAttractor.Name = __selector22;
        shrinkIndicatorWidth.Name = __selector23;
        shrinkIndicatorWidth.Animators.Add(temp54);
        temp54.Value = new Uno.UX.Size(90f, Uno.UX.Unit.Unspecified);
        temp54.Duration = 0.25;
        page1.Name = __selector24;
        page1.Children.Add(temp55);
        page1.Children.Add(temp60);
        page1.Children.Add(temp65);
        temp55.Children.Add(temp56);
        temp56.ColumnCount = 1;
        temp56.Children.Add(temp);
        temp.Templates.Add(temp57);
        temp.Templates.Add(temp58);
        temp.Bindings.Add(temp59);
        temp60.Threshold = 0.5f;
        temp60.Actions.Add(temp61);
        temp60.Actions.Add(temp62);
        temp60.Actions.Add(temp63);
        temp60.Actions.Add(temp64);
        temp61.Value = false;
        temp62.Value = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        temp63.Value = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        temp64.Value = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        temp65.Animators.Add(temp66);
        temp65.Animators.Add(temp67);
        temp65.Animators.Add(temp68);
        temp66.Value = 1f;
        temp67.Value = 2f;
        temp68.Value = Fuse.Drawing.Colors.White;
        page2.Name = __selector25;
        page2.Children.Add(temp69);
        temp69.Children.Add(temp70);
        temp69.Children.Add(temp75);
        temp69.Children.Add(temp77);
        temp70.Height = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp70.Children.Add(temp71);
        temp71.Children.Add(temp72);
        temp72.Zoom = 10;
        temp72.Latitude = 41.99646;
        temp72.Longitude = 21.43141;
        temp72.Children.Add(temp1);
        temp1.Templates.Add(temp73);
        temp1.Bindings.Add(temp74);
        temp75.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp75.Children.Add(temp2);
        temp2.Bindings.Add(temp76);
        temp77.Height = new Uno.UX.Size(400f, Uno.UX.Unit.Unspecified);
        temp77.Children.Add(temp78);
        temp77.Children.Add(temp82);
        temp77.Children.Add(temp87);
        temp78.Children.Add(temp79);
        temp79.ColumnCount = 1;
        temp79.Children.Add(temp3);
        temp3.Templates.Add(temp80);
        temp3.Bindings.Add(temp81);
        temp82.Threshold = 0.5f;
        temp82.Actions.Add(temp83);
        temp82.Actions.Add(temp84);
        temp82.Actions.Add(temp85);
        temp82.Actions.Add(temp86);
        temp83.Value = true;
        temp84.Value = float4(0.2156863f, 0.6313726f, 0.8431373f, 1f);
        temp85.Value = float4(0.2156863f, 0.6313726f, 0.8431373f, 1f);
        temp86.Value = float4(0.2156863f, 0.6313726f, 0.8431373f, 1f);
        temp87.Animators.Add(temp88);
        temp87.Animators.Add(temp89);
        temp87.Animators.Add(temp90);
        temp88.Value = 1f;
        temp89.Value = 2f;
        temp90.Value = Fuse.Drawing.Colors.White;
        page3.Name = __selector26;
        page3.Children.Add(temp91);
        page3.Children.Add(temp92);
        page3.Children.Add(temp97);
        temp91.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/screen3.png"));
        temp92.Threshold = 0.5f;
        temp92.Actions.Add(temp93);
        temp92.Actions.Add(temp94);
        temp92.Actions.Add(temp95);
        temp92.Actions.Add(temp96);
        temp93.Value = true;
        temp94.Value = float4(1f, 0.5960785f, 0.01176471f, 1f);
        temp95.Value = float4(1f, 0.5960785f, 0.01176471f, 1f);
        temp96.Value = float4(1f, 0.5960785f, 0.01176471f, 1f);
        temp97.Animators.Add(temp98);
        temp97.Animators.Add(temp99);
        temp97.Animators.Add(temp100);
        temp98.Value = 1f;
        temp99.Value = 2f;
        temp100.Value = Fuse.Drawing.Colors.White;
        page4.Name = __selector27;
        page4.Children.Add(temp101);
        page4.Children.Add(temp102);
        page4.Children.Add(temp107);
        page4.Children.Add(temp109);
        temp101.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/screen4.png"));
        temp102.Threshold = 0.5f;
        temp102.Actions.Add(temp103);
        temp102.Actions.Add(temp104);
        temp102.Actions.Add(temp105);
        temp102.Actions.Add(temp106);
        temp103.Value = false;
        temp104.Value = float4(0.9607843f, 0.5607843f, 0.5294118f, 1f);
        temp105.Value = float4(0.9607843f, 0.5607843f, 0.5294118f, 1f);
        temp106.Value = float4(0.9607843f, 0.5607843f, 0.5294118f, 1f);
        temp107.Scale = 0.333f;
        temp107.Animators.Add(temp108);
        temp108.X = 1f;
        temp108.RelativeTo = Fuse.Elements.TranslationModes.PositionOffset;
        temp108.RelativeNode = p4;
        temp108.Target = indicator;
        temp109.Animators.Add(temp110);
        temp109.Animators.Add(temp111);
        temp109.Animators.Add(temp112);
        temp110.Value = 1f;
        temp111.Value = 2f;
        temp112.Value = Fuse.Drawing.Colors.White;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(titleText);
        __g_nametable.Objects.Add(indicator);
        __g_nametable.Objects.Add(p1);
        __g_nametable.Objects.Add(p4);
        __g_nametable.Objects.Add(col1);
        __g_nametable.Objects.Add(col2);
        __g_nametable.Objects.Add(col3);
        __g_nametable.Objects.Add(col4);
        __g_nametable.Objects.Add(c1);
        __g_nametable.Objects.Add(h1);
        __g_nametable.Objects.Add(c2);
        __g_nametable.Objects.Add(h2);
        __g_nametable.Objects.Add(c3);
        __g_nametable.Objects.Add(h3);
        __g_nametable.Objects.Add(c4);
        __g_nametable.Objects.Add(h4);
        __g_nametable.Objects.Add(nav);
        __g_nametable.Objects.Add(indicatorColorAttractor);
        __g_nametable.Objects.Add(bgColor);
        __g_nametable.Objects.Add(bgColorAttractor);
        __g_nametable.Objects.Add(titleTextAttractor);
        __g_nametable.Objects.Add(shrinkIndicatorWidth);
        __g_nametable.Objects.Add(page1);
        __g_nametable.Objects.Add(page2);
        __g_nametable.Objects.Add(page3);
        __g_nametable.Objects.Add(page4);
        this.Children.Add(temp26);
        this.Children.Add(temp27);
    }
    static global::Uno.UX.Selector __selector0 = "Active";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "Width";
    static global::Uno.UX.Selector __selector3 = "Items";
    static global::Uno.UX.Selector __selector4 = "Value";
    static global::Uno.UX.Selector __selector5 = "Opacity";
    static global::Uno.UX.Selector __selector6 = "titleText";
    static global::Uno.UX.Selector __selector7 = "indicator";
    static global::Uno.UX.Selector __selector8 = "p1";
    static global::Uno.UX.Selector __selector9 = "p4";
    static global::Uno.UX.Selector __selector10 = "c1";
    static global::Uno.UX.Selector __selector11 = "h1";
    static global::Uno.UX.Selector __selector12 = "c2";
    static global::Uno.UX.Selector __selector13 = "h2";
    static global::Uno.UX.Selector __selector14 = "c3";
    static global::Uno.UX.Selector __selector15 = "h3";
    static global::Uno.UX.Selector __selector16 = "c4";
    static global::Uno.UX.Selector __selector17 = "h4";
    static global::Uno.UX.Selector __selector18 = "nav";
    static global::Uno.UX.Selector __selector19 = "indicatorColorAttractor";
    static global::Uno.UX.Selector __selector20 = "bgColor";
    static global::Uno.UX.Selector __selector21 = "bgColorAttractor";
    static global::Uno.UX.Selector __selector22 = "titleTextAttractor";
    static global::Uno.UX.Selector __selector23 = "shrinkIndicatorWidth";
    static global::Uno.UX.Selector __selector24 = "page1";
    static global::Uno.UX.Selector __selector25 = "page2";
    static global::Uno.UX.Selector __selector26 = "page3";
    static global::Uno.UX.Selector __selector27 = "page4";
}
