package androidx.transition;

import android.animation.Animator;
import android.animation.ObjectAnimator;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Picture;
import android.graphics.RectF;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import androidx.core.view.h;
import androidx.core.view.s0;
import com.discord.R;
import java.util.HashMap;
import m3.a0;
import m3.b0;
import m3.d0;
import m3.e0;
import m3.g0;
import m3.h0;
import m3.i0;

/* loaded from: classes.dex */
public abstract class c extends Transition {

    /* renamed from: e0, reason: collision with root package name */
    public static final String[] f2557e0 = {"android:visibility:visibility", "android:visibility:parent"};

    /* renamed from: d0, reason: collision with root package name */
    public int f2558d0 = 3;

    public static void Q(b0 b0Var) {
        View view = b0Var.f14327b;
        int visibility = view.getVisibility();
        HashMap hashMap = b0Var.a;
        hashMap.put("android:visibility:visibility", Integer.valueOf(visibility));
        hashMap.put("android:visibility:parent", view.getParent());
        int[] iArr = new int[2];
        view.getLocationOnScreen(iArr);
        hashMap.put("android:visibility:screenLocation", iArr);
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0059 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:35:0x008c  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x0097  */
    /* JADX WARN: Removed duplicated region for block: B:7:0x0035  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static i0 R(b0 b0Var, b0 b0Var2) {
        i0 i0Var = new i0();
        i0Var.a = false;
        i0Var.f14365b = false;
        if (b0Var != null) {
            HashMap hashMap = b0Var.a;
            if (hashMap.containsKey("android:visibility:visibility")) {
                i0Var.f14366c = ((Integer) hashMap.get("android:visibility:visibility")).intValue();
                i0Var.f14368e = (ViewGroup) hashMap.get("android:visibility:parent");
                if (b0Var2 != null) {
                    HashMap hashMap2 = b0Var2.a;
                    if (hashMap2.containsKey("android:visibility:visibility")) {
                        i0Var.f14367d = ((Integer) hashMap2.get("android:visibility:visibility")).intValue();
                        i0Var.f14369f = (ViewGroup) hashMap2.get("android:visibility:parent");
                        if (b0Var == null && b0Var2 != null) {
                            int i5 = i0Var.f14366c;
                            int i6 = i0Var.f14367d;
                            if (i5 != i6 || i0Var.f14368e != i0Var.f14369f) {
                                if (i5 != i6) {
                                    if (i5 == 0) {
                                        i0Var.f14365b = false;
                                        i0Var.a = true;
                                        return i0Var;
                                    }
                                    if (i6 == 0) {
                                        i0Var.f14365b = true;
                                        i0Var.a = true;
                                        return i0Var;
                                    }
                                } else {
                                    if (i0Var.f14369f == null) {
                                        i0Var.f14365b = false;
                                        i0Var.a = true;
                                        return i0Var;
                                    }
                                    if (i0Var.f14368e == null) {
                                        i0Var.f14365b = true;
                                        i0Var.a = true;
                                        return i0Var;
                                    }
                                }
                            }
                        } else {
                            if (b0Var != null && i0Var.f14367d == 0) {
                                i0Var.f14365b = true;
                                i0Var.a = true;
                                return i0Var;
                            }
                            if (b0Var2 == null && i0Var.f14366c == 0) {
                                i0Var.f14365b = false;
                                i0Var.a = true;
                            }
                        }
                        return i0Var;
                    }
                }
                i0Var.f14367d = -1;
                i0Var.f14369f = null;
                if (b0Var == null) {
                }
                if (b0Var != null) {
                }
                if (b0Var2 == null) {
                    i0Var.f14365b = false;
                    i0Var.a = true;
                }
                return i0Var;
            }
        }
        i0Var.f14366c = -1;
        i0Var.f14368e = null;
        if (b0Var2 != null) {
        }
        i0Var.f14367d = -1;
        i0Var.f14369f = null;
        if (b0Var == null) {
        }
        if (b0Var != null) {
        }
        if (b0Var2 == null) {
        }
        return i0Var;
    }

    public abstract ObjectAnimator S(ViewGroup viewGroup, View view, b0 b0Var, b0 b0Var2);

    public abstract ObjectAnimator T(ViewGroup viewGroup, View view, b0 b0Var, b0 b0Var2);

    @Override // androidx.transition.Transition
    public void d(b0 b0Var) {
        Q(b0Var);
    }

    /* JADX WARN: Code restructure failed: missing block: B:15:0x0043, code lost:
    
        if (R(p(r5, false), t(r5, false)).a != false) goto L9;
     */
    /* JADX WARN: Removed duplicated region for block: B:56:0x0092  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x01d3  */
    @Override // androidx.transition.Transition
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Animator l(ViewGroup viewGroup, b0 b0Var, b0 b0Var2) {
        boolean z5;
        View view;
        int i5;
        char c6;
        int i6;
        View view2;
        Animator animator;
        View view3;
        boolean z6;
        ViewGroup viewGroup2;
        int i10;
        Bitmap bitmap;
        i0 R = R(b0Var, b0Var2);
        if (R.a && (R.f14368e != null || R.f14369f != null)) {
            int i11 = 1;
            if (!R.f14365b) {
                int i12 = R.f14367d;
                if ((this.f2558d0 & 2) == 2 && b0Var != null) {
                    View view4 = b0Var.f14327b;
                    View view5 = b0Var2 != null ? b0Var2.f14327b : null;
                    View view6 = (View) view4.getTag(R.id.save_overlay_view);
                    if (view6 != null) {
                        i5 = i12;
                        c6 = 1;
                        i6 = 0;
                        view3 = null;
                        animator = null;
                    } else {
                        if (view5 == null || view5.getParent() == null) {
                            if (view5 != null) {
                                z5 = false;
                                view = null;
                                if (z5) {
                                    if (view4.getParent() == null) {
                                        i5 = i12;
                                        c6 = 1;
                                        i11 = 0;
                                        i6 = 0;
                                        view3 = view;
                                        animator = null;
                                        view6 = view4;
                                    } else if (view4.getParent() instanceof View) {
                                        View view7 = (View) view4.getParent();
                                        if (R(t(view7, true), p(view7, true)).a) {
                                            i5 = i12;
                                            c6 = 1;
                                            i6 = 0;
                                            view2 = view;
                                            animator = null;
                                            int id2 = view7.getId();
                                            if (view7.getParent() == null && id2 != -1) {
                                                viewGroup.findViewById(id2);
                                            }
                                            view6 = view5;
                                            i11 = i6;
                                            view3 = view2;
                                        } else {
                                            boolean z7 = a0.a;
                                            Matrix matrix = new Matrix();
                                            matrix.setTranslate(-view7.getScrollX(), -view7.getScrollY());
                                            e0 e0Var = d0.a;
                                            e0Var.b0(view4, matrix);
                                            e0Var.c0(viewGroup, matrix);
                                            animator = null;
                                            RectF rectF = new RectF(0.0f, 0.0f, view4.getWidth(), view4.getHeight());
                                            matrix.mapRect(rectF);
                                            int round = Math.round(rectF.left);
                                            int round2 = Math.round(rectF.top);
                                            int round3 = Math.round(rectF.right);
                                            c6 = 1;
                                            int round4 = Math.round(rectF.bottom);
                                            i6 = 0;
                                            ImageView imageView = new ImageView(view4.getContext());
                                            imageView.setScaleType(ImageView.ScaleType.CENTER_CROP);
                                            boolean isAttachedToWindow = view4.isAttachedToWindow();
                                            boolean z8 = viewGroup != null && viewGroup.isAttachedToWindow();
                                            if (isAttachedToWindow) {
                                                z6 = isAttachedToWindow;
                                                viewGroup2 = null;
                                                i10 = 0;
                                            } else if (z8) {
                                                viewGroup2 = (ViewGroup) view4.getParent();
                                                int indexOfChild = viewGroup2.indexOfChild(view4);
                                                s0.a(view4, viewGroup);
                                                z6 = isAttachedToWindow;
                                                i10 = indexOfChild;
                                            } else {
                                                i5 = i12;
                                                view2 = view;
                                                bitmap = null;
                                                if (bitmap != null) {
                                                    imageView.setImageBitmap(bitmap);
                                                }
                                                imageView.measure(View.MeasureSpec.makeMeasureSpec(round3 - round, 1073741824), View.MeasureSpec.makeMeasureSpec(round4 - round2, 1073741824));
                                                imageView.layout(round, round2, round3, round4);
                                                view6 = imageView;
                                                i11 = i6;
                                                view3 = view2;
                                            }
                                            view2 = view;
                                            int round5 = Math.round(rectF.width());
                                            i5 = i12;
                                            int round6 = Math.round(rectF.height());
                                            if (round5 <= 0 || round6 <= 0) {
                                                bitmap = null;
                                            } else {
                                                float min = Math.min(1.0f, 1048576.0f / (round5 * round6));
                                                int round7 = Math.round(round5 * min);
                                                int round8 = Math.round(round6 * min);
                                                matrix.postTranslate(-rectF.left, -rectF.top);
                                                matrix.postScale(min, min);
                                                if (a0.a) {
                                                    Picture picture = new Picture();
                                                    Canvas beginRecording = picture.beginRecording(round7, round8);
                                                    beginRecording.concat(matrix);
                                                    view4.draw(beginRecording);
                                                    picture.endRecording();
                                                    bitmap = h.d(picture);
                                                } else {
                                                    bitmap = Bitmap.createBitmap(round7, round8, Bitmap.Config.ARGB_8888);
                                                    Canvas canvas = new Canvas(bitmap);
                                                    canvas.concat(matrix);
                                                    view4.draw(canvas);
                                                }
                                            }
                                            if (!z6) {
                                                viewGroup.getOverlay().remove(view4);
                                                viewGroup2.addView(view4, i10);
                                            }
                                            if (bitmap != null) {
                                            }
                                            imageView.measure(View.MeasureSpec.makeMeasureSpec(round3 - round, 1073741824), View.MeasureSpec.makeMeasureSpec(round4 - round2, 1073741824));
                                            imageView.layout(round, round2, round3, round4);
                                            view6 = imageView;
                                            i11 = i6;
                                            view3 = view2;
                                        }
                                    }
                                }
                                i5 = i12;
                                c6 = 1;
                                i6 = 0;
                                view2 = view;
                                animator = null;
                                view6 = view5;
                                i11 = i6;
                                view3 = view2;
                            }
                        } else if (i12 == 4 || view4 == view5) {
                            z5 = false;
                            view = view5;
                            view5 = null;
                            if (z5) {
                            }
                            i5 = i12;
                            c6 = 1;
                            i6 = 0;
                            view2 = view;
                            animator = null;
                            view6 = view5;
                            i11 = i6;
                            view3 = view2;
                        }
                        z5 = true;
                        view5 = null;
                        view = null;
                        if (z5) {
                        }
                        i5 = i12;
                        c6 = 1;
                        i6 = 0;
                        view2 = view;
                        animator = null;
                        view6 = view5;
                        i11 = i6;
                        view3 = view2;
                    }
                    if (view6 == null) {
                        if (view3 == null) {
                            return animator;
                        }
                        int visibility = view3.getVisibility();
                        d0.b(i6, view3);
                        ObjectAnimator T = T(viewGroup, view3, b0Var, b0Var2);
                        if (T == null) {
                            d0.b(visibility, view3);
                            return T;
                        }
                        g0 g0Var = new g0(i5, view3);
                        T.addListener(g0Var);
                        q().a(g0Var);
                        return T;
                    }
                    if (i11 == 0) {
                        int[] iArr = (int[]) b0Var.a.get("android:visibility:screenLocation");
                        int i13 = iArr[i6];
                        int i14 = iArr[c6];
                        int[] iArr2 = new int[2];
                        viewGroup.getLocationOnScreen(iArr2);
                        view6.offsetLeftAndRight((i13 - iArr2[i6]) - view6.getLeft());
                        view6.offsetTopAndBottom((i14 - iArr2[c6]) - view6.getTop());
                        s0.a(view6, viewGroup);
                    }
                    ObjectAnimator T2 = T(viewGroup, view6, b0Var, b0Var2);
                    if (i11 == 0) {
                        if (T2 == null) {
                            viewGroup.getOverlay().remove(view6);
                            return T2;
                        }
                        view4.setTag(R.id.save_overlay_view, view6);
                        h0 h0Var = new h0(this, viewGroup, view6, view4);
                        T2.addListener(h0Var);
                        T2.addPauseListener(h0Var);
                        q().a(h0Var);
                    }
                    return T2;
                }
            } else if ((this.f2558d0 & 1) == 1 && b0Var2 != null) {
                View view8 = b0Var2.f14327b;
                if (b0Var == null) {
                    View view9 = (View) view8.getParent();
                }
                return S(viewGroup, view8, b0Var, b0Var2);
            }
        }
        return null;
    }

    @Override // androidx.transition.Transition
    public final String[] s() {
        return f2557e0;
    }

    @Override // androidx.transition.Transition
    public final boolean w(b0 b0Var, b0 b0Var2) {
        if (b0Var == null && b0Var2 == null) {
            return false;
        }
        if (b0Var != null && b0Var2 != null && b0Var2.a.containsKey("android:visibility:visibility") != b0Var.a.containsKey("android:visibility:visibility")) {
            return false;
        }
        i0 R = R(b0Var, b0Var2);
        if (R.a) {
            return R.f14366c == 0 || R.f14367d == 0;
        }
        return false;
    }
}
