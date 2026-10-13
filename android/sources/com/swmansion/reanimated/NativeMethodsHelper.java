package com.swmansion.reanimated;

import android.graphics.Matrix;
import android.graphics.RectF;
import android.util.Log;
import android.view.View;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.RootViewUtil;
import com.facebook.react.views.scroll.ReactHorizontalScrollView;
import com.facebook.react.views.scroll.ReactScrollView;
import com.facebook.react.views.swiperefresh.ReactSwipeRefreshLayout;

/* loaded from: classes3.dex */
public class NativeMethodsHelper {
    private static void computeBoundingBox(View view, int[] iArr) {
        RectF rectF = new RectF();
        rectF.set(0.0f, 0.0f, view.getWidth(), view.getHeight());
        mapRectFromViewToWindowCoords(view, rectF);
        iArr[0] = Math.round(rectF.left);
        iArr[1] = Math.round(rectF.top);
        iArr[2] = Math.round(rectF.right - rectF.left);
        iArr[3] = Math.round(rectF.bottom - rectF.top);
    }

    private static ReactScrollView findScrollView(ReactSwipeRefreshLayout reactSwipeRefreshLayout) {
        for (int i5 = 0; i5 < reactSwipeRefreshLayout.getChildCount(); i5++) {
            if (reactSwipeRefreshLayout.getChildAt(i5) instanceof ReactScrollView) {
                return (ReactScrollView) reactSwipeRefreshLayout.getChildAt(i5);
            }
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void lambda$scrollTo$0(View view, int i5, int i6) {
        ((ReactHorizontalScrollView) view).smoothScrollTo(i5, i6);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static /* synthetic */ void lambda$scrollTo$1(View view, int i5, int i6) {
        ((ReactScrollView) view).smoothScrollTo(i5, i6);
    }

    private static void mapRectFromViewToWindowCoords(View view, RectF rectF) {
        Matrix matrix = view.getMatrix();
        if (!matrix.isIdentity()) {
            matrix.mapRect(rectF);
        }
        rectF.offset(view.getLeft(), view.getTop());
        Object parent = view.getParent();
        while (parent instanceof View) {
            View view2 = (View) parent;
            rectF.offset(-view2.getScrollX(), -view2.getScrollY());
            Matrix matrix2 = view2.getMatrix();
            if (!matrix2.isIdentity()) {
                matrix2.mapRect(rectF);
            }
            rectF.offset(view2.getLeft(), view2.getTop());
            parent = view2.getParent();
        }
    }

    public static float[] measure(View view) {
        View view2 = (View) RootViewUtil.getRootView(view);
        if (view2 == null || view == null) {
            float[] fArr = new float[6];
            fArr[0] = -1234567.0f;
            return fArr;
        }
        int[] iArr = new int[4];
        computeBoundingBox(view2, iArr);
        int i5 = iArr[0];
        int i6 = iArr[1];
        computeBoundingBox(view, iArr);
        iArr[0] = iArr[0] - i5;
        iArr[1] = iArr[1] - i6;
        float[] fArr2 = new float[6];
        fArr2[0] = PixelUtil.toDIPFromPixel(view.getLeft());
        fArr2[1] = PixelUtil.toDIPFromPixel(view.getTop());
        for (int i10 = 2; i10 < 6; i10++) {
            fArr2[i10] = PixelUtil.toDIPFromPixel(iArr[i10 - 2]);
        }
        return fArr2;
    }

    public static void scrollTo(final View view, double d6, double d7, boolean z5) {
        final int round = Math.round(PixelUtil.toPixelFromDIP(d6));
        final int round2 = Math.round(PixelUtil.toPixelFromDIP(d7));
        boolean z6 = view instanceof ReactHorizontalScrollView;
        if (!z6) {
            if (view instanceof ReactSwipeRefreshLayout) {
                view = findScrollView((ReactSwipeRefreshLayout) view);
            }
            if (!(view instanceof ReactScrollView)) {
                Log.w("REANIMATED", "NativeMethodsHelper: Unhandled scroll view type - allowed only {ReactScrollView, ReactHorizontalScrollView}");
            }
        }
        if (!z5) {
            view.scrollTo(round, round2);
        } else if (z6) {
            final int i5 = 0;
            view.post(new Runnable() { // from class: com.swmansion.reanimated.c
                @Override // java.lang.Runnable
                public final void run() {
                    switch (i5) {
                        case 0:
                            NativeMethodsHelper.lambda$scrollTo$0(view, round, round2);
                            break;
                        default:
                            NativeMethodsHelper.lambda$scrollTo$1(view, round, round2);
                            break;
                    }
                }
            });
        } else {
            final int i6 = 1;
            view.post(new Runnable() { // from class: com.swmansion.reanimated.c
                @Override // java.lang.Runnable
                public final void run() {
                    switch (i6) {
                        case 0:
                            NativeMethodsHelper.lambda$scrollTo$0(view, round, round2);
                            break;
                        default:
                            NativeMethodsHelper.lambda$scrollTo$1(view, round, round2);
                            break;
                    }
                }
            });
        }
    }
}
