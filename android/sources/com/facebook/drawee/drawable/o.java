package com.facebook.drawee.drawable;

import android.graphics.Matrix;
import android.graphics.Rect;

/* loaded from: classes3.dex */
public final class o extends n {

    /* renamed from: b, reason: collision with root package name */
    public static final o f4469b = new o(0);

    /* renamed from: c, reason: collision with root package name */
    public static final o f4470c = new o(1);

    /* renamed from: d, reason: collision with root package name */
    public static final o f4471d = new o(2);

    /* renamed from: e, reason: collision with root package name */
    public static final o f4472e = new o(3);

    /* renamed from: f, reason: collision with root package name */
    public static final o f4473f = new o(4);

    /* renamed from: g, reason: collision with root package name */
    public static final o f4474g = new o(5);

    /* renamed from: h, reason: collision with root package name */
    public static final o f4475h = new o(6);

    /* renamed from: i, reason: collision with root package name */
    public static final o f4476i = new o(7);
    public static final o j = new o(8);
    public final /* synthetic */ int a;

    public /* synthetic */ o(int i5) {
        this.a = i5;
    }

    @Override // com.facebook.drawee.drawable.n
    public final void getTransformImpl(Matrix matrix, Rect rect, int i5, int i6, float f2, float f10, float f11, float f12) {
        float f13;
        float height;
        float f14;
        float max;
        switch (this.a) {
            case 0:
                matrix.setTranslate((int) (((rect.width() - i5) * 0.5f) + rect.left + 0.5f), (int) (((rect.height() - i6) * 0.5f) + rect.top + 0.5f));
                break;
            case 1:
                if (f12 > f11) {
                    f13 = ((rect.width() - (i5 * f12)) * 0.5f) + rect.left;
                    height = rect.top;
                    f11 = f12;
                } else {
                    f13 = rect.left;
                    height = ((rect.height() - (i6 * f11)) * 0.5f) + rect.top;
                }
                matrix.setScale(f11, f11);
                matrix.postTranslate((int) (f13 + 0.5f), (int) (height + 0.5f));
                break;
            case 2:
                float min = Math.min(Math.min(f11, f12), 1.0f);
                float width = ((rect.width() - (i5 * min)) * 0.5f) + rect.left;
                float height2 = ((rect.height() - (i6 * min)) * 0.5f) + rect.top;
                matrix.setScale(min, min);
                matrix.postTranslate((int) (width + 0.5f), (int) (height2 + 0.5f));
                break;
            case 3:
                float min2 = Math.min(f11, f12);
                float f15 = rect.left;
                float height3 = (rect.height() - (i6 * min2)) + rect.top;
                matrix.setScale(min2, min2);
                matrix.postTranslate((int) (f15 + 0.5f), (int) (height3 + 0.5f));
                break;
            case 4:
                float min3 = Math.min(f11, f12);
                float width2 = ((rect.width() - (i5 * min3)) * 0.5f) + rect.left;
                float height4 = ((rect.height() - (i6 * min3)) * 0.5f) + rect.top;
                matrix.setScale(min3, min3);
                matrix.postTranslate((int) (width2 + 0.5f), (int) (height4 + 0.5f));
                break;
            case 5:
                float min4 = Math.min(f11, f12);
                float width3 = (rect.width() - (i5 * min4)) + rect.left;
                float height5 = (rect.height() - (i6 * min4)) + rect.top;
                matrix.setScale(min4, min4);
                matrix.postTranslate((int) (width3 + 0.5f), (int) (height5 + 0.5f));
                break;
            case 6:
                float min5 = Math.min(f11, f12);
                float f16 = rect.left;
                float f17 = rect.top;
                matrix.setScale(min5, min5);
                matrix.postTranslate((int) (f16 + 0.5f), (int) (f17 + 0.5f));
                break;
            case 7:
                float f18 = rect.left;
                float f19 = rect.top;
                matrix.setScale(f11, f12);
                matrix.postTranslate((int) (f18 + 0.5f), (int) (f19 + 0.5f));
                break;
            default:
                if (f12 > f11) {
                    float f20 = i5 * f12;
                    f14 = Math.max(Math.min((rect.width() * 0.5f) - (f2 * f20), 0.0f), rect.width() - f20) + rect.left;
                    max = rect.top;
                    f11 = f12;
                } else {
                    f14 = rect.left;
                    float f21 = i6 * f11;
                    max = Math.max(Math.min((rect.height() * 0.5f) - (f10 * f21), 0.0f), rect.height() - f21) + rect.top;
                }
                matrix.setScale(f11, f11);
                matrix.postTranslate((int) (f14 + 0.5f), (int) (max + 0.5f));
                break;
        }
    }

    public final String toString() {
        switch (this.a) {
            case 0:
                return "center";
            case 1:
                return "center_crop";
            case 2:
                return "center_inside";
            case 3:
                return "fit_bottom_start";
            case 4:
                return "fit_center";
            case 5:
                return "fit_end";
            case 6:
                return "fit_start";
            case 7:
                return "fit_xy";
            default:
                return "focus_crop";
        }
    }
}
