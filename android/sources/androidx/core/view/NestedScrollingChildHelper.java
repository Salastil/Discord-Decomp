package androidx.core.view;

import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;

/* loaded from: classes.dex */
public final class NestedScrollingChildHelper {
    public ViewParent a;

    /* renamed from: b, reason: collision with root package name */
    public ViewParent f1542b;

    /* renamed from: c, reason: collision with root package name */
    public final ViewGroup f1543c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f1544d;

    /* renamed from: e, reason: collision with root package name */
    public int[] f1545e;

    public NestedScrollingChildHelper(ViewGroup viewGroup) {
        this.f1543c = viewGroup;
    }

    public final boolean a(float f2, float f10, boolean z5) {
        ViewParent e9;
        if (this.f1544d && (e9 = e(0)) != null) {
            try {
                return e9.onNestedFling(this.f1543c, f2, f10, z5);
            } catch (AbstractMethodError e10) {
                Log.e("ViewParentCompat", "ViewParent " + e9 + " does not implement interface method onNestedFling", e10);
            }
        }
        return false;
    }

    public final boolean b(float f2, float f10) {
        ViewParent e9;
        if (this.f1544d && (e9 = e(0)) != null) {
            try {
                return e9.onNestedPreFling(this.f1543c, f2, f10);
            } catch (AbstractMethodError e10) {
                Log.e("ViewParentCompat", "ViewParent " + e9 + " does not implement interface method onNestedPreFling", e10);
            }
        }
        return false;
    }

    public final boolean c(int i5, int i6, int[] iArr, int[] iArr2, int i10) {
        ViewParent e9;
        int i11;
        int i12;
        if (!this.f1544d || (e9 = e(i10)) == null) {
            return false;
        }
        if (i5 == 0 && i6 == 0) {
            if (iArr2 == null) {
                return false;
            }
            iArr2[0] = 0;
            iArr2[1] = 0;
            return false;
        }
        ViewGroup viewGroup = this.f1543c;
        if (iArr2 != null) {
            viewGroup.getLocationInWindow(iArr2);
            i11 = iArr2[0];
            i12 = iArr2[1];
        } else {
            i11 = 0;
            i12 = 0;
        }
        if (iArr == null) {
            if (this.f1545e == null) {
                this.f1545e = new int[2];
            }
            iArr = this.f1545e;
        }
        int[] iArr3 = iArr;
        iArr3[0] = 0;
        iArr3[1] = 0;
        if (e9 instanceof p) {
            ((p) e9).onNestedPreScroll(viewGroup, i5, i6, iArr3, i10);
        } else if (i10 == 0) {
            try {
                e9.onNestedPreScroll(viewGroup, i5, i6, iArr3);
            } catch (AbstractMethodError e10) {
                Log.e("ViewParentCompat", "ViewParent " + e9 + " does not implement interface method onNestedPreScroll", e10);
            }
        }
        if (iArr2 != null) {
            viewGroup.getLocationInWindow(iArr2);
            iArr2[0] = iArr2[0] - i11;
            iArr2[1] = iArr2[1] - i12;
        }
        return (iArr3[0] == 0 && iArr3[1] == 0) ? false : true;
    }

    public final boolean d(int i5, int i6, int i10, int i11, int[] iArr, int i12, int[] iArr2) {
        ViewParent e9;
        int i13;
        int i14;
        int[] iArr3;
        if (this.f1544d && (e9 = e(i12)) != null) {
            if (i5 != 0 || i6 != 0 || i10 != 0 || i11 != 0) {
                ViewGroup viewGroup = this.f1543c;
                if (iArr != null) {
                    viewGroup.getLocationInWindow(iArr);
                    i13 = iArr[0];
                    i14 = iArr[1];
                } else {
                    i13 = 0;
                    i14 = 0;
                }
                if (iArr2 == null) {
                    if (this.f1545e == null) {
                        this.f1545e = new int[2];
                    }
                    int[] iArr4 = this.f1545e;
                    iArr4[0] = 0;
                    iArr4[1] = 0;
                    iArr3 = iArr4;
                } else {
                    iArr3 = iArr2;
                }
                if (e9 instanceof q) {
                    ((q) e9).onNestedScroll(viewGroup, i5, i6, i10, i11, i12, iArr3);
                } else {
                    iArr3[0] = iArr3[0] + i10;
                    iArr3[1] = iArr3[1] + i11;
                    if (e9 instanceof p) {
                        ((p) e9).onNestedScroll(viewGroup, i5, i6, i10, i11, i12);
                    } else if (i12 == 0) {
                        try {
                            e9.onNestedScroll(viewGroup, i5, i6, i10, i11);
                        } catch (AbstractMethodError e10) {
                            Log.e("ViewParentCompat", "ViewParent " + e9 + " does not implement interface method onNestedScroll", e10);
                        }
                    }
                }
                if (iArr != null) {
                    viewGroup.getLocationInWindow(iArr);
                    iArr[0] = iArr[0] - i13;
                    iArr[1] = iArr[1] - i14;
                }
                return true;
            }
            if (iArr != null) {
                iArr[0] = 0;
                iArr[1] = 0;
                return false;
            }
        }
        return false;
    }

    public final ViewParent e(int i5) {
        if (i5 == 0) {
            return this.a;
        }
        if (i5 != 1) {
            return null;
        }
        return this.f1542b;
    }

    public final boolean f(int i5) {
        return e(i5) != null;
    }

    public final boolean g(int i5, int i6) {
        boolean onStartNestedScroll;
        if (!f(i6)) {
            if (this.f1544d) {
                View view = this.f1543c;
                View view2 = view;
                for (ViewParent parent = view.getParent(); parent != null; parent = parent.getParent()) {
                    boolean z5 = parent instanceof p;
                    if (z5) {
                        onStartNestedScroll = ((p) parent).onStartNestedScroll(view2, view, i5, i6);
                    } else {
                        if (i6 == 0) {
                            try {
                                onStartNestedScroll = parent.onStartNestedScroll(view2, view, i5);
                            } catch (AbstractMethodError e9) {
                                Log.e("ViewParentCompat", "ViewParent " + parent + " does not implement interface method onStartNestedScroll", e9);
                            }
                        }
                        onStartNestedScroll = false;
                    }
                    if (onStartNestedScroll) {
                        if (i6 == 0) {
                            this.a = parent;
                        } else if (i6 == 1) {
                            this.f1542b = parent;
                        }
                        if (z5) {
                            ((p) parent).onNestedScrollAccepted(view2, view, i5, i6);
                        } else if (i6 == 0) {
                            try {
                                parent.onNestedScrollAccepted(view2, view, i5);
                            } catch (AbstractMethodError e10) {
                                Log.e("ViewParentCompat", "ViewParent " + parent + " does not implement interface method onNestedScrollAccepted", e10);
                            }
                        }
                    } else {
                        if (parent instanceof View) {
                            view2 = parent;
                        }
                    }
                }
            }
            return false;
        }
        return true;
    }

    public final void h(int i5) {
        ViewParent e9 = e(i5);
        if (e9 != null) {
            boolean z5 = e9 instanceof p;
            ViewGroup viewGroup = this.f1543c;
            if (z5) {
                ((p) e9).onStopNestedScroll(viewGroup, i5);
            } else if (i5 == 0) {
                try {
                    e9.onStopNestedScroll(viewGroup);
                } catch (AbstractMethodError e10) {
                    Log.e("ViewParentCompat", "ViewParent " + e9 + " does not implement interface method onStopNestedScroll", e10);
                }
            }
            if (i5 == 0) {
                this.a = null;
            } else {
                if (i5 != 1) {
                    return;
                }
                this.f1542b = null;
            }
        }
    }
}
