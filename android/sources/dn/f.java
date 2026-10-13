package dn;

import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;
import androidx.fragment.app.z0;
import com.facebook.react.uimanager.ThemedReactContext;
import com.google.firebase.messaging.s;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f extends FrameLayout implements sm.a, z0 {
    public final ArrayList E;

    /* renamed from: d, reason: collision with root package name */
    public final WeakReference f7620d;

    /* renamed from: e, reason: collision with root package name */
    public FragmentManager f7621e;

    /* renamed from: i, reason: collision with root package name */
    public final qd.f f7622i;

    /* renamed from: v, reason: collision with root package name */
    public final ArrayList f7623v;

    /* renamed from: w, reason: collision with root package name */
    public final ArrayList f7624w;

    /* renamed from: x, reason: collision with root package name */
    public final ArrayList f7625x;

    /* renamed from: y, reason: collision with root package name */
    public final l8.a f7626y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(ThemedReactContext context, WeakReference delegate) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.f7620d = delegate;
        this.f7622i = new qd.f(4);
        this.f7623v = new ArrayList();
        this.f7624w = new ArrayList();
        this.f7625x = new ArrayList();
        this.f7626y = new l8.a(5);
        this.E = new ArrayList();
        p9.d dVar = um.i.a;
        p9.d dVar2 = um.i.a;
        int i5 = dVar2.f16329e;
        int i6 = i5 + 2;
        dVar2.f16329e = i6;
        if (i6 % 10 == 1) {
            dVar2.f16329e = i5 + 4;
        }
        setId(i5);
    }

    private final boolean getHasPendingOperations() {
        return (this.f7625x.isEmpty() && this.f7624w.isEmpty()) ? false : true;
    }

    public final void a(Fragment fragment) {
        Intrinsics.checkNotNullParameter(fragment, "fragment");
        if (!(fragment instanceof en.i)) {
            Log.w("StackContainer", "[RNScreens] Unexpected type of fragment: ".concat(fragment.getClass().getSimpleName()));
            return;
        }
        en.i iVar = (en.i) fragment;
        if (iVar.isRemoving()) {
            if (((g) this.f7620d.get()) != null) {
                en.f stackScreen = iVar.f8180d;
                Intrinsics.checkNotNullParameter(stackScreen, "stackScreen");
                if (stackScreen.getActivityMode() == en.d.f8169e) {
                    stackScreen.setNativelyDismissed$react_native_screens_release(true);
                }
            }
            ArrayList arrayList = this.f7623v;
            if (arrayList.contains(fragment)) {
                if (!arrayList.remove(iVar)) {
                    throw new IllegalArgumentException("[RNScreens] onNativeFragmentPop must be called with the fragment present in stack model");
                }
                if (arrayList.isEmpty()) {
                    throw new IllegalStateException("[RNScreens] Stack model should not be empty after a native pop");
                }
                if (d().f1936z == iVar) {
                    throw new IllegalStateException("[RNScreens] Primary navigation fragment not updated by native pop");
                }
                e();
            }
        }
    }

    @Override // sm.a
    public final ViewGroup b() {
        en.f fVar;
        List f2 = d().f1915c.f();
        Intrinsics.checkNotNullExpressionValue(f2, "getFragments(...)");
        ArrayList arrayList = new ArrayList();
        for (Object obj : f2) {
            if (obj instanceof en.i) {
                arrayList.add(obj);
            }
        }
        en.i iVar = (en.i) CollectionsKt.S(arrayList);
        if (iVar == null || (fVar = iVar.f8180d) == null) {
            return null;
        }
        return fVar.f8174e.j(fVar);
    }

    public final void c() {
        ArrayList arrayList;
        Object obj;
        en.i iVar;
        if (getHasPendingOperations() && isAttachedToWindow()) {
            FragmentManager fragmentManager = d();
            ArrayList ops = this.E;
            ops.clear();
            if (getHasPendingOperations()) {
                ops.add(new c(new s(6, this)));
            }
            ArrayList arrayList2 = this.f7624w;
            Iterator it = arrayList2.iterator();
            do {
                boolean hasNext = it.hasNext();
                arrayList = this.f7623v;
                if (!hasNext) {
                    ArrayList arrayList3 = this.f7625x;
                    Iterator it2 = arrayList3.iterator();
                    while (it2.hasNext()) {
                        en.f fVar = ((e) it2.next()).j;
                        en.i iVar2 = new en.i(fVar, !arrayList.isEmpty());
                        Log.d("StackContainer", "Created Fragment " + iVar2 + " for screen " + fVar.getScreenKey());
                        ops.add(new a(iVar2, getId(), arrayList.isEmpty() ^ true));
                        arrayList.add(iVar2);
                    }
                    if (arrayList.isEmpty()) {
                        throw new IllegalStateException("[RNScreens] Stack should never be empty after updates");
                    }
                    arrayList2.clear();
                    arrayList3.clear();
                    l8.a aVar = this.f7626y;
                    aVar.getClass();
                    Intrinsics.checkNotNullParameter(fragmentManager, "fragmentManager");
                    Intrinsics.checkNotNullParameter(ops, "ops");
                    Iterator it3 = ops.iterator();
                    while (it3.hasNext()) {
                        ((b) it3.next()).a(fragmentManager, aVar);
                    }
                    Log.d("StackContainer", "StackContainer [" + getId() + "] MODEL BEGIN");
                    Iterator it4 = arrayList.iterator();
                    while (it4.hasNext()) {
                        Log.d("StackContainer", String.valueOf(((en.i) it4.next()).f8180d.getScreenKey()));
                    }
                    return;
                }
                d dVar = (d) it.next();
                Iterator it5 = arrayList.iterator();
                while (true) {
                    if (!it5.hasNext()) {
                        obj = null;
                        break;
                    } else {
                        obj = it5.next();
                        if (((en.i) obj).f8180d == dVar.j) {
                            break;
                        }
                    }
                }
                if (obj == null) {
                    throw new IllegalStateException("[RNScreens] Unable to find a fragment to pop");
                }
                iVar = (en.i) obj;
                if (arrayList.size() <= 1) {
                    throw new IllegalStateException("[RNScreens] Attempt to pop last screen from the stack");
                }
                ops.add(new c(iVar));
            } while (arrayList.remove(c0.f(arrayList)) == iVar);
            throw new IllegalStateException("[RNScreens] Attempt to pop non-top screen");
        }
    }

    public final FragmentManager d() {
        FragmentManager fragmentManager = this.f7621e;
        if (fragmentManager != null) {
            return fragmentManager;
        }
        throw new IllegalStateException("[RNScreens] Attempt to use nullish FragmentManager");
    }

    public final void e() {
        FragmentManager d6 = d();
        List f2 = d6.f1915c.f();
        Intrinsics.checkNotNullExpressionValue(f2, "getFragments(...)");
        ArrayList arrayList = new ArrayList();
        for (Object obj : f2) {
            if (obj instanceof en.i) {
                arrayList.add(obj);
            }
        }
        if (arrayList.isEmpty()) {
            throw new IllegalStateException("[RNScreens] Empty fragment manager while attempting to update top fragment");
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            en.i iVar = (en.i) it.next();
            if (iVar.f8183v) {
                iVar.f8183v = false;
                en.b bVar = iVar.f8182i;
                if (bVar == null) {
                    throw new IllegalStateException("[RNScreens] Attempt to require nullish OnBackPressedCallback");
                }
                bVar.f8167e = false;
                bVar.a();
            }
        }
        en.i iVar2 = (en.i) CollectionsKt.Q(arrayList);
        if (!iVar2.f8183v) {
            iVar2.f8183v = true;
            en.b bVar2 = iVar2.f8182i;
            if (bVar2 == null) {
                throw new IllegalStateException("[RNScreens] Attempt to require nullish OnBackPressedCallback");
            }
            bVar2.f8167e = true;
            bVar2.a();
        }
        if (d6.f1936z != CollectionsKt.Q(arrayList)) {
            throw new IllegalStateException("[RNScreens] Top fragment different from primary navigation fragment");
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        h hVar;
        String msg = "StackContainer [" + getId() + "] attached to window";
        Intrinsics.checkNotNullParameter("StackContainer", "tag");
        Intrinsics.checkNotNullParameter(msg, "msg");
        super.onAttachedToWindow();
        this.f7622i.b(this);
        FragmentManager a = um.a.a(this);
        if (a == null) {
            throw new IllegalStateException("[RNScreens] Nullish fragment manager - can't run container operations");
        }
        a.f1924n.add(this);
        this.f7621e = a;
        if (isAttachedToWindow()) {
            Intrinsics.checkNotNullParameter(this, "<this>");
            if ((getMeasuredWidth() != 0 || getMeasuredHeight() != 0 || isLaidOut()) && !isLaidOut() && !isInLayout() && (hVar = (h) getParent()) != null) {
                i iVar = (i) hVar;
                int measuredWidth = iVar.getMeasuredWidth();
                f fVar = iVar.f7629i;
                if (measuredWidth != fVar.getMeasuredWidth() || iVar.getMeasuredHeight() != fVar.getMeasuredHeight()) {
                    fVar.measure(View.MeasureSpec.makeMeasureSpec(iVar.getMeasuredWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(iVar.getMeasuredHeight(), 1073741824));
                }
                fVar.layout(iVar.getLeft(), iVar.getTop(), iVar.getRight(), iVar.getBottom());
            }
        }
        c();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        d().f1924n.remove(this);
        this.f7621e = null;
        qd.f fVar = this.f7622i;
        fVar.getClass();
        Intrinsics.checkNotNullParameter(this, "self");
        sm.b bVar = (sm.b) fVar.f16831e;
        Intrinsics.checkNotNullParameter(this, "childContainer");
        if (bVar != null) {
            bVar.a(this);
        }
        fVar.f16831e = null;
    }
}
