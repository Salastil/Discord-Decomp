package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.LayerDrawable;
import android.util.TypedValue;
import androidx.collection.SparseArrayCompat;
import com.discord.R;
import java.lang.ref.WeakReference;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class n2 {

    /* renamed from: g, reason: collision with root package name */
    public static n2 f1051g;
    public WeakHashMap a;

    /* renamed from: b, reason: collision with root package name */
    public final WeakHashMap f1053b = new WeakHashMap(0);

    /* renamed from: c, reason: collision with root package name */
    public TypedValue f1054c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f1055d;

    /* renamed from: e, reason: collision with root package name */
    public w f1056e;

    /* renamed from: f, reason: collision with root package name */
    public static final PorterDuff.Mode f1050f = PorterDuff.Mode.SRC_IN;

    /* renamed from: h, reason: collision with root package name */
    public static final m2 f1052h = new m2(6);

    public static synchronized n2 b() {
        n2 n2Var;
        synchronized (n2.class) {
            try {
                if (f1051g == null) {
                    f1051g = new n2();
                }
                n2Var = f1051g;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return n2Var;
    }

    public static synchronized PorterDuffColorFilter e(int i5, PorterDuff.Mode mode) {
        PorterDuffColorFilter porterDuffColorFilter;
        synchronized (n2.class) {
            m2 m2Var = f1052h;
            m2Var.getClass();
            int i6 = (31 + i5) * 31;
            porterDuffColorFilter = (PorterDuffColorFilter) m2Var.a(Integer.valueOf(mode.hashCode() + i6));
            if (porterDuffColorFilter == null) {
                porterDuffColorFilter = new PorterDuffColorFilter(i5, mode);
            }
        }
        return porterDuffColorFilter;
    }

    public final Drawable a(Context context, int i5) {
        Drawable drawable;
        if (this.f1054c == null) {
            this.f1054c = new TypedValue();
        }
        TypedValue typedValue = this.f1054c;
        context.getResources().getValue(i5, typedValue, true);
        long j = (typedValue.assetCookie << 32) | typedValue.data;
        synchronized (this) {
            s.k kVar = (s.k) this.f1053b.get(context);
            drawable = null;
            if (kVar != null) {
                WeakReference weakReference = (WeakReference) kVar.b(j);
                if (weakReference != null) {
                    Drawable.ConstantState constantState = (Drawable.ConstantState) weakReference.get();
                    if (constantState != null) {
                        drawable = constantState.newDrawable(context.getResources());
                    } else {
                        int b10 = t.a.b(kVar.f17683e, kVar.f17685v, j);
                        if (b10 >= 0) {
                            Object[] objArr = kVar.f17684i;
                            Object obj = objArr[b10];
                            Object obj2 = s.l.a;
                            if (obj != obj2) {
                                objArr[b10] = obj2;
                                kVar.f17682d = true;
                            }
                        }
                    }
                }
            }
        }
        if (drawable != null) {
            return drawable;
        }
        LayerDrawable layerDrawable = null;
        if (this.f1056e != null) {
            if (i5 == R.drawable.abc_cab_background_top_material) {
                layerDrawable = new LayerDrawable(new Drawable[]{c(context, R.drawable.abc_cab_background_internal_bg), c(context, 2131230813)});
            } else if (i5 == R.drawable.abc_ratingbar_material) {
                layerDrawable = w.A(this, context, R.dimen.abc_star_big);
            } else if (i5 == R.drawable.abc_ratingbar_indicator_material) {
                layerDrawable = w.A(this, context, R.dimen.abc_star_medium);
            } else if (i5 == R.drawable.abc_ratingbar_small_material) {
                layerDrawable = w.A(this, context, R.dimen.abc_star_small);
            }
        }
        if (layerDrawable == null) {
            return layerDrawable;
        }
        layerDrawable.setChangingConfigurations(typedValue.changingConfigurations);
        synchronized (this) {
            try {
                Drawable.ConstantState constantState2 = layerDrawable.getConstantState();
                if (constantState2 != null) {
                    s.k kVar2 = (s.k) this.f1053b.get(context);
                    if (kVar2 == null) {
                        kVar2 = new s.k();
                        this.f1053b.put(context, kVar2);
                    }
                    kVar2.e(j, new WeakReference(constantState2));
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return layerDrawable;
    }

    public final synchronized Drawable c(Context context, int i5) {
        return d(context, i5, false);
    }

    public final synchronized Drawable d(Context context, int i5, boolean z5) {
        Drawable a;
        try {
            if (!this.f1055d) {
                this.f1055d = true;
                Drawable c6 = c(context, R.drawable.abc_vector_test);
                if (c6 == null || (!(c6 instanceof n3.p) && !"android.graphics.drawable.VectorDrawable".equals(c6.getClass().getName()))) {
                    this.f1055d = false;
                    throw new IllegalStateException("This app has been built with an incorrect configuration. Please configure your build for VectorDrawableCompat.");
                }
            }
            a = a(context, i5);
            if (a == null) {
                a = context.getDrawable(i5);
            }
            if (a != null) {
                a = g(context, i5, z5, a);
            }
            if (a != null) {
                n1.a(a);
            }
        } catch (Throwable th2) {
            throw th2;
        }
        return a;
    }

    public final synchronized ColorStateList f(Context context, int i5) {
        ColorStateList colorStateList;
        SparseArrayCompat sparseArrayCompat;
        WeakHashMap weakHashMap = this.a;
        ColorStateList colorStateList2 = null;
        colorStateList = (weakHashMap == null || (sparseArrayCompat = (SparseArrayCompat) weakHashMap.get(context)) == null) ? null : (ColorStateList) sparseArrayCompat.c(i5);
        if (colorStateList == null) {
            w wVar = this.f1056e;
            if (wVar != null) {
                colorStateList2 = wVar.C(context, i5);
            }
            if (colorStateList2 != null) {
                if (this.a == null) {
                    this.a = new WeakHashMap();
                }
                SparseArrayCompat sparseArrayCompat2 = (SparseArrayCompat) this.a.get(context);
                if (sparseArrayCompat2 == null) {
                    sparseArrayCompat2 = new SparseArrayCompat(0);
                    this.a.put(context, sparseArrayCompat2);
                }
                sparseArrayCompat2.a(i5, colorStateList2);
            }
            colorStateList = colorStateList2;
        }
        return colorStateList;
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x00eb  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Drawable g(Context context, int i5, boolean z5, Drawable drawable) {
        int i6;
        boolean z6;
        int round;
        ColorStateList f2 = f(context, i5);
        PorterDuff.Mode mode = null;
        if (f2 != null) {
            Drawable mutate = drawable.mutate();
            mutate.setTintList(f2);
            if (this.f1056e != null && i5 == R.drawable.abc_switch_thumb_material) {
                mode = PorterDuff.Mode.MULTIPLY;
            }
            if (mode != null) {
                mutate.setTintMode(mode);
            }
            return mutate;
        }
        if (this.f1056e != null) {
            if (i5 == R.drawable.abc_seekbar_track_material) {
                LayerDrawable layerDrawable = (LayerDrawable) drawable;
                Drawable findDrawableByLayerId = layerDrawable.findDrawableByLayerId(android.R.id.background);
                int c6 = k3.c(context, R.attr.colorControlNormal);
                PorterDuff.Mode mode2 = x.f1158b;
                w.M(findDrawableByLayerId, c6, mode2);
                w.M(layerDrawable.findDrawableByLayerId(android.R.id.secondaryProgress), k3.c(context, R.attr.colorControlNormal), mode2);
                w.M(layerDrawable.findDrawableByLayerId(android.R.id.progress), k3.c(context, R.attr.colorControlActivated), mode2);
                return drawable;
            }
            if (i5 == R.drawable.abc_ratingbar_material || i5 == R.drawable.abc_ratingbar_indicator_material || i5 == R.drawable.abc_ratingbar_small_material) {
                LayerDrawable layerDrawable2 = (LayerDrawable) drawable;
                Drawable findDrawableByLayerId2 = layerDrawable2.findDrawableByLayerId(android.R.id.background);
                int b10 = k3.b(context, R.attr.colorControlNormal);
                PorterDuff.Mode mode3 = x.f1158b;
                w.M(findDrawableByLayerId2, b10, mode3);
                w.M(layerDrawable2.findDrawableByLayerId(android.R.id.secondaryProgress), k3.c(context, R.attr.colorControlActivated), mode3);
                w.M(layerDrawable2.findDrawableByLayerId(android.R.id.progress), k3.c(context, R.attr.colorControlActivated), mode3);
                return drawable;
            }
        }
        w wVar = this.f1056e;
        boolean z7 = false;
        if (wVar != null) {
            PorterDuff.Mode mode4 = x.f1158b;
            if (w.k(i5, (int[]) wVar.f1141d)) {
                i6 = R.attr.colorControlNormal;
            } else if (w.k(i5, (int[]) wVar.f1143i)) {
                i6 = R.attr.colorControlActivated;
            } else {
                if (w.k(i5, (int[]) wVar.f1144v)) {
                    mode4 = PorterDuff.Mode.MULTIPLY;
                } else if (i5 == 2131230833) {
                    round = Math.round(40.8f);
                    i6 = 16842800;
                    z6 = true;
                    if (z6) {
                        Drawable mutate2 = drawable.mutate();
                        mutate2.setColorFilter(x.c(k3.c(context, i6), mode4));
                        if (round != -1) {
                            mutate2.setAlpha(round);
                        }
                        z7 = true;
                    }
                } else if (i5 != R.drawable.abc_dialog_material_background) {
                    i6 = 0;
                    z6 = false;
                    round = -1;
                    if (z6) {
                    }
                }
                i6 = 16842801;
            }
            z6 = true;
            round = -1;
            if (z6) {
            }
        }
        if (z7 || !z5) {
            return drawable;
        }
        return null;
    }
}
