package jm;

import android.R;
import android.app.Activity;
import android.graphics.Matrix;
import android.graphics.PointF;
import android.os.SystemClock;
import android.util.SparseArray;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.EditText;
import com.facebook.react.uimanager.ReactCompoundView;
import com.facebook.react.uimanager.RootView;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.views.scroll.ReactHorizontalScrollView;
import com.facebook.react.views.scroll.ReactScrollView;
import com.facebook.react.views.view.ReactViewGroup;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.h0;
import kotlin.collections.i0;
import kotlin.collections.w0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g {

    /* renamed from: p, reason: collision with root package name */
    public static final PointF f12895p = new PointF();

    /* renamed from: q, reason: collision with root package name */
    public static final float[] f12896q = new float[2];

    /* renamed from: r, reason: collision with root package name */
    public static final Matrix f12897r = new Matrix();

    /* renamed from: s, reason: collision with root package name */
    public static final float[] f12898s = new float[2];

    /* renamed from: t, reason: collision with root package name */
    public static final com.facebook.react.uimanager.a f12899t = new com.facebook.react.uimanager.a(21);
    public final km.n a;

    /* renamed from: b, reason: collision with root package name */
    public final km.k f12900b;

    /* renamed from: c, reason: collision with root package name */
    public final ViewGroup f12901c;

    /* renamed from: d, reason: collision with root package name */
    public final u4.b f12902d;

    /* renamed from: e, reason: collision with root package name */
    public float f12903e;

    /* renamed from: f, reason: collision with root package name */
    public final ArrayList f12904f;

    /* renamed from: g, reason: collision with root package name */
    public final ArrayList f12905g;

    /* renamed from: h, reason: collision with root package name */
    public final ArrayDeque f12906h;

    /* renamed from: i, reason: collision with root package name */
    public final ArrayList f12907i;
    public final SparseArray j;
    public final HashSet k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f12908l;

    /* renamed from: m, reason: collision with root package name */
    public int f12909m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f12910n;

    /* renamed from: o, reason: collision with root package name */
    public int f12911o;

    public g(km.n wrapperView, km.k handlerRegistry, j8.b viewConfigHelper, ViewGroup rootView, u4.b onJSResponderCancelListener) {
        Intrinsics.checkNotNullParameter(wrapperView, "wrapperView");
        Intrinsics.checkNotNullParameter(handlerRegistry, "handlerRegistry");
        Intrinsics.checkNotNullParameter(viewConfigHelper, "viewConfigHelper");
        Intrinsics.checkNotNullParameter(rootView, "rootView");
        Intrinsics.checkNotNullParameter(onJSResponderCancelListener, "onJSResponderCancelListener");
        this.a = wrapperView;
        this.f12900b = handlerRegistry;
        this.f12901c = rootView;
        this.f12902d = onJSResponderCancelListener;
        this.f12904f = new ArrayList();
        this.f12905g = new ArrayList();
        this.f12906h = new ArrayDeque();
        this.f12907i = new ArrayList();
        this.j = new SparseArray();
        this.k = new HashSet();
    }

    public static boolean i(f fVar, MotionEvent motionEvent) {
        return ((fVar instanceof h) || (fVar instanceof km.l) || !km.a.a(motionEvent)) ? false : true;
    }

    public final void a() {
        ArrayList arrayList = this.f12905g;
        for (f fVar : CollectionsKt.i0(arrayList)) {
            if (!fVar.M) {
                arrayList.remove(fVar);
                this.k.remove(Integer.valueOf(fVar.f12874d));
            }
        }
    }

    public final void b() {
        ArrayList arrayList = this.f12904f;
        Iterator it = i0.y(arrayList).iterator();
        while (true) {
            ListIterator listIterator = ((w0) it).f13525d;
            if (!listIterator.hasPrevious()) {
                h0.s(arrayList, new cs.p(28));
                this.f12910n = false;
                return;
            }
            f fVar = (f) listIterator.previous();
            if (qa.s.v(fVar.f12878h) && !fVar.M) {
                fVar.f12876f = null;
                fVar.F = null;
                Arrays.fill(fVar.a, -1);
                fVar.f12872b = 0;
                fVar.f12885q = 0;
                e[] eVarArr = fVar.f12886r;
                kotlin.collections.u.k(eVarArr, null, 0, eVarArr.length);
                fVar.f12884p = 0;
                fVar.B();
                fVar.L = false;
                fVar.M = false;
                fVar.K = Integer.MAX_VALUE;
            }
        }
    }

    public final boolean c(float[] fArr, View view, List list) {
        u j;
        boolean z5;
        if (!j(view) && (j = j8.b.j(view)) != u.f12946d) {
            if (!(view instanceof ViewGroup) || j == u.f12948i) {
                z5 = false;
            } else {
                ViewGroup viewGroup = (ViewGroup) view;
                z5 = false;
                for (int childCount = viewGroup.getChildCount() - 1; -1 < childCount; childCount--) {
                    View childAt = viewGroup.getChildAt(childCount);
                    Intrinsics.checkNotNull(childAt);
                    if (childAt.getVisibility() == 0 && childAt.getAlpha() >= this.f12903e) {
                        float f2 = fArr[0];
                        float f10 = fArr[1];
                        PointF pointF = f12895p;
                        qa.s.C(f2, f10, viewGroup, childAt, pointF);
                        if (!f(childAt) || qa.s.B(pointF.x, pointF.y, childAt)) {
                            float f11 = fArr[0];
                            float f12 = fArr[1];
                            fArr[0] = pointF.x;
                            fArr[1] = pointF.y;
                            boolean c6 = c(fArr, childAt, list);
                            fArr[0] = f11;
                            fArr[1] = f12;
                            z5 = c6;
                            if (c6) {
                                break;
                            }
                        }
                    }
                }
            }
            boolean z6 = j != u.f12947e && qa.s.B(fArr[0], fArr[1], view);
            if (z5 || z6) {
                if (!list.contains(view)) {
                    list.add(view);
                }
                return true;
            }
        }
        return false;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void d(f fVar, MotionEvent sourceEvent) {
        int i5;
        int i6;
        int i10;
        int i11;
        View view = fVar.f12876f;
        int[] iArr = fVar.a;
        if (view == null) {
            view = fVar.f12877g;
        }
        if (view != null) {
            km.n nVar = this.a;
            if (view != nVar) {
                while (true) {
                    ViewParent parent = view.getParent();
                    ViewGroup viewGroup = parent instanceof ViewGroup ? (ViewGroup) parent : null;
                    if (viewGroup == null || viewGroup.indexOfChild(view) < 0) {
                        break;
                    } else if (viewGroup == nVar) {
                        break;
                    } else {
                        view = viewGroup;
                    }
                }
            }
            Intrinsics.checkNotNullParameter(sourceEvent, "event");
            if (!fVar.f12880l || (i5 = fVar.f12878h) == 1) {
                return;
            }
            int i12 = 3;
            if (i5 == 3 || i5 == 5) {
                return;
            }
            if (sourceEvent.getActionMasked() == 2) {
                int pointerCount = sourceEvent.getPointerCount();
                for (int i13 = 0; i13 < pointerCount; i13++) {
                    if (iArr[sourceEvent.getPointerId(i13)] == -1) {
                    }
                }
                return;
            }
            if (iArr[sourceEvent.getPointerId(sourceEvent.getActionIndex())] == -1) {
                return;
            }
            int actionMasked = sourceEvent.getActionMasked();
            View o6 = fVar.o();
            MotionEvent transformedEvent = MotionEvent.obtain(sourceEvent);
            Intrinsics.checkNotNullExpressionValue(transformedEvent, "obtain(...)");
            k(o6, transformedEvent);
            if (fVar.f12887s) {
                int[] iArr2 = fVar.f12873c;
                i6 = 0;
                e[] eVarArr = fVar.f12886r;
                Intrinsics.checkNotNullParameter(transformedEvent, "event");
                Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
                if (transformedEvent.getActionMasked() == 0 || transformedEvent.getActionMasked() == 5) {
                    fVar.f12882n = null;
                    fVar.f12884p = 1;
                    int pointerId = transformedEvent.getPointerId(transformedEvent.getActionIndex());
                    e eVar = new e(transformedEvent.getX(transformedEvent.getActionIndex()), transformedEvent.getY(transformedEvent.getActionIndex()), (sourceEvent.getX(transformedEvent.getActionIndex()) + (sourceEvent.getRawX() - sourceEvent.getX())) - iArr2[0], (sourceEvent.getY(transformedEvent.getActionIndex()) + (sourceEvent.getRawY() - sourceEvent.getY())) - iArr2[1], pointerId);
                    eVarArr[pointerId] = eVar;
                    fVar.f12885q++;
                    Intrinsics.checkNotNull(eVar);
                    fVar.c(eVar);
                    fVar.l();
                    fVar.i();
                    fVar.j(transformedEvent, sourceEvent);
                } else if (transformedEvent.getActionMasked() == 1 || transformedEvent.getActionMasked() == 6) {
                    fVar.j(transformedEvent, sourceEvent);
                    fVar.l();
                    fVar.f12882n = null;
                    fVar.f12884p = 3;
                    int pointerId2 = transformedEvent.getPointerId(transformedEvent.getActionIndex());
                    e eVar2 = new e(transformedEvent.getX(transformedEvent.getActionIndex()), transformedEvent.getY(transformedEvent.getActionIndex()), (sourceEvent.getX(transformedEvent.getActionIndex()) + (sourceEvent.getRawX() - sourceEvent.getX())) - iArr2[0], (sourceEvent.getY(transformedEvent.getActionIndex()) + (sourceEvent.getRawY() - sourceEvent.getY())) - iArr2[1], pointerId2);
                    eVarArr[pointerId2] = eVar2;
                    Intrinsics.checkNotNull(eVar2);
                    fVar.c(eVar2);
                    eVarArr[pointerId2] = null;
                    fVar.f12885q--;
                    fVar.i();
                } else if (transformedEvent.getActionMasked() == 2) {
                    fVar.j(transformedEvent, sourceEvent);
                }
            } else {
                i6 = 0;
            }
            if (!fVar.M || actionMasked != 2) {
                Intrinsics.checkNotNullParameter(transformedEvent, "transformedEvent");
                Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
                if (fVar.f12880l && (i10 = fVar.f12878h) != 3 && i10 != 1 && i10 != 5 && fVar.f12872b >= 1) {
                    try {
                        MotionEvent[] motionEventArr = {fVar.b(transformedEvent), fVar.b(sourceEvent)};
                        MotionEvent motionEvent = motionEventArr[i6];
                        MotionEvent motionEvent2 = motionEventArr[1];
                        fVar.D = motionEvent.getActionMasked() == 6 ? motionEvent.getPointerCount() - 1 : motionEvent.getPointerCount();
                        fVar.f12879i = motionEvent.getX();
                        fVar.j = motionEvent.getY();
                        boolean u5 = fVar.u(fVar.f12879i, fVar.j, fVar.o());
                        fVar.k = u5;
                        if (fVar.E && !u5 && ((i11 = fVar.f12878h) == 4 || i11 == 2)) {
                            fVar.m();
                        } else {
                            fVar.f12893y = e4.f.w(motionEvent, true);
                            fVar.f12894z = e4.f.x(motionEvent, true);
                            fVar.B = motionEvent.getRawX() - motionEvent.getX();
                            fVar.C = motionEvent.getRawY() - motionEvent.getY();
                            if (sourceEvent.getAction() == 0 || sourceEvent.getAction() == 9 || sourceEvent.getAction() == 7) {
                                int toolType = sourceEvent.getToolType(sourceEvent.getActionIndex());
                                if (toolType == 1) {
                                    i12 = i6;
                                } else if (toolType == 2) {
                                    i12 = 1;
                                } else if (toolType == 3) {
                                    i12 = 2;
                                }
                                fVar.I = i12;
                            }
                            if (km.a.a(sourceEvent)) {
                                fVar.z(motionEvent, motionEvent2);
                            } else {
                                fVar.y(motionEvent, motionEvent2);
                            }
                            if (!Intrinsics.areEqual(motionEvent, transformedEvent)) {
                                motionEvent.recycle();
                            }
                            if (!Intrinsics.areEqual(motionEvent2, sourceEvent)) {
                                motionEvent2.recycle();
                            }
                        }
                    } catch (d unused) {
                        fVar.m();
                    }
                }
                if (fVar.L) {
                    if (fVar.N) {
                        fVar.N = i6;
                        fVar.E();
                    }
                    fVar.g(transformedEvent);
                }
                if (actionMasked == 1 || actionMasked == 6 || actionMasked == 10) {
                    int pointerId3 = transformedEvent.getPointerId(transformedEvent.getActionIndex());
                    if (iArr[pointerId3] != -1) {
                        iArr[pointerId3] = -1;
                        fVar.f12872b--;
                    }
                }
            }
            transformedEvent.recycle();
            return;
        }
        fVar.e();
    }

    public final boolean e(ViewGroup viewGroup, float[] fArr, int i5, MotionEvent motionEvent) {
        if (!j(viewGroup)) {
            for (int childCount = viewGroup.getChildCount() - 1; -1 < childCount; childCount--) {
                View childAt = viewGroup.getChildAt(childCount);
                Intrinsics.checkNotNull(childAt);
                if (childAt.getVisibility() == 0 && childAt.getAlpha() >= this.f12903e) {
                    float f2 = fArr[0];
                    float f10 = fArr[1];
                    PointF pointF = f12895p;
                    qa.s.C(f2, f10, viewGroup, childAt, pointF);
                    float f11 = fArr[0];
                    float f12 = fArr[1];
                    fArr[0] = pointF.x;
                    fArr[1] = pointF.y;
                    boolean m5 = (!f(childAt) || qa.s.B(fArr[0], fArr[1], childAt)) ? m(childAt, fArr, i5, motionEvent) : false;
                    fArr[0] = f11;
                    fArr[1] = f12;
                    if (m5) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x0025, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(((com.facebook.react.views.scroll.ReactScrollView) r5).getOverflow(), com.facebook.react.uimanager.ViewProps.VISIBLE) == false) goto L6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x0038, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(((com.facebook.react.views.scroll.ReactHorizontalScrollView) r5).getOverflow(), com.facebook.react.uimanager.ViewProps.VISIBLE) == false) goto L6;
     */
    /* JADX WARN: Removed duplicated region for block: B:7:0x004e A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean f(View view) {
        boolean areEqual;
        if (view instanceof ViewGroup) {
            ViewGroup view2 = (ViewGroup) view;
            Intrinsics.checkNotNullParameter(view2, "view");
            if (!view2.getClipChildren()) {
                if (!(view2 instanceof ReactScrollView)) {
                    if (!(view2 instanceof ReactHorizontalScrollView)) {
                        if (view2 instanceof ReactViewGroup) {
                            areEqual = Intrinsics.areEqual(((ReactViewGroup) view2).getOverflow(), ViewProps.HIDDEN);
                        }
                    }
                    areEqual = false;
                }
                if (areEqual) {
                    return false;
                }
            }
            areEqual = true;
            if (areEqual) {
            }
        }
        return true;
    }

    public final void g(f handler, View view) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        ArrayList arrayList = this.f12904f;
        if (arrayList.contains(handler)) {
            return;
        }
        handler.L = false;
        handler.M = false;
        handler.K = Integer.MAX_VALUE;
        int[] iArr = handler.f12873c;
        if (handler.f12876f != null || handler.F != null) {
            throw new IllegalStateException("Already prepared or hasn't been reset");
        }
        Arrays.fill(handler.a, -1);
        handler.f12872b = 0;
        handler.f12878h = 0;
        handler.f12876f = view;
        handler.F = this;
        Activity n6 = f.n(view != null ? view.getContext() : null);
        View findViewById = n6 != null ? n6.findViewById(R.id.content) : null;
        if (findViewById != null) {
            findViewById.getLocationOnScreen(iArr);
        } else {
            iArr[0] = 0;
            iArr[1] = 0;
        }
        handler.A();
        if (!handler.H(arrayList)) {
            handler.e();
        }
        arrayList.add(handler);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r17v0, types: [android.view.View, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r5v20, types: [android.view.ViewParent] */
    /* JADX WARN: Type inference failed for: r5v31 */
    /* JADX WARN: Type inference failed for: r5v32 */
    public final boolean h(View view, float[] fArr, int i5, MotionEvent motionEvent, boolean z5) {
        float f2;
        View view2;
        boolean z6;
        ArrayList arrayList;
        float f10 = fArr[0];
        float f11 = fArr[1];
        if (z5) {
            Intrinsics.checkNotNull(view, "null cannot be cast to non-null type com.swmansion.gesturehandler.react.RNGestureHandlerDetectorView");
            view2 = ((km.f) view).getChildAt(0);
            PointF pointF = f12895p;
            Intrinsics.checkNotNull(view2);
            qa.s.C(fArr[0], fArr[1], (ViewGroup) view, view2, pointF);
            f2 = pointF.x;
            f11 = pointF.y;
        } else {
            f2 = f10;
            view2 = view;
        }
        ArrayList g6 = this.f12900b.g(view);
        if (g6 != null) {
            synchronized (g6) {
                try {
                    Iterator it = g6.iterator();
                    Intrinsics.checkNotNullExpressionValue(it, "iterator(...)");
                    z6 = false;
                    while (it.hasNext()) {
                        f fVar = (f) it.next();
                        if (fVar.f12880l && fVar.u(f2, f11, view2) && !i(fVar, motionEvent)) {
                            g(fVar, view);
                            fVar.L(i5);
                            z6 = true;
                        }
                    }
                    Unit unit = Unit.a;
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        } else {
            z6 = false;
        }
        float width = view.getWidth();
        float f12 = fArr[0];
        Integer num = null;
        if (0.0f <= f12 && f12 <= width) {
            float height = view.getHeight();
            float f13 = fArr[1];
            if (0.0f <= f13 && f13 <= height) {
                ViewParent parent = view.getParent();
                if ((parent instanceof ViewGroup ? (ViewGroup) parent : null) != null) {
                    Matrix matrix = view.getMatrix();
                    float[] fArr2 = f12896q;
                    fArr2[0] = 0.0f;
                    fArr2[1] = 0.0f;
                    matrix.mapPoints(fArr2);
                    float left = fArr2[0] + view.getLeft();
                    float top = fArr2[1] + view.getTop();
                    if (left < 0.0f || left + view.getWidth() > r5.getWidth() || top < 0.0f || top + view.getHeight() > r5.getHeight()) {
                        boolean z7 = false;
                        for (km.n nVar = view.getParent(); nVar != 0; nVar = nVar.getParent()) {
                            if (nVar instanceof ViewGroup) {
                                if ((nVar instanceof km.n) && nVar.f13451e) {
                                    break;
                                }
                                ViewGroup viewGroup = nVar;
                                ArrayList g10 = this.f12900b.g(nVar);
                                if (g10 != null) {
                                    synchronized (g10) {
                                        try {
                                            Iterator it2 = g10.iterator();
                                            Intrinsics.checkNotNullExpressionValue(it2, "iterator(...)");
                                            while (it2.hasNext()) {
                                                f fVar2 = (f) it2.next();
                                                if (!i(fVar2, motionEvent) && fVar2.f12880l && fVar2.u(fArr[0], fArr[1], view)) {
                                                    g(fVar2, viewGroup);
                                                    fVar2.L(i5);
                                                    z7 = true;
                                                }
                                            }
                                            Unit unit2 = Unit.a;
                                        } finally {
                                        }
                                    }
                                } else {
                                    continue;
                                }
                            }
                        }
                        if (z7) {
                            z6 = true;
                        }
                    }
                }
            }
        }
        if (view instanceof ReactCompoundView) {
            try {
                num = Integer.valueOf(((ReactCompoundView) view).reactTagForTouch(fArr[0], fArr[1]));
            } catch (IllegalStateException unused) {
            }
            if (num != null) {
                if (num.intValue() != view.getId()) {
                    km.k kVar = this.f12900b;
                    int intValue = num.intValue();
                    synchronized (kVar) {
                        arrayList = (ArrayList) kVar.f13440c.get(intValue);
                    }
                    if (arrayList != null) {
                        synchronized (arrayList) {
                            try {
                                Iterator it3 = arrayList.iterator();
                                Intrinsics.checkNotNullExpressionValue(it3, "iterator(...)");
                                while (it3.hasNext()) {
                                    f fVar3 = (f) it3.next();
                                    if (!i(fVar3, motionEvent)) {
                                        g(fVar3, view);
                                        fVar3.L(i5);
                                        z6 = true;
                                    }
                                }
                                Unit unit3 = Unit.a;
                            } catch (Throwable th3) {
                                throw th3;
                            }
                        }
                    }
                }
            }
        }
        return z6;
    }

    public final boolean j(View view) {
        return (view instanceof km.n) && !Intrinsics.areEqual(view, this.a) && ((km.n) view).f13451e;
    }

    public final void k(View view, MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        if (view == null) {
            return;
        }
        ViewParent parent = view.getParent();
        ViewGroup viewGroup = parent instanceof ViewGroup ? (ViewGroup) parent : null;
        if (!Intrinsics.areEqual(viewGroup, this.a)) {
            k(viewGroup, event);
        }
        if (viewGroup != null) {
            event.setLocation((event.getX() + viewGroup.getScrollX()) - view.getLeft(), (event.getY() + viewGroup.getScrollY()) - view.getTop());
        }
        if (view.getMatrix().isIdentity()) {
            return;
        }
        Matrix matrix = view.getMatrix();
        Matrix matrix2 = f12897r;
        matrix.invert(matrix2);
        event.transform(matrix2);
    }

    public final void l(View view, PointF point) {
        Intrinsics.checkNotNullParameter(point, "point");
        if (view == null) {
            return;
        }
        ViewParent parent = view.getParent();
        ViewGroup viewGroup = parent instanceof ViewGroup ? (ViewGroup) parent : null;
        if (!Intrinsics.areEqual(viewGroup, this.a)) {
            l(viewGroup, point);
        }
        if (viewGroup != null) {
            point.x += viewGroup.getScrollX() - view.getLeft();
            point.y += viewGroup.getScrollY() - view.getTop();
        }
        if (view.getMatrix().isIdentity()) {
            return;
        }
        Matrix matrix = view.getMatrix();
        Matrix matrix2 = f12897r;
        matrix.invert(matrix2);
        float f2 = point.x;
        float[] fArr = f12898s;
        fArr[0] = f2;
        fArr[1] = point.y;
        matrix2.mapPoints(fArr);
        point.x = fArr[0];
        point.y = fArr[1];
    }

    public final boolean m(View view, float[] fArr, int i5, MotionEvent motionEvent) {
        int ordinal;
        if (!j(view) && (ordinal = j8.b.j(view).ordinal()) != 0) {
            if (ordinal != 1) {
                if (ordinal != 2) {
                    if (ordinal != 3) {
                        throw new fo.n();
                    }
                    boolean e9 = view instanceof ViewGroup ? e((ViewGroup) view, fArr, i5, motionEvent) : false;
                    if (h(view, fArr, i5, motionEvent, false) || e9 || qa.s.y(fArr, view)) {
                        return true;
                    }
                } else if (h(view, fArr, i5, motionEvent, false) || qa.s.y(fArr, view)) {
                    return true;
                }
            } else {
                if (view instanceof ViewGroup) {
                    boolean e10 = e((ViewGroup) view, fArr, i5, motionEvent);
                    if (e10) {
                        h(view, fArr, i5, motionEvent, false);
                        return e10;
                    }
                    if (view instanceof km.f) {
                        h(view, fArr, i5, motionEvent, ((km.f) view).getChildCount() == 1);
                    }
                    return e10;
                }
                if (view instanceof EditText) {
                    return h(view, fArr, i5, motionEvent, false);
                }
            }
        }
        return false;
    }

    /* JADX WARN: Code restructure failed: missing block: B:112:0x0076, code lost:
    
        r7 = null;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void n(f handler) {
        View view;
        ArrayList arrayList = this.f12904f;
        if (arrayList == null || !arrayList.isEmpty()) {
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                f fVar = (f) it.next();
                if (qa.s.x(handler, fVar) && fVar.f12878h == 5) {
                    break;
                }
            }
        }
        if (arrayList == null || !arrayList.isEmpty()) {
            Iterator it2 = arrayList.iterator();
            while (it2.hasNext()) {
                f of2 = (f) it2.next();
                if (handler.s(of2) && of2.f12878h == 4 && handler != of2 && !handler.I(of2) && !of2.I(handler)) {
                    Intrinsics.checkNotNullParameter(of2, "of");
                    View view2 = handler.f12876f;
                    Object parent = view2 != null ? view2.getParent() : null;
                    if (parent instanceof View) {
                        view = (View) parent;
                        while (view != null) {
                            if (Intrinsics.areEqual(view, of2.f12876f)) {
                                handler.e();
                                return;
                            } else {
                                Object parent2 = view.getParent();
                                if (parent2 instanceof View) {
                                    view = (View) parent2;
                                }
                            }
                        }
                    }
                    view = null;
                }
            }
        }
        ArrayList arrayList2 = this.f12905g;
        if (arrayList == null || !arrayList.isEmpty()) {
            Iterator it3 = arrayList.iterator();
            while (it3.hasNext()) {
                f fVar2 = (f) it3.next();
                if (!qa.s.v(fVar2.f12878h) && qa.s.x(handler, fVar2)) {
                    if (arrayList2.contains(handler)) {
                        return;
                    }
                    arrayList2.add(handler);
                    this.k.add(Integer.valueOf(handler.f12874d));
                    handler.M = true;
                    int i5 = this.f12911o;
                    this.f12911o = i5 + 1;
                    handler.K = i5;
                    return;
                }
            }
        }
        int i6 = handler.f12878h;
        handler.M = false;
        handler.L = true;
        handler.N = true;
        int i10 = this.f12911o;
        this.f12911o = i10 + 1;
        handler.K = i10;
        Iterator it4 = i0.y(arrayList).iterator();
        while (true) {
            ListIterator listIterator = ((w0) it4).f13525d;
            if (!listIterator.hasPrevious()) {
                break;
            }
            f fVar3 = (f) listIterator.previous();
            if (qa.s.w(fVar3, handler)) {
                fVar3.e();
            }
        }
        Iterator it5 = i0.y(arrayList2).iterator();
        while (true) {
            ListIterator listIterator2 = ((w0) it5).f13525d;
            if (!listIterator2.hasPrevious()) {
                break;
            }
            f fVar4 = (f) listIterator2.previous();
            if (qa.s.w(fVar4, handler)) {
                fVar4.M = false;
            }
        }
        a();
        if (i6 != 1 && i6 != 3) {
            if (handler.f12890v) {
                Intrinsics.checkNotNullParameter(handler, "handler");
                long uptimeMillis = SystemClock.uptimeMillis();
                MotionEvent obtain = MotionEvent.obtain(uptimeMillis, uptimeMillis, 3, 0.0f, 0.0f, 0);
                ViewGroup viewGroup = ((km.m) this.f12902d.f18810e).f13445e;
                if (viewGroup instanceof RootView) {
                    Intrinsics.checkNotNull(obtain);
                    ((RootView) viewGroup).onChildStartedNativeGesture(viewGroup, obtain);
                }
                obtain.recycle();
            }
            handler.h(4, 2);
            if (i6 != 4) {
                handler.h(5, 4);
                if (i6 != 5) {
                    handler.h(0, 5);
                }
            }
        }
        handler.M = false;
    }
}
