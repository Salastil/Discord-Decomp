package mh;

import android.view.View;
import android.view.ViewGroup;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import com.google.android.material.sidesheet.SideSheetBehavior;

/* loaded from: classes3.dex */
public final class a extends jb.a {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f14502b;

    /* renamed from: c, reason: collision with root package name */
    public final SideSheetBehavior f14503c;

    public /* synthetic */ a(SideSheetBehavior sideSheetBehavior, int i5) {
        this.f14502b = i5;
        this.f14503c = sideSheetBehavior;
    }

    @Override // jb.a
    public final boolean A(View view) {
        switch (this.f14502b) {
            case 0:
                if (view.getRight() < (n() - p()) / 2) {
                }
                break;
            default:
                if (view.getLeft() > (n() + this.f14503c.f6096m) / 2) {
                }
                break;
        }
        return false;
    }

    @Override // jb.a
    public final boolean B(float f2, float f10) {
        switch (this.f14502b) {
            case 0:
                if (Math.abs(f2) <= Math.abs(f10) || Math.abs(f2) <= 500) {
                }
                break;
            default:
                if (Math.abs(f2) <= Math.abs(f10) || Math.abs(f2) <= 500) {
                }
                break;
        }
        return false;
    }

    @Override // jb.a
    public final boolean K(View view, float f2) {
        switch (this.f14502b) {
            case 0:
                float left = view.getLeft();
                SideSheetBehavior sideSheetBehavior = this.f14503c;
                float abs = Math.abs((f2 * sideSheetBehavior.k) + left);
                sideSheetBehavior.getClass();
                if (abs > 0.5f) {
                }
                break;
            default:
                float right = view.getRight();
                SideSheetBehavior sideSheetBehavior2 = this.f14503c;
                float abs2 = Math.abs((f2 * sideSheetBehavior2.k) + right);
                sideSheetBehavior2.getClass();
                if (abs2 > 0.5f) {
                }
                break;
        }
        return false;
    }

    @Override // jb.a
    public final void N(ViewGroup.MarginLayoutParams marginLayoutParams, int i5) {
        switch (this.f14502b) {
            case 0:
                marginLayoutParams.leftMargin = i5;
                break;
            default:
                marginLayoutParams.rightMargin = i5;
                break;
        }
    }

    @Override // jb.a
    public final void O(ViewGroup.MarginLayoutParams marginLayoutParams, int i5, int i6) {
        switch (this.f14502b) {
            case 0:
                if (i5 <= this.f14503c.f6096m) {
                    marginLayoutParams.leftMargin = i6;
                    break;
                }
                break;
            default:
                int i10 = this.f14503c.f6096m;
                if (i5 <= i10) {
                    marginLayoutParams.rightMargin = i10 - i5;
                    break;
                }
                break;
        }
    }

    @Override // jb.a
    public final int a(ViewGroup.MarginLayoutParams marginLayoutParams) {
        switch (this.f14502b) {
            case 0:
                return marginLayoutParams.leftMargin;
            default:
                return marginLayoutParams.rightMargin;
        }
    }

    @Override // jb.a
    public final float b(int i5) {
        switch (this.f14502b) {
            case 0:
                float p3 = p();
                return (i5 - p3) / (n() - p3);
            default:
                float f2 = this.f14503c.f6096m;
                return (f2 - i5) / (f2 - n());
        }
    }

    @Override // jb.a
    public final int m(ViewGroup.MarginLayoutParams marginLayoutParams) {
        switch (this.f14502b) {
            case 0:
                return marginLayoutParams.leftMargin;
            default:
                return marginLayoutParams.rightMargin;
        }
    }

    @Override // jb.a
    public final int n() {
        switch (this.f14502b) {
            case 0:
                SideSheetBehavior sideSheetBehavior = this.f14503c;
                return Math.max(0, sideSheetBehavior.f6097n + sideSheetBehavior.f6098o);
            default:
                SideSheetBehavior sideSheetBehavior2 = this.f14503c;
                return Math.max(0, (sideSheetBehavior2.f6096m - sideSheetBehavior2.f6095l) - sideSheetBehavior2.f6098o);
        }
    }

    @Override // jb.a
    public final int p() {
        switch (this.f14502b) {
            case 0:
                SideSheetBehavior sideSheetBehavior = this.f14503c;
                return (-sideSheetBehavior.f6095l) - sideSheetBehavior.f6098o;
            default:
                return this.f14503c.f6096m;
        }
    }

    @Override // jb.a
    public final int q() {
        switch (this.f14502b) {
            case 0:
                return this.f14503c.f6098o;
            default:
                return this.f14503c.f6096m;
        }
    }

    @Override // jb.a
    public final int r() {
        switch (this.f14502b) {
            case 0:
                return -this.f14503c.f6095l;
            default:
                return n();
        }
    }

    @Override // jb.a
    public final int s(View view) {
        switch (this.f14502b) {
            case 0:
                return view.getRight() + this.f14503c.f6098o;
            default:
                return view.getLeft() - this.f14503c.f6098o;
        }
    }

    @Override // jb.a
    public final int t(CoordinatorLayout coordinatorLayout) {
        switch (this.f14502b) {
            case 0:
                return coordinatorLayout.getLeft();
            default:
                return coordinatorLayout.getRight();
        }
    }

    @Override // jb.a
    public final int v() {
        switch (this.f14502b) {
            case 0:
                return 1;
            default:
                return 0;
        }
    }

    @Override // jb.a
    public final boolean y(float f2) {
        switch (this.f14502b) {
            case 0:
                if (f2 > 0.0f) {
                }
                break;
            default:
                if (f2 < 0.0f) {
                }
                break;
        }
        return false;
    }
}
