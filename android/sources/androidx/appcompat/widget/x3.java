package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import com.discord.R;

/* loaded from: classes.dex */
public final class x3 implements k1 {
    public final Toolbar a;

    /* renamed from: b, reason: collision with root package name */
    public int f1160b;

    /* renamed from: c, reason: collision with root package name */
    public final View f1161c;

    /* renamed from: d, reason: collision with root package name */
    public Drawable f1162d;

    /* renamed from: e, reason: collision with root package name */
    public Drawable f1163e;

    /* renamed from: f, reason: collision with root package name */
    public Drawable f1164f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f1165g;

    /* renamed from: h, reason: collision with root package name */
    public CharSequence f1166h;

    /* renamed from: i, reason: collision with root package name */
    public final CharSequence f1167i;
    public final CharSequence j;
    public Window.Callback k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f1168l;

    /* renamed from: m, reason: collision with root package name */
    public n f1169m;

    /* renamed from: n, reason: collision with root package name */
    public final int f1170n;

    /* renamed from: o, reason: collision with root package name */
    public final Drawable f1171o;

    public x3(Toolbar toolbar, boolean z5) {
        Drawable drawable;
        this.f1170n = 0;
        this.a = toolbar;
        this.f1166h = toolbar.getTitle();
        this.f1167i = toolbar.getSubtitle();
        this.f1165g = this.f1166h != null;
        this.f1164f = toolbar.getNavigationIcon();
        e4.m b02 = e4.m.b0(toolbar.getContext(), null, h.a.a, R.attr.actionBarStyle);
        TypedArray typedArray = (TypedArray) b02.f7964i;
        int i5 = 15;
        this.f1171o = b02.U(15);
        if (z5) {
            CharSequence text = typedArray.getText(27);
            if (!TextUtils.isEmpty(text)) {
                this.f1165g = true;
                this.f1166h = text;
                if ((this.f1160b & 8) != 0) {
                    toolbar.setTitle(text);
                    if (this.f1165g) {
                        androidx.core.view.s0.q(toolbar.getRootView(), text);
                    }
                }
            }
            CharSequence text2 = typedArray.getText(25);
            if (!TextUtils.isEmpty(text2)) {
                this.f1167i = text2;
                if ((this.f1160b & 8) != 0) {
                    toolbar.setSubtitle(text2);
                }
            }
            Drawable U = b02.U(20);
            if (U != null) {
                this.f1163e = U;
                c();
            }
            Drawable U2 = b02.U(17);
            if (U2 != null) {
                this.f1162d = U2;
                c();
            }
            if (this.f1164f == null && (drawable = this.f1171o) != null) {
                this.f1164f = drawable;
                if ((this.f1160b & 4) != 0) {
                    toolbar.setNavigationIcon(drawable);
                } else {
                    toolbar.setNavigationIcon((Drawable) null);
                }
            }
            a(typedArray.getInt(10, 0));
            int resourceId = typedArray.getResourceId(9, 0);
            if (resourceId != 0) {
                View inflate = LayoutInflater.from(toolbar.getContext()).inflate(resourceId, (ViewGroup) toolbar, false);
                View view = this.f1161c;
                if (view != null && (this.f1160b & 16) != 0) {
                    toolbar.removeView(view);
                }
                this.f1161c = inflate;
                if (inflate != null && (this.f1160b & 16) != 0) {
                    toolbar.addView(inflate);
                }
                a(this.f1160b | 16);
            }
            int layoutDimension = typedArray.getLayoutDimension(13, 0);
            if (layoutDimension > 0) {
                ViewGroup.LayoutParams layoutParams = toolbar.getLayoutParams();
                layoutParams.height = layoutDimension;
                toolbar.setLayoutParams(layoutParams);
            }
            int dimensionPixelOffset = typedArray.getDimensionPixelOffset(7, -1);
            int dimensionPixelOffset2 = typedArray.getDimensionPixelOffset(3, -1);
            if (dimensionPixelOffset >= 0 || dimensionPixelOffset2 >= 0) {
                int max = Math.max(dimensionPixelOffset, 0);
                int max2 = Math.max(dimensionPixelOffset2, 0);
                toolbar.d();
                toolbar.Q.a(max, max2);
            }
            int resourceId2 = typedArray.getResourceId(28, 0);
            if (resourceId2 != 0) {
                Context context = toolbar.getContext();
                toolbar.I = resourceId2;
                AppCompatTextView appCompatTextView = toolbar.f885e;
                if (appCompatTextView != null) {
                    appCompatTextView.setTextAppearance(context, resourceId2);
                }
            }
            int resourceId3 = typedArray.getResourceId(26, 0);
            if (resourceId3 != 0) {
                Context context2 = toolbar.getContext();
                toolbar.J = resourceId3;
                AppCompatTextView appCompatTextView2 = toolbar.f889i;
                if (appCompatTextView2 != null) {
                    appCompatTextView2.setTextAppearance(context2, resourceId3);
                }
            }
            int resourceId4 = typedArray.getResourceId(22, 0);
            if (resourceId4 != 0) {
                toolbar.setPopupTheme(resourceId4);
            }
        } else {
            if (toolbar.getNavigationIcon() != null) {
                this.f1171o = toolbar.getNavigationIcon();
            } else {
                i5 = 11;
            }
            this.f1160b = i5;
        }
        b02.e0();
        if (R.string.abc_action_bar_up_description != this.f1170n) {
            this.f1170n = R.string.abc_action_bar_up_description;
            if (TextUtils.isEmpty(toolbar.getNavigationContentDescription())) {
                int i6 = this.f1170n;
                this.j = i6 != 0 ? toolbar.getContext().getString(i6) : null;
                b();
            }
        }
        this.j = toolbar.getNavigationContentDescription();
        toolbar.setNavigationOnClickListener(new v3(this));
    }

    public final void a(int i5) {
        View view;
        int i6 = this.f1160b ^ i5;
        this.f1160b = i5;
        if (i6 != 0) {
            int i10 = i6 & 4;
            Toolbar toolbar = this.a;
            if (i10 != 0) {
                if ((i5 & 4) != 0) {
                    b();
                }
                if ((this.f1160b & 4) != 0) {
                    Drawable drawable = this.f1164f;
                    if (drawable == null) {
                        drawable = this.f1171o;
                    }
                    toolbar.setNavigationIcon(drawable);
                } else {
                    toolbar.setNavigationIcon((Drawable) null);
                }
            }
            if ((i6 & 3) != 0) {
                c();
            }
            if ((i6 & 8) != 0) {
                if ((i5 & 8) != 0) {
                    toolbar.setTitle(this.f1166h);
                    toolbar.setSubtitle(this.f1167i);
                } else {
                    toolbar.setTitle((CharSequence) null);
                    toolbar.setSubtitle((CharSequence) null);
                }
            }
            if ((i6 & 16) == 0 || (view = this.f1161c) == null) {
                return;
            }
            if ((i5 & 16) != 0) {
                toolbar.addView(view);
            } else {
                toolbar.removeView(view);
            }
        }
    }

    public final void b() {
        if ((this.f1160b & 4) != 0) {
            boolean isEmpty = TextUtils.isEmpty(this.j);
            Toolbar toolbar = this.a;
            if (isEmpty) {
                toolbar.setNavigationContentDescription(this.f1170n);
            } else {
                toolbar.setNavigationContentDescription(this.j);
            }
        }
    }

    public final void c() {
        Drawable drawable;
        int i5 = this.f1160b;
        if ((i5 & 2) == 0) {
            drawable = null;
        } else if ((i5 & 1) != 0) {
            drawable = this.f1163e;
            if (drawable == null) {
                drawable = this.f1162d;
            }
        } else {
            drawable = this.f1162d;
        }
        this.a.setLogo(drawable);
    }
}
