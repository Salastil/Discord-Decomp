package dn;

import android.util.Log;
import android.view.ViewGroup;
import bg.s;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.bridge.UIManagerListener;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.ListIterator;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.i0;
import kotlin.collections.y0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class i extends ViewGroup implements UIManagerListener, g, h {

    /* renamed from: d, reason: collision with root package name */
    public final ThemedReactContext f7627d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f7628e;

    /* renamed from: i, reason: collision with root package name */
    public final f f7629i;

    /* renamed from: v, reason: collision with root package name */
    public final io.sentry.internal.debugmeta.c f7630v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f7631w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i(ThemedReactContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.f7627d = reactContext;
        this.f7628e = new ArrayList();
        f fVar = new f(reactContext, new WeakReference(this));
        this.f7629i = fVar;
        this.f7630v = new io.sentry.internal.debugmeta.c(8);
        addView(fVar);
        ki.b.w(UIManagerHelper.INSTANCE, reactContext).addUIManagerEventListener(this);
    }

    public final void a(en.f stackScreen) {
        if (stackScreen.getActivityMode() == en.d.f8169e && !stackScreen.f8176v) {
            io.sentry.internal.debugmeta.c cVar = this.f7630v;
            cVar.getClass();
            Intrinsics.checkNotNullParameter(stackScreen, "stackScreen");
            ((ArrayList) cVar.f11623i).add(new d(stackScreen));
            return;
        }
        Log.d("StackHost", "Ignoring pop operation of " + stackScreen.getScreenKey() + ", already not attached or natively dismissed");
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void didDispatchMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void didMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
        io.sentry.internal.debugmeta.c cVar = this.f7630v;
        ArrayList arrayList = (ArrayList) cVar.f11623i;
        f container = this.f7629i;
        Intrinsics.checkNotNullParameter(container, "container");
        ArrayList renderedScreens = this.f7628e;
        Intrinsics.checkNotNullParameter(renderedScreens, "renderedScreens");
        ArrayList arrayList2 = (ArrayList) cVar.f11622e;
        if (arrayList2.isEmpty() && arrayList.isEmpty()) {
            return;
        }
        ArrayList arrayList3 = new ArrayList(d0.l(arrayList, 10));
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            d dVar = (d) it.next();
            arrayList3.add(new Pair(Integer.valueOf(renderedScreens.indexOf(dVar.j)), dVar));
        }
        Iterator it2 = i0.x(CollectionsKt.e0(arrayList3, new s(3))).iterator();
        while (true) {
            ListIterator listIterator = ((y0) it2).f13528d;
            if (!listIterator.hasPrevious()) {
                break;
            }
            en.f stackScreen = ((d) ((Pair) listIterator.previous()).f13475e).j;
            container.getClass();
            Intrinsics.checkNotNullParameter(stackScreen, "stackScreen");
            container.f7624w.add(new d(stackScreen));
        }
        ArrayList arrayList4 = new ArrayList(d0.l(arrayList2, 10));
        Iterator it3 = arrayList2.iterator();
        while (it3.hasNext()) {
            e eVar = (e) it3.next();
            arrayList4.add(new Pair(Integer.valueOf(renderedScreens.indexOf(eVar.j)), eVar));
        }
        Iterator it4 = CollectionsKt.e0(arrayList4, new s(4)).iterator();
        while (it4.hasNext()) {
            en.f stackScreen2 = ((e) ((Pair) it4.next()).f13475e).j;
            container.getClass();
            Intrinsics.checkNotNullParameter(stackScreen2, "stackScreen");
            container.f7625x.add(new e(stackScreen2));
        }
        container.c();
        arrayList.clear();
        arrayList2.clear();
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void didScheduleMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }

    @NotNull
    public final ArrayList<en.f> getRenderedScreens$react_native_screens_release() {
        return this.f7628e;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        String msg = "StackHost [" + getId() + "] attached to window";
        Intrinsics.checkNotNullParameter("StackHost", "tag");
        Intrinsics.checkNotNullParameter(msg, "msg");
        super.onAttachedToWindow();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        this.f7629i.layout(i5, i6, i10, i11);
    }

    @Override // android.view.View
    public final void onMeasure(int i5, int i6) {
        super.onMeasure(i5, i6);
        this.f7629i.measure(i5, i6);
    }

    @Override // android.view.View, android.view.ViewParent
    public final void requestLayout() {
        super.requestLayout();
        if (this.f7631w) {
            return;
        }
        this.f7631w = true;
        post(new com.google.firebase.messaging.s(7, this));
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void willDispatchViewUpdates(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }

    @Override // com.facebook.react.bridge.UIManagerListener
    public final void willMountItems(UIManager uiManager) {
        Intrinsics.checkNotNullParameter(uiManager, "uiManager");
    }
}
