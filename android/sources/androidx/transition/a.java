package androidx.transition;

import android.animation.Animator;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.TypeConverter;
import android.graphics.PointF;
import android.graphics.Rect;
import android.view.View;
import android.view.ViewGroup;
import com.facebook.react.uimanager.ViewProps;
import gh.g;
import java.util.HashMap;
import lh.f;
import m3.b0;
import m3.d;
import m3.d0;

/* loaded from: classes.dex */
public final class a extends Transition {

    /* renamed from: d0, reason: collision with root package name */
    public static final String[] f2544d0 = {"android:changeBounds:bounds", "android:changeBounds:clip", "android:changeBounds:parent", "android:changeBounds:windowX", "android:changeBounds:windowY"};

    /* renamed from: e0, reason: collision with root package name */
    public static final g f2545e0 = new g(PointF.class, "topLeft", 5);

    /* renamed from: f0, reason: collision with root package name */
    public static final g f2546f0 = new g(PointF.class, "bottomRight", 6);

    /* renamed from: g0, reason: collision with root package name */
    public static final g f2547g0 = new g(PointF.class, "bottomRight", 7);
    public static final g h0 = new g(PointF.class, "topLeft", 8);

    /* renamed from: i0, reason: collision with root package name */
    public static final g f2548i0 = new g(PointF.class, ViewProps.POSITION, 9);

    public static void Q(b0 b0Var) {
        View view = b0Var.f14327b;
        HashMap hashMap = b0Var.a;
        if (!view.isLaidOut() && view.getWidth() == 0 && view.getHeight() == 0) {
            return;
        }
        hashMap.put("android:changeBounds:bounds", new Rect(view.getLeft(), view.getTop(), view.getRight(), view.getBottom()));
        hashMap.put("android:changeBounds:parent", view.getParent());
    }

    @Override // androidx.transition.Transition
    public final void d(b0 b0Var) {
        Q(b0Var);
    }

    @Override // androidx.transition.Transition
    public final void g(b0 b0Var) {
        Q(b0Var);
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // androidx.transition.Transition
    public final Animator l(ViewGroup viewGroup, b0 b0Var, b0 b0Var2) {
        int i5;
        a aVar;
        ObjectAnimator ofObject;
        if (b0Var != null) {
            HashMap hashMap = b0Var.a;
            if (b0Var2 != null) {
                HashMap hashMap2 = b0Var2.a;
                ViewGroup viewGroup2 = (ViewGroup) hashMap.get("android:changeBounds:parent");
                ViewGroup viewGroup3 = (ViewGroup) hashMap2.get("android:changeBounds:parent");
                if (viewGroup2 != null && viewGroup3 != null) {
                    View view = b0Var2.f14327b;
                    Rect rect = (Rect) hashMap.get("android:changeBounds:bounds");
                    Rect rect2 = (Rect) hashMap2.get("android:changeBounds:bounds");
                    int i6 = rect.left;
                    int i10 = rect2.left;
                    int i11 = rect.top;
                    int i12 = rect2.top;
                    int i13 = rect.right;
                    int i14 = rect2.right;
                    int i15 = rect.bottom;
                    int i16 = rect2.bottom;
                    int i17 = i13 - i6;
                    int i18 = i15 - i11;
                    int i19 = i14 - i10;
                    int i20 = i16 - i12;
                    Rect rect3 = (Rect) hashMap.get("android:changeBounds:clip");
                    Rect rect4 = (Rect) hashMap2.get("android:changeBounds:clip");
                    if ((i17 == 0 || i18 == 0) && (i19 == 0 || i20 == 0)) {
                        i5 = 0;
                    } else {
                        i5 = (i6 == i10 && i11 == i12) ? 0 : 1;
                        if (i13 != i14 || i15 != i16) {
                            i5++;
                        }
                    }
                    if ((rect3 != null && !rect3.equals(rect4)) || (rect3 == null && rect4 != null)) {
                        i5++;
                    }
                    int i21 = i5;
                    if (i21 > 0) {
                        d0.a(view, i6, i11, i13, i15);
                        if (i21 != 2) {
                            aVar = this;
                            if (i6 == i10 && i11 == i12) {
                                aVar.V.getClass();
                                ofObject = ObjectAnimator.ofObject(view, f2547g0, (TypeConverter) null, f.i(i13, i15, i14, i16));
                            } else {
                                aVar.V.getClass();
                                ofObject = ObjectAnimator.ofObject(view, h0, (TypeConverter) null, f.i(i6, i11, i10, i12));
                            }
                        } else if (i17 == i19 && i18 == i20) {
                            aVar = this;
                            aVar.V.getClass();
                            ofObject = ObjectAnimator.ofObject(view, f2548i0, (TypeConverter) null, f.i(i6, i11, i10, i12));
                        } else {
                            aVar = this;
                            d dVar = new d(view);
                            aVar.V.getClass();
                            ObjectAnimator ofObject2 = ObjectAnimator.ofObject(dVar, f2545e0, (TypeConverter) null, f.i(i6, i11, i10, i12));
                            aVar.V.getClass();
                            ObjectAnimator ofObject3 = ObjectAnimator.ofObject(dVar, f2546f0, (TypeConverter) null, f.i(i13, i15, i14, i16));
                            AnimatorSet animatorSet = new AnimatorSet();
                            animatorSet.playTogether(ofObject2, ofObject3);
                            animatorSet.addListener(new m3.b(dVar));
                            ofObject = animatorSet;
                        }
                        if (view.getParent() instanceof ViewGroup) {
                            ViewGroup viewGroup4 = (ViewGroup) view.getParent();
                            com.facebook.imagepipeline.nativecode.b.K(viewGroup4, true);
                            aVar.q().a(new m3.c(viewGroup4));
                        }
                        return ofObject;
                    }
                }
            }
        }
        return null;
    }

    @Override // androidx.transition.Transition
    public final String[] s() {
        return f2544d0;
    }
}
