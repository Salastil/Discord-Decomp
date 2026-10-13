package com.yalantis.ucrop;

import android.content.Intent;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.PorterDuff;
import android.graphics.RectF;
import android.graphics.drawable.Animatable;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.AsyncTask;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import androidx.appcompat.app.ActionBar;
import androidx.appcompat.app.AppCompatDelegate;
import androidx.appcompat.widget.Toolbar;
import androidx.appcompat.widget.c4;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.j0;
import androidx.core.view.r;
import androidx.core.view.s0;
import com.discord.R;
import com.facebook.react.devsupport.t;
import com.yalantis.ucrop.UCropActivity;
import com.yalantis.ucrop.task.BitmapCropTask;
import com.yalantis.ucrop.view.GestureCropImageView;
import com.yalantis.ucrop.view.OverlayView;
import com.yalantis.ucrop.view.UCropView;
import com.yalantis.ucrop.view.widget.AspectRatioTextView;
import com.yalantis.ucrop.view.widget.HorizontalProgressWheelView;
import e.i;
import e.j;
import e.k;
import e.m;
import e.n;
import e.u;
import e.v;
import e4.f;
import f4.l;
import i.h;
import io.sentry.android.core.internal.gestures.e;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.WeakHashMap;
import kotlin.jvm.internal.Intrinsics;
import m3.a;
import m3.x;
import un.c;
import un.d;
import xn.b;

/* loaded from: classes3.dex */
public class UCropActivity extends h {

    /* renamed from: b0, reason: collision with root package name */
    public static final Bitmap.CompressFormat f6821b0 = Bitmap.CompressFormat.JPEG;
    public int E;
    public int F;
    public boolean G;
    public UCropView I;
    public GestureCropImageView J;
    public OverlayView K;
    public ViewGroup L;
    public ViewGroup M;
    public ViewGroup N;
    public ViewGroup O;
    public ViewGroup P;
    public ViewGroup Q;
    public TextView S;
    public TextView T;
    public View U;
    public a V;

    /* renamed from: e, reason: collision with root package name */
    public String f6822e;

    /* renamed from: i, reason: collision with root package name */
    public int f6823i;

    /* renamed from: v, reason: collision with root package name */
    public int f6824v;

    /* renamed from: w, reason: collision with root package name */
    public int f6825w;

    /* renamed from: x, reason: collision with root package name */
    public int f6826x;

    /* renamed from: y, reason: collision with root package name */
    public int f6827y;
    public boolean H = true;
    public final ArrayList R = new ArrayList();
    public Bitmap.CompressFormat W = f6821b0;
    public int X = 90;
    public int[] Y = {1, 2, 3};
    public final c Z = new c(this, 0);
    public final d a0 = new d(this, 3);

    static {
        l lVar = AppCompatDelegate.f760d;
        int i5 = c4.a;
    }

    public final void e(int i5) {
        GestureCropImageView gestureCropImageView = this.J;
        int i6 = this.Y[i5];
        gestureCropImageView.setScaleEnabled(i6 == 3 || i6 == 1);
        GestureCropImageView gestureCropImageView2 = this.J;
        int i10 = this.Y[i5];
        gestureCropImageView2.setRotateEnabled(i10 == 3 || i10 == 2);
    }

    public final void f(Throwable th2) {
        setResult(96, new Intent().putExtra("com.yalantis.ucrop.Error", th2));
    }

    public final void g(int i5) {
        if (this.G) {
            this.L.setSelected(i5 == R.id.state_aspect_ratio);
            this.M.setSelected(i5 == R.id.state_rotate);
            this.N.setSelected(i5 == R.id.state_scale);
            this.O.setVisibility(i5 == R.id.state_aspect_ratio ? 0 : 8);
            this.P.setVisibility(i5 == R.id.state_rotate ? 0 : 8);
            this.Q.setVisibility(i5 == R.id.state_scale ? 0 : 8);
            x.a((ViewGroup) findViewById(R.id.ucrop_photobox), this.V);
            this.N.findViewById(R.id.text_view_scale).setVisibility(i5 == R.id.state_scale ? 0 : 8);
            this.L.findViewById(R.id.text_view_crop).setVisibility(i5 == R.id.state_aspect_ratio ? 0 : 8);
            this.M.findViewById(R.id.text_view_rotate).setVisibility(i5 == R.id.state_rotate ? 0 : 8);
            if (i5 == R.id.state_scale) {
                e(0);
            } else if (i5 == R.id.state_rotate) {
                e(1);
            } else {
                e(2);
            }
        }
    }

    @Override // androidx.fragment.app.FragmentActivity, androidx.activity.ComponentActivity, x0.h, android.app.Activity
    public final void onCreate(Bundle bundle) {
        ArrayList arrayList;
        u uVar = u.f7833e;
        u uVar2 = u.f7834i;
        super.onCreate(bundle);
        Intent intent = getIntent();
        int i5 = 1;
        boolean booleanExtra = intent.getBooleanExtra("com.yalantis.ucrop.StatusBarLight", true);
        int i6 = 0;
        boolean booleanExtra2 = intent.getBooleanExtra("com.yalantis.ucrop.NavigationBarLight", false);
        int i10 = 2;
        v statusBarStyle = booleanExtra ? new v(1, uVar2) : new v(2, uVar);
        v navigationBarStyle = booleanExtra2 ? new v(1, uVar2) : new v(2, uVar);
        int i11 = i.a;
        Intrinsics.checkNotNullParameter(this, "<this>");
        Intrinsics.checkNotNullParameter(statusBarStyle, "statusBarStyle");
        Intrinsics.checkNotNullParameter(navigationBarStyle, "navigationBarStyle");
        View decorView = getWindow().getDecorView();
        Intrinsics.checkNotNullExpressionValue(decorView, "window.decorView");
        Resources resources = decorView.getResources();
        Intrinsics.checkNotNullExpressionValue(resources, "view.resources");
        boolean booleanValue = ((Boolean) statusBarStyle.f7836b.invoke(resources)).booleanValue();
        Resources resources2 = decorView.getResources();
        Intrinsics.checkNotNullExpressionValue(resources2, "view.resources");
        boolean booleanValue2 = ((Boolean) navigationBarStyle.f7836b.invoke(resources2)).booleanValue();
        int i12 = Build.VERSION.SDK_INT;
        f nVar = i12 >= 30 ? new n() : i12 >= 29 ? new m() : i12 >= 28 ? new e.l() : i12 >= 26 ? new k() : new j();
        Window window = getWindow();
        Intrinsics.checkNotNullExpressionValue(window, "window");
        nVar.J(statusBarStyle, navigationBarStyle, window, decorView, booleanValue, booleanValue2);
        Window window2 = getWindow();
        Intrinsics.checkNotNullExpressionValue(window2, "window");
        nVar.b(window2);
        setContentView(R.layout.ucrop_activity_photobox);
        this.f6823i = intent.getIntExtra("com.yalantis.ucrop.ToolbarColor", getColor(R.color.ucrop_color_toolbar));
        this.f6824v = intent.getIntExtra("com.yalantis.ucrop.UcropColorControlsWidgetActive", getColor(R.color.ucrop_color_active_controls_color));
        this.f6825w = intent.getIntExtra("com.yalantis.ucrop.UcropToolbarWidgetColor", getColor(R.color.ucrop_color_toolbar_widget));
        this.f6827y = intent.getIntExtra("com.yalantis.ucrop.UcropToolbarCancelDrawable", R.drawable.ucrop_ic_cross);
        this.E = intent.getIntExtra("com.yalantis.ucrop.UcropToolbarCropDrawable", 2131232522);
        String stringExtra = intent.getStringExtra("com.yalantis.ucrop.UcropToolbarTitleText");
        this.f6822e = stringExtra;
        if (stringExtra == null) {
            stringExtra = getResources().getString(R.string.ucrop_label_edit_photo);
        }
        this.f6822e = stringExtra;
        this.F = intent.getIntExtra("com.yalantis.ucrop.UcropLogoColor", getColor(R.color.ucrop_color_default_logo));
        this.G = !intent.getBooleanExtra("com.yalantis.ucrop.HideBottomControls", false);
        this.f6826x = intent.getIntExtra("com.yalantis.ucrop.UcropRootViewBackgroundColor", getColor(R.color.ucrop_color_crop_background));
        Toolbar toolbar = (Toolbar) findViewById(R.id.toolbar);
        t tVar = new t(i5);
        WeakHashMap weakHashMap = s0.a;
        j0.m(toolbar, tVar);
        toolbar.setBackgroundColor(this.f6823i);
        toolbar.setTitleTextColor(this.f6825w);
        TextView textView = (TextView) toolbar.findViewById(R.id.toolbar_title);
        textView.setTextColor(this.f6825w);
        textView.setText(this.f6822e);
        Drawable mutate = getDrawable(this.f6827y).mutate();
        int i13 = this.f6825w;
        PorterDuff.Mode mode = PorterDuff.Mode.SRC_ATOP;
        mutate.setColorFilter(i13, mode);
        toolbar.setNavigationIcon(mutate);
        setSupportActionBar(toolbar);
        ActionBar supportActionBar = getSupportActionBar();
        if (supportActionBar != null) {
            supportActionBar.n();
        }
        UCropView uCropView = (UCropView) findViewById(R.id.ucrop);
        this.I = uCropView;
        this.J = uCropView.getCropImageView();
        this.K = this.I.getOverlayView();
        this.J.setTransformImageListener(this.Z);
        ((ImageView) findViewById(R.id.image_view_logo)).setColorFilter(this.F, mode);
        findViewById(R.id.ucrop_frame).setBackgroundColor(this.f6826x);
        if (!this.G) {
            ((RelativeLayout.LayoutParams) findViewById(R.id.ucrop_frame).getLayoutParams()).bottomMargin = 0;
            findViewById(R.id.ucrop_frame).requestLayout();
        }
        ViewGroup viewGroup = null;
        if (this.G) {
            ViewGroup viewGroup2 = (ViewGroup) ((ViewGroup) findViewById(R.id.ucrop_photobox)).findViewById(R.id.controls_wrapper);
            viewGroup2.setVisibility(0);
            LayoutInflater.from(this).inflate(R.layout.ucrop_controls, viewGroup2, true);
            a aVar = new a();
            this.V = aVar;
            aVar.I(50L);
            ViewGroup viewGroup3 = (ViewGroup) findViewById(R.id.state_aspect_ratio);
            this.L = viewGroup3;
            d dVar = this.a0;
            viewGroup3.setOnClickListener(dVar);
            ViewGroup viewGroup4 = (ViewGroup) findViewById(R.id.state_rotate);
            this.M = viewGroup4;
            viewGroup4.setOnClickListener(dVar);
            ViewGroup viewGroup5 = (ViewGroup) findViewById(R.id.state_scale);
            this.N = viewGroup5;
            viewGroup5.setOnClickListener(dVar);
            this.O = (ViewGroup) findViewById(R.id.layout_aspect_ratio);
            this.P = (ViewGroup) findViewById(R.id.layout_rotate_wheel);
            this.Q = (ViewGroup) findViewById(R.id.layout_scale_wheel);
            View findViewById = findViewById(R.id.controls_wrapper);
            final int dimensionPixelSize = getResources().getDimensionPixelSize(R.dimen.ucrop_height_wrapper_states);
            j0.m(findViewById.findViewById(R.id.wrapper_states), new r() { // from class: un.b
                @Override // androidx.core.view.r
                public final WindowInsetsCompat a(View view, WindowInsetsCompat windowInsetsCompat) {
                    Bitmap.CompressFormat compressFormat = UCropActivity.f6821b0;
                    Insets f2 = windowInsetsCompat.a.f(519);
                    int i14 = f2.a;
                    int i15 = f2.f1513c;
                    int i16 = f2.f1514d;
                    view.setPaddingRelative(i14, 0, i15, i16);
                    ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
                    int i17 = dimensionPixelSize + i16;
                    if (layoutParams.height != i17) {
                        layoutParams.height = i17;
                        view.setLayoutParams(layoutParams);
                    }
                    return windowInsetsCompat;
                }
            });
            int intExtra = intent.getIntExtra("com.yalantis.ucrop.AspectRatioSelectedByDefault", 0);
            ArrayList parcelableArrayListExtra = intent.getParcelableArrayListExtra("com.yalantis.ucrop.AspectRatioOptions");
            if (parcelableArrayListExtra == null || parcelableArrayListExtra.isEmpty()) {
                parcelableArrayListExtra = new ArrayList();
                parcelableArrayListExtra.add(new wn.a(null, 1.0f, 1.0f));
                parcelableArrayListExtra.add(new wn.a(null, 3.0f, 4.0f));
                parcelableArrayListExtra.add(new wn.a(getString(R.string.ucrop_label_original).toUpperCase(), 0.0f, 0.0f));
                parcelableArrayListExtra.add(new wn.a(null, 3.0f, 2.0f));
                parcelableArrayListExtra.add(new wn.a(null, 16.0f, 9.0f));
                intExtra = 2;
            }
            LinearLayout linearLayout = (LinearLayout) findViewById(R.id.layout_aspect_ratio);
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(0, -1);
            layoutParams.weight = 1.0f;
            Iterator it = parcelableArrayListExtra.iterator();
            while (true) {
                boolean hasNext = it.hasNext();
                arrayList = this.R;
                if (!hasNext) {
                    break;
                }
                wn.a aVar2 = (wn.a) it.next();
                FrameLayout frameLayout = (FrameLayout) getLayoutInflater().inflate(R.layout.ucrop_aspect_ratio, viewGroup);
                frameLayout.setLayoutParams(layoutParams);
                AspectRatioTextView aspectRatioTextView = (AspectRatioTextView) frameLayout.getChildAt(0);
                aspectRatioTextView.setActiveColor(this.f6824v);
                aspectRatioTextView.setAspectRatio(aVar2);
                linearLayout.addView(frameLayout);
                arrayList.add(frameLayout);
                viewGroup = null;
            }
            ((ViewGroup) arrayList.get(intExtra)).setSelected(true);
            Iterator it2 = arrayList.iterator();
            while (it2.hasNext()) {
                ((ViewGroup) it2.next()).setOnClickListener(new d(this, i6));
            }
            this.S = (TextView) findViewById(R.id.text_view_rotate);
            int i14 = 1;
            ((HorizontalProgressWheelView) findViewById(R.id.rotate_scroll_wheel)).setScrollingListener(new c(this, i14));
            ((HorizontalProgressWheelView) findViewById(R.id.rotate_scroll_wheel)).setMiddleLineColor(this.f6824v);
            findViewById(R.id.wrapper_reset_rotate).setOnClickListener(new d(this, i14));
            findViewById(R.id.wrapper_rotate_by_angle).setOnClickListener(new d(this, i10));
            int i15 = this.f6824v;
            TextView textView2 = this.S;
            if (textView2 != null) {
                textView2.setTextColor(i15);
            }
            this.T = (TextView) findViewById(R.id.text_view_scale);
            ((HorizontalProgressWheelView) findViewById(R.id.scale_scroll_wheel)).setScrollingListener(new c(this, i10));
            ((HorizontalProgressWheelView) findViewById(R.id.scale_scroll_wheel)).setMiddleLineColor(this.f6824v);
            int i16 = this.f6824v;
            TextView textView3 = this.T;
            if (textView3 != null) {
                textView3.setTextColor(i16);
            }
            ImageView imageView = (ImageView) findViewById(R.id.image_view_state_scale);
            ImageView imageView2 = (ImageView) findViewById(R.id.image_view_state_rotate);
            ImageView imageView3 = (ImageView) findViewById(R.id.image_view_state_aspect_ratio);
            imageView.setImageDrawable(new yn.d(imageView.getDrawable(), this.f6824v));
            imageView2.setImageDrawable(new yn.d(imageView2.getDrawable(), this.f6824v));
            imageView3.setImageDrawable(new yn.d(imageView3.getDrawable(), this.f6824v));
        }
        Uri uri = (Uri) intent.getParcelableExtra("com.yalantis.ucrop.InputUri");
        Uri uri2 = (Uri) intent.getParcelableExtra("com.yalantis.ucrop.OutputUri");
        String stringExtra2 = intent.getStringExtra("com.yalantis.ucrop.CompressionFormatName");
        Bitmap.CompressFormat valueOf = !TextUtils.isEmpty(stringExtra2) ? Bitmap.CompressFormat.valueOf(stringExtra2) : null;
        if (valueOf == null) {
            valueOf = f6821b0;
        }
        this.W = valueOf;
        this.X = intent.getIntExtra("com.yalantis.ucrop.CompressionQuality", 90);
        int[] intArrayExtra = intent.getIntArrayExtra("com.yalantis.ucrop.AllowedGestures");
        if (intArrayExtra != null && intArrayExtra.length == 3) {
            this.Y = intArrayExtra;
        }
        this.J.setMaxBitmapSize(intent.getIntExtra("com.yalantis.ucrop.MaxBitmapSize", 0));
        this.J.setMaxScaleMultiplier(intent.getFloatExtra("com.yalantis.ucrop.MaxScaleMultiplier", 10.0f));
        this.J.setImageToWrapCropBoundsAnimDuration(intent.getIntExtra("com.yalantis.ucrop.ImageToCropBoundsAnimDuration", 500));
        this.K.setFreestyleCropEnabled(intent.getBooleanExtra("com.yalantis.ucrop.FreeStyleCrop", false));
        this.K.setDimmedColor(intent.getIntExtra("com.yalantis.ucrop.DimmedLayerColor", getResources().getColor(R.color.ucrop_color_default_dimmed)));
        this.K.setCircleDimmedLayer(intent.getBooleanExtra("com.yalantis.ucrop.CircleDimmedLayer", false));
        this.K.setShowCropFrame(intent.getBooleanExtra("com.yalantis.ucrop.ShowCropFrame", true));
        this.K.setCropFrameColor(intent.getIntExtra("com.yalantis.ucrop.CropFrameColor", getResources().getColor(R.color.ucrop_color_default_crop_frame)));
        this.K.setCropFrameStrokeWidth(intent.getIntExtra("com.yalantis.ucrop.CropFrameStrokeWidth", getResources().getDimensionPixelSize(R.dimen.ucrop_default_crop_frame_stoke_width)));
        this.K.setShowCropGrid(intent.getBooleanExtra("com.yalantis.ucrop.ShowCropGrid", true));
        this.K.setCropGridRowCount(intent.getIntExtra("com.yalantis.ucrop.CropGridRowCount", 2));
        this.K.setCropGridColumnCount(intent.getIntExtra("com.yalantis.ucrop.CropGridColumnCount", 2));
        this.K.setCropGridColor(intent.getIntExtra("com.yalantis.ucrop.CropGridColor", getResources().getColor(R.color.ucrop_color_default_crop_grid)));
        this.K.setCropGridCornerColor(intent.getIntExtra("com.yalantis.ucrop.CropGridCornerColor", getResources().getColor(R.color.ucrop_color_default_crop_grid)));
        this.K.setCropGridStrokeWidth(intent.getIntExtra("com.yalantis.ucrop.CropGridStrokeWidth", getResources().getDimensionPixelSize(R.dimen.ucrop_default_crop_grid_stoke_width)));
        float floatExtra = intent.getFloatExtra("com.yalantis.ucrop.AspectRatioX", -1.0f);
        float floatExtra2 = intent.getFloatExtra("com.yalantis.ucrop.AspectRatioY", -1.0f);
        int intExtra2 = intent.getIntExtra("com.yalantis.ucrop.AspectRatioSelectedByDefault", 0);
        ArrayList parcelableArrayListExtra2 = intent.getParcelableArrayListExtra("com.yalantis.ucrop.AspectRatioOptions");
        if (floatExtra >= 0.0f && floatExtra2 >= 0.0f) {
            ViewGroup viewGroup6 = this.L;
            if (viewGroup6 != null) {
                viewGroup6.setVisibility(8);
            }
            float f2 = floatExtra / floatExtra2;
            this.J.setTargetAspectRatio(Float.isNaN(f2) ? 0.0f : f2);
        } else if (parcelableArrayListExtra2 == null || intExtra2 >= parcelableArrayListExtra2.size()) {
            this.J.setTargetAspectRatio(0.0f);
        } else {
            float f10 = ((wn.a) parcelableArrayListExtra2.get(intExtra2)).f19961e / ((wn.a) parcelableArrayListExtra2.get(intExtra2)).f19962i;
            this.J.setTargetAspectRatio(Float.isNaN(f10) ? 0.0f : f10);
        }
        int intExtra3 = intent.getIntExtra("com.yalantis.ucrop.MaxSizeX", 0);
        int intExtra4 = intent.getIntExtra("com.yalantis.ucrop.MaxSizeY", 0);
        if (intExtra3 > 0 && intExtra4 > 0) {
            this.J.setMaxResultImageSizeX(intExtra3);
            this.J.setMaxResultImageSizeY(intExtra4);
        }
        if (uri == null || uri2 == null) {
            f(new NullPointerException(getString(R.string.ucrop_error_input_data_is_absent)));
            finish();
        } else {
            try {
                GestureCropImageView gestureCropImageView = this.J;
                int maxBitmapSize = gestureCropImageView.getMaxBitmapSize();
                new b(gestureCropImageView.getContext(), uri, uri2, maxBitmapSize, maxBitmapSize, new qd.f(14, gestureCropImageView)).executeOnExecutor(AsyncTask.THREAD_POOL_EXECUTOR, new Void[0]);
            } catch (Exception e9) {
                f(e9);
                finish();
            }
        }
        if (!this.G) {
            e(0);
        } else if (this.L.getVisibility() == 0) {
            g(R.id.state_aspect_ratio);
        } else {
            g(R.id.state_scale);
        }
        if (this.U == null) {
            this.U = new View(this);
            RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-1, -1);
            layoutParams2.addRule(3, R.id.toolbar);
            this.U.setLayoutParams(layoutParams2);
            this.U.setClickable(true);
        }
        ((RelativeLayout) findViewById(R.id.ucrop_photobox)).addView(this.U);
    }

    @Override // android.app.Activity
    public final boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.ucrop_menu_activity, menu);
        MenuItem findItem = menu.findItem(R.id.menu_loader);
        Drawable icon = findItem.getIcon();
        if (icon != null) {
            try {
                icon.mutate();
                icon.setColorFilter(this.f6825w, PorterDuff.Mode.SRC_ATOP);
                findItem.setIcon(icon);
            } catch (IllegalStateException e9) {
                Log.i("UCropActivity", e9.getMessage() + " - " + getString(R.string.ucrop_mutate_exception_hint));
            }
            ((Animatable) findItem.getIcon()).start();
        }
        MenuItem findItem2 = menu.findItem(R.id.menu_crop);
        Drawable drawable = getDrawable(this.E);
        if (drawable == null) {
            return true;
        }
        drawable.mutate();
        drawable.setColorFilter(this.f6825w, PorterDuff.Mode.SRC_ATOP);
        findItem2.setIcon(drawable);
        return true;
    }

    @Override // android.app.Activity
    public final boolean onOptionsItemSelected(MenuItem menuItem) {
        if (menuItem.getItemId() != R.id.menu_crop) {
            if (menuItem.getItemId() != 16908332) {
                return super.onOptionsItemSelected(menuItem);
            }
            onBackPressed();
            return true;
        }
        this.U.setClickable(true);
        this.H = true;
        supportInvalidateOptionsMenu();
        GestureCropImageView gestureCropImageView = this.J;
        Bitmap.CompressFormat compressFormat = this.W;
        int i5 = this.X;
        c cVar = new c(this, 3);
        gestureCropImageView.f();
        gestureCropImageView.setImageToWrapCropBounds(false);
        RectF rectF = gestureCropImageView.M;
        RectF z5 = ks.n.z(gestureCropImageView.f21316d);
        float currentScale = gestureCropImageView.getCurrentScale();
        float currentAngle = gestureCropImageView.getCurrentAngle();
        e eVar = new e();
        eVar.f11170c = rectF;
        eVar.f11171d = z5;
        eVar.a = currentScale;
        eVar.f11169b = currentAngle;
        int i6 = gestureCropImageView.V;
        int i10 = gestureCropImageView.W;
        String imageInputPath = gestureCropImageView.getImageInputPath();
        String imageOutputPath = gestureCropImageView.getImageOutputPath();
        wn.c exifInfo = gestureCropImageView.getExifInfo();
        wn.b bVar = new wn.b();
        bVar.a = i6;
        bVar.f19963b = i10;
        bVar.f19966e = compressFormat;
        bVar.f19964c = i5;
        bVar.f19965d = imageInputPath;
        bVar.f19967f = imageOutputPath;
        bVar.f19968g = exifInfo;
        new BitmapCropTask(gestureCropImageView.getViewBitmap(), eVar, bVar, cVar).executeOnExecutor(AsyncTask.THREAD_POOL_EXECUTOR, new Void[0]);
        return true;
    }

    @Override // android.app.Activity
    public final boolean onPrepareOptionsMenu(Menu menu) {
        menu.findItem(R.id.menu_crop).setVisible(!this.H);
        menu.findItem(R.id.menu_loader).setVisible(this.H);
        return super.onPrepareOptionsMenu(menu);
    }

    @Override // i.h, androidx.fragment.app.FragmentActivity, android.app.Activity
    public final void onStop() {
        super.onStop();
        GestureCropImageView gestureCropImageView = this.J;
        if (gestureCropImageView != null) {
            gestureCropImageView.f();
        }
    }
}
