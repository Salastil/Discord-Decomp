package mh;

import a5.k0;
import android.os.SystemClock;
import android.view.View;
import android.view.ViewGroup;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import com.google.android.material.sidesheet.SideSheetBehavior;
import java.lang.ref.WeakReference;
import java.util.Iterator;
import java.util.LinkedHashSet;
import s4.h;

/* loaded from: classes3.dex */
public final class c extends k0 {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f14507b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ v0.b f14508c;

    public /* synthetic */ c(v0.b bVar, int i5) {
        this.f14507b = i5;
        this.f14508c = bVar;
    }

    @Override // a5.k0
    public int A() {
        switch (this.f14507b) {
            case 1:
                BottomSheetBehavior bottomSheetBehavior = (BottomSheetBehavior) this.f14508c;
                return bottomSheetBehavior.I ? bottomSheetBehavior.V : bottomSheetBehavior.G;
            default:
                return super.A();
        }
    }

    @Override // a5.k0
    public final void K(int i5) {
        switch (this.f14507b) {
            case 0:
                if (i5 == 1) {
                    SideSheetBehavior sideSheetBehavior = (SideSheetBehavior) this.f14508c;
                    if (sideSheetBehavior.f6092g) {
                        sideSheetBehavior.x(1);
                        break;
                    }
                }
                break;
            default:
                if (i5 == 1) {
                    BottomSheetBehavior bottomSheetBehavior = (BottomSheetBehavior) this.f14508c;
                    if (bottomSheetBehavior.K) {
                        bottomSheetBehavior.Q(1);
                        break;
                    }
                }
                break;
        }
    }

    @Override // a5.k0
    public final void L(View view, int i5, int i6) {
        ViewGroup.MarginLayoutParams marginLayoutParams;
        switch (this.f14507b) {
            case 0:
                SideSheetBehavior sideSheetBehavior = (SideSheetBehavior) this.f14508c;
                WeakReference weakReference = sideSheetBehavior.f6100q;
                View view2 = weakReference != null ? (View) weakReference.get() : null;
                if (view2 != null && (marginLayoutParams = (ViewGroup.MarginLayoutParams) view2.getLayoutParams()) != null) {
                    sideSheetBehavior.a.O(marginLayoutParams, view.getLeft(), view.getRight());
                    view2.setLayoutParams(marginLayoutParams);
                }
                LinkedHashSet linkedHashSet = sideSheetBehavior.f6105v;
                if (linkedHashSet.isEmpty()) {
                    return;
                }
                sideSheetBehavior.a.b(i5);
                Iterator it = linkedHashSet.iterator();
                if (it.hasNext()) {
                    throw h.b(it);
                }
                return;
            default:
                ((BottomSheetBehavior) this.f14508c).B(i6);
                return;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x0023, code lost:
    
        if (r6 > r0.E) goto L54;
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x0073, code lost:
    
        if (java.lang.Math.abs(r8.getTop() - r0.F()) < java.lang.Math.abs(r8.getTop() - r0.E)) goto L8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:41:0x00be, code lost:
    
        if (java.lang.Math.abs(r6 - r0.D) < java.lang.Math.abs(r6 - r0.G)) goto L8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:57:0x0113, code lost:
    
        if (r0.a.A(r8) == false) goto L73;
     */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x0143, code lost:
    
        if (java.lang.Math.abs(r6 - r0.a.n()) < java.lang.Math.abs(r6 - r0.a.p())) goto L73;
     */
    @Override // a5.k0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void M(float f2, float f10, View view) {
        int i5;
        switch (this.f14507b) {
            case 0:
                SideSheetBehavior sideSheetBehavior = (SideSheetBehavior) this.f14508c;
                if (!sideSheetBehavior.a.y(f2)) {
                    if (sideSheetBehavior.a.K(view, f2)) {
                        if (!sideSheetBehavior.a.B(f2, f10)) {
                            break;
                        }
                        i5 = 5;
                    } else {
                        if (f2 == 0.0f || Math.abs(f2) <= Math.abs(f10)) {
                            int left = view.getLeft();
                            break;
                        }
                        i5 = 5;
                    }
                    sideSheetBehavior.z(view, i5, true);
                    break;
                }
                i5 = 3;
                sideSheetBehavior.z(view, i5, true);
                break;
            default:
                BottomSheetBehavior bottomSheetBehavior = (BottomSheetBehavior) this.f14508c;
                int i6 = 6;
                if (f10 < 0.0f) {
                    if (!bottomSheetBehavior.f5953b) {
                        int top = view.getTop();
                        SystemClock.uptimeMillis();
                        bottomSheetBehavior.getClass();
                        break;
                    }
                    i6 = 3;
                    bottomSheetBehavior.getClass();
                    bottomSheetBehavior.S(view, i6, true);
                    break;
                } else if (bottomSheetBehavior.I && bottomSheetBehavior.R(view, f10)) {
                    if (Math.abs(f2) >= Math.abs(f10) || f10 <= bottomSheetBehavior.f5957d) {
                        if (view.getTop() <= (bottomSheetBehavior.F() + bottomSheetBehavior.V) / 2) {
                            if (!bottomSheetBehavior.f5953b) {
                                break;
                            }
                            i6 = 3;
                            bottomSheetBehavior.getClass();
                            bottomSheetBehavior.S(view, i6, true);
                        }
                    }
                    i6 = 5;
                    bottomSheetBehavior.getClass();
                    bottomSheetBehavior.S(view, i6, true);
                } else {
                    if (f10 == 0.0f || Math.abs(f2) > Math.abs(f10)) {
                        int top2 = view.getTop();
                        if (bottomSheetBehavior.f5953b) {
                            break;
                        } else {
                            int i10 = bottomSheetBehavior.E;
                            if (top2 < i10) {
                                if (top2 >= Math.abs(top2 - bottomSheetBehavior.G)) {
                                    bottomSheetBehavior.getClass();
                                }
                                i6 = 3;
                            } else {
                                if (Math.abs(top2 - i10) < Math.abs(top2 - bottomSheetBehavior.G)) {
                                    bottomSheetBehavior.getClass();
                                }
                                i6 = 4;
                            }
                        }
                    } else {
                        if (!bottomSheetBehavior.f5953b) {
                            int top3 = view.getTop();
                            if (Math.abs(top3 - bottomSheetBehavior.E) < Math.abs(top3 - bottomSheetBehavior.G)) {
                                bottomSheetBehavior.getClass();
                            }
                        }
                        i6 = 4;
                    }
                    bottomSheetBehavior.getClass();
                    bottomSheetBehavior.S(view, i6, true);
                }
                break;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:16:0x002e, code lost:
    
        if (r5.canScrollVertically(-1) != false) goto L27;
     */
    @Override // a5.k0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean V(int i5, View view) {
        WeakReference weakReference;
        switch (this.f14507b) {
            case 0:
                SideSheetBehavior sideSheetBehavior = (SideSheetBehavior) this.f14508c;
                if (sideSheetBehavior.f6093h != 1 && (weakReference = sideSheetBehavior.f6099p) != null && weakReference.get() == view) {
                    break;
                }
                break;
            default:
                BottomSheetBehavior bottomSheetBehavior = (BottomSheetBehavior) this.f14508c;
                int i6 = bottomSheetBehavior.N;
                if (i6 != 1 && !bottomSheetBehavior.f5962f0) {
                    if (i6 == 3 && bottomSheetBehavior.f5958d0 == i5) {
                        WeakReference weakReference2 = bottomSheetBehavior.Z;
                        View view2 = weakReference2 != null ? (View) weakReference2.get() : null;
                        if (view2 != null) {
                            break;
                        }
                    }
                    SystemClock.uptimeMillis();
                    WeakReference weakReference3 = bottomSheetBehavior.W;
                    if (weakReference3 == null || weakReference3.get() != view) {
                    }
                }
                break;
        }
        return true;
    }

    @Override // a5.k0
    public final int m(int i5, View view) {
        switch (this.f14507b) {
            case 0:
                SideSheetBehavior sideSheetBehavior = (SideSheetBehavior) this.f14508c;
                return jb.a.d(i5, sideSheetBehavior.a.r(), sideSheetBehavior.a.q());
            default:
                return view.getLeft();
        }
    }

    @Override // a5.k0
    public final int n(int i5, View view) {
        switch (this.f14507b) {
            case 0:
                return view.getTop();
            default:
                return jb.a.d(i5, ((BottomSheetBehavior) this.f14508c).F(), A());
        }
    }

    @Override // a5.k0
    public int z(View view) {
        switch (this.f14507b) {
            case 0:
                SideSheetBehavior sideSheetBehavior = (SideSheetBehavior) this.f14508c;
                return sideSheetBehavior.f6095l + sideSheetBehavior.f6098o;
            default:
                return super.z(view);
        }
    }
}
