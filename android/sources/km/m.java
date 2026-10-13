package km;

import android.graphics.PointF;
import android.util.Log;
import android.util.SparseArray;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import com.facebook.react.bridge.NativeModule;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.UiThreadUtil;
import com.facebook.react.common.ReactConstants;
import com.facebook.react.uimanager.RootView;
import com.facebook.react.uimanager.ThemedReactContext;
import com.swmansion.gesturehandler.react.RNGestureHandlerModule;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;
import jm.q;
import kotlin.collections.CollectionsKt;
import kotlin.collections.g0;
import kotlin.collections.i0;
import kotlin.jvm.internal.Intrinsics;
import qa.s;

/* loaded from: classes3.dex */
public final class m {
    public final ReactContext a;

    /* renamed from: b, reason: collision with root package name */
    public final int f13442b;

    /* renamed from: c, reason: collision with root package name */
    public final jm.g f13443c;

    /* renamed from: d, reason: collision with root package name */
    public final l f13444d;

    /* renamed from: e, reason: collision with root package name */
    public final ViewGroup f13445e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f13446f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f13447g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f13448h;

    public m(ReactContext context, n wrappedView, int i5) {
        Map map;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(wrappedView, "wrappedView");
        this.a = context;
        this.f13442b = i5;
        RNGestureHandlerModule.Companion.getClass();
        map = RNGestureHandlerModule.registries;
        k kVar = (k) map.get(Integer.valueOf(i5));
        if (kVar == null) {
            throw new Exception("Tried to access a non-existent registry");
        }
        UiThreadUtil.assertOnUiThread();
        int id2 = wrappedView.getId();
        NativeModule nativeModule = context.getNativeModule((Class<NativeModule>) RNGestureHandlerModule.class);
        Intrinsics.checkNotNull(nativeModule);
        RNGestureHandlerModule rNGestureHandlerModule = (RNGestureHandlerModule) nativeModule;
        UiThreadUtil.assertOnUiThread();
        ViewParent viewParent = wrappedView;
        while (viewParent != null && !(viewParent instanceof RootView)) {
            viewParent = viewParent.getParent();
        }
        if (viewParent == null) {
            throw new IllegalStateException(("View " + wrappedView + " has not been mounted under ReactRootView").toString());
        }
        ViewGroup viewGroup = (ViewGroup) viewParent;
        this.f13445e = viewGroup;
        Log.i(ReactConstants.TAG, "[GESTURE HANDLER] Initialize gesture handler for root view " + viewGroup);
        jm.g gVar = new jm.g(wrappedView, kVar, new j8.b(12, (byte) 0), viewGroup, new u4.b(23, this));
        gVar.f12903e = 0.1f;
        this.f13443c = gVar;
        l lVar = new l(this, -id2);
        this.f13444d = lVar;
        kVar.h(lVar);
        kVar.a(lVar.f12874d, id2, 3, null);
        rNGestureHandlerModule.registerRootHelper(this);
    }

    /* JADX WARN: Code restructure failed: missing block: B:14:0x005a, code lost:
    
        if (r3 != 7) goto L29;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:114:0x010c  */
    /* JADX WARN: Removed duplicated region for block: B:11:0x0055  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x00bb  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x00d7 A[Catch: all -> 0x00e1, LOOP:0: B:21:0x00d1->B:23:0x00d7, LOOP_END, TRY_LEAVE, TryCatch #0 {all -> 0x00e1, blocks: (B:20:0x00c8, B:21:0x00d1, B:23:0x00d7), top: B:19:0x00c8 }] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00f0  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00f9 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0118  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x0137 A[LOOP:1: B:39:0x0135->B:40:0x0137, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:44:0x015d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean a(MotionEvent event) {
        ArrayDeque arrayDeque;
        ArrayList arrayList;
        Iterator it;
        ViewGroup viewGroup;
        jm.g gVar;
        int size;
        int i5;
        boolean z5;
        Intrinsics.checkNotNullParameter(event, "event");
        this.f13448h = true;
        jm.g gVar2 = this.f13443c;
        Intrinsics.checkNotNull(gVar2);
        ArrayList arrayList2 = gVar2.f12904f;
        Intrinsics.checkNotNullParameter(event, "event");
        gVar2.f12908l = true;
        int actionMasked = event.getActionMasked();
        SparseArray sparseArray = gVar2.j;
        int actionIndex = event.getActionIndex();
        int actionMasked2 = event.getActionMasked();
        try {
            if (actionMasked2 != 0) {
                if (actionMasked2 == 1 || actionMasked2 == 3) {
                    sparseArray.clear();
                } else if (actionMasked2 != 5) {
                    if (actionMasked2 == 6) {
                        sparseArray.remove(event.getPointerId(actionIndex));
                    }
                }
                if (actionMasked != 0) {
                    if (actionMasked == 3) {
                        Iterator it2 = CollectionsKt.i0(i0.y(gVar2.f12905g)).iterator();
                        while (it2.hasNext()) {
                            ((jm.f) it2.next()).e();
                        }
                        Iterator it3 = CollectionsKt.X(arrayList2).iterator();
                        while (it3.hasNext()) {
                            ((jm.f) it3.next()).e();
                        }
                    } else if (actionMasked != 5) {
                    }
                    arrayDeque = gVar2.f12906h;
                    arrayList = (ArrayList) arrayDeque.pollLast();
                    if (arrayList == null) {
                        arrayList = new ArrayList();
                    }
                    arrayList.addAll(arrayList2);
                    g0.n(arrayList, jm.g.f12899t);
                    it = arrayList.iterator();
                    Intrinsics.checkNotNullExpressionValue(it, "iterator(...)");
                    while (it.hasNext()) {
                        gVar2.d((jm.f) it.next(), event);
                    }
                    arrayList.clear();
                    arrayDeque.addLast(arrayList);
                    gVar2.f12908l = false;
                    if (gVar2.f12910n && gVar2.f12909m == 0) {
                        gVar2.b();
                    }
                    if ((actionMasked != 1 || actionMasked == 3 || actionMasked == 10) && arrayList2.isEmpty()) {
                        viewGroup = gVar2.f12901c;
                        if (viewGroup instanceof RootView) {
                            ((RootView) viewGroup).onChildEndedNativeGesture(viewGroup, event);
                        }
                    }
                    this.f13448h = false;
                    if (this.f13446f && !this.f13447g) {
                        gVar = this.f13443c;
                        Intrinsics.checkNotNull(gVar);
                        gVar.getClass();
                        Intrinsics.checkNotNullParameter(event, "event");
                        gVar.f12907i.clear();
                        size = gVar.j.size();
                        for (i5 = 0; i5 < size; i5++) {
                            PointF pointF = (PointF) gVar.j.valueAt(i5);
                            float[] fArr = jm.g.f12898s;
                            fArr[0] = pointF.x;
                            fArr[1] = pointF.y;
                            gVar.c(fArr, gVar.a, gVar.f12907i);
                        }
                        if (!gVar.f12907i.isEmpty()) {
                            ArrayList arrayList3 = gVar.f12904f;
                            ArrayList arrayList4 = new ArrayList();
                            Iterator it4 = arrayList3.iterator();
                            while (it4.hasNext()) {
                                Object next = it4.next();
                                if (((jm.f) next).L) {
                                    arrayList4.add(next);
                                }
                            }
                            MotionEvent obtain = MotionEvent.obtain(event);
                            obtain.setAction(3);
                            Iterator it5 = gVar.f12907i.iterator();
                            Intrinsics.checkNotNullExpressionValue(it5, "iterator(...)");
                            while (it5.hasNext()) {
                                Object next2 = it5.next();
                                Intrinsics.checkNotNullExpressionValue(next2, "next(...)");
                                View view = (View) next2;
                                if (view != gVar.a) {
                                    ArrayList<jm.f> g6 = gVar.f12900b.g(view);
                                    if (g6 != null) {
                                        synchronized (g6) {
                                            if (!g6.isEmpty()) {
                                                for (jm.f fVar : g6) {
                                                    if (fVar instanceof q) {
                                                        if (!fVar.L && !arrayList4.isEmpty()) {
                                                            Iterator it6 = arrayList4.iterator();
                                                            while (it6.hasNext()) {
                                                                jm.f fVar2 = (jm.f) it6.next();
                                                                PointF pointF2 = jm.g.f12895p;
                                                                if (s.w(fVar, fVar2)) {
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                        z5 = true;
                                                        break;
                                                    }
                                                }
                                            }
                                            z5 = false;
                                        }
                                    } else {
                                        z5 = false;
                                    }
                                    if (!z5) {
                                        view.onTouchEvent(obtain);
                                    }
                                }
                            }
                            obtain.recycle();
                            gVar.f12907i.clear();
                        }
                    }
                    boolean z6 = this.f13446f;
                    this.f13447g = z6;
                    return z6;
                }
                int actionIndex2 = event.getActionIndex();
                int pointerId = event.getPointerId(actionIndex2);
                float[] fArr2 = jm.g.f12898s;
                fArr2[0] = event.getX(actionIndex2);
                fArr2[1] = event.getY(actionIndex2);
                n nVar = gVar2.a;
                gVar2.m(nVar, fArr2, pointerId, event);
                gVar2.e(nVar, fArr2, pointerId, event);
                arrayDeque = gVar2.f12906h;
                arrayList = (ArrayList) arrayDeque.pollLast();
                if (arrayList == null) {
                }
                arrayList.addAll(arrayList2);
                g0.n(arrayList, jm.g.f12899t);
                it = arrayList.iterator();
                Intrinsics.checkNotNullExpressionValue(it, "iterator(...)");
                while (it.hasNext()) {
                }
                arrayList.clear();
                arrayDeque.addLast(arrayList);
                gVar2.f12908l = false;
                if (gVar2.f12910n) {
                    gVar2.b();
                }
                if (actionMasked != 1) {
                }
                viewGroup = gVar2.f12901c;
                if (viewGroup instanceof RootView) {
                }
                this.f13448h = false;
                if (this.f13446f) {
                    gVar = this.f13443c;
                    Intrinsics.checkNotNull(gVar);
                    gVar.getClass();
                    Intrinsics.checkNotNullParameter(event, "event");
                    gVar.f12907i.clear();
                    size = gVar.j.size();
                    while (i5 < size) {
                    }
                    if (!gVar.f12907i.isEmpty()) {
                    }
                }
                boolean z62 = this.f13446f;
                this.f13447g = z62;
                return z62;
            }
            it = arrayList.iterator();
            Intrinsics.checkNotNullExpressionValue(it, "iterator(...)");
            while (it.hasNext()) {
            }
            arrayList.clear();
            arrayDeque.addLast(arrayList);
            gVar2.f12908l = false;
            if (gVar2.f12910n) {
            }
            if (actionMasked != 1) {
            }
            viewGroup = gVar2.f12901c;
            if (viewGroup instanceof RootView) {
            }
            this.f13448h = false;
            if (this.f13446f) {
            }
            boolean z622 = this.f13446f;
            this.f13447g = z622;
            return z622;
        } catch (Throwable th2) {
            arrayList.clear();
            arrayDeque.addLast(arrayList);
            throw th2;
        }
        sparseArray.put(event.getPointerId(actionIndex), new PointF(event.getX(actionIndex), event.getY(actionIndex)));
        if (actionMasked != 0) {
        }
        int actionIndex22 = event.getActionIndex();
        int pointerId2 = event.getPointerId(actionIndex22);
        float[] fArr22 = jm.g.f12898s;
        fArr22[0] = event.getX(actionIndex22);
        fArr22[1] = event.getY(actionIndex22);
        n nVar2 = gVar2.a;
        gVar2.m(nVar2, fArr22, pointerId2, event);
        gVar2.e(nVar2, fArr22, pointerId2, event);
        arrayDeque = gVar2.f12906h;
        arrayList = (ArrayList) arrayDeque.pollLast();
        if (arrayList == null) {
        }
        arrayList.addAll(arrayList2);
        g0.n(arrayList, jm.g.f12899t);
    }

    public final void b() {
        Map map;
        RNGestureHandlerModule.Companion.getClass();
        map = RNGestureHandlerModule.registries;
        k kVar = (k) map.get(Integer.valueOf(this.f13442b));
        if (kVar == null) {
            throw new Exception("Tried to access a non-existent registry");
        }
        Log.i(ReactConstants.TAG, "[GESTURE HANDLER] Tearing down gesture handler registered for root view " + this.f13445e);
        ReactContext reactContext = this.a;
        Intrinsics.checkNotNull(reactContext, "null cannot be cast to non-null type com.facebook.react.uimanager.ThemedReactContext");
        NativeModule nativeModule = ((ThemedReactContext) reactContext).getReactApplicationContext().getNativeModule((Class<NativeModule>) RNGestureHandlerModule.class);
        Intrinsics.checkNotNull(nativeModule);
        l lVar = this.f13444d;
        Intrinsics.checkNotNull(lVar);
        kVar.e(lVar.f12874d);
        ((RNGestureHandlerModule) nativeModule).unregisterRootHelper(this);
    }
}
