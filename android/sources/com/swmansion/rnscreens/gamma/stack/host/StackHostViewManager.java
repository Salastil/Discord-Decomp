package com.swmansion.rnscreens.gamma.stack.host;

import android.view.View;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.ViewManagerDelegate;
import com.facebook.react.viewmanagers.RNSStackHostManagerDelegate;
import com.facebook.react.viewmanagers.RNSStackHostManagerInterface;
import dn.e;
import dn.i;
import dn.j;
import en.d;
import en.f;
import io.sentry.internal.debugmeta.c;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.ListIterator;
import ki.b;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.i0;
import kotlin.collections.w0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@ReactModule(name = StackHostViewManager.REACT_CLASS)
@Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u000e\n\u0002\u0010\u000b\n\u0002\b\u0007\b\u0007\u0018\u0000 )2\b\u0012\u0004\u0012\u00020\u00020\u00012\b\u0012\u0004\u0012\u00020\u00020\u0003:\u0001*B\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u000f\u0010\u0007\u001a\u00020\u0006H\u0016¢\u0006\u0004\b\u0007\u0010\bJ\u0015\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00020\tH\u0014¢\u0006\u0004\b\n\u0010\u000bJ\u0017\u0010\u000e\u001a\u00020\u00022\u0006\u0010\r\u001a\u00020\fH\u0014¢\u0006\u0004\b\u000e\u0010\u000fJ'\u0010\u0016\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0012\u001a\u00020\u00112\u0006\u0010\u0014\u001a\u00020\u0013H\u0016¢\u0006\u0004\b\u0016\u0010\u0017J\u001f\u0010\u0019\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0018\u001a\u00020\u0011H\u0016¢\u0006\u0004\b\u0019\u0010\u001aJ\u001f\u0010\u001b\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0014\u001a\u00020\u0013H\u0016¢\u0006\u0004\b\u001b\u0010\u001cJ\u0017\u0010\u001d\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u0002H\u0016¢\u0006\u0004\b\u001d\u0010\u001eJ!\u0010\u001f\u001a\u0004\u0018\u00010\u00112\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0014\u001a\u00020\u0013H\u0016¢\u0006\u0004\b\u001f\u0010 J\u0017\u0010!\u001a\u00020\u00132\u0006\u0010\u0010\u001a\u00020\u0002H\u0016¢\u0006\u0004\b!\u0010\"J\u0017\u0010#\u001a\u00020\u00152\u0006\u0010\u0018\u001a\u00020\u0002H\u0016¢\u0006\u0004\b#\u0010\u001eJ\u000f\u0010%\u001a\u00020$H\u0016¢\u0006\u0004\b%\u0010&R\u001a\u0010'\u001a\b\u0012\u0004\u0012\u00020\u00020\t8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b'\u0010(¨\u0006+"}, d2 = {"Lcom/swmansion/rnscreens/gamma/stack/host/StackHostViewManager;", "Lcom/facebook/react/uimanager/ViewGroupManager;", "Ldn/i;", "Lcom/facebook/react/viewmanagers/RNSStackHostManagerInterface;", "<init>", "()V", "", "getName", "()Ljava/lang/String;", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "getDelegate", "()Lcom/facebook/react/uimanager/ViewManagerDelegate;", "Lcom/facebook/react/uimanager/ThemedReactContext;", "reactContext", "createViewInstance", "(Lcom/facebook/react/uimanager/ThemedReactContext;)Ldn/i;", "parent", "Landroid/view/View;", "child", "", "index", "", "addView", "(Ldn/i;Landroid/view/View;I)V", "view", "removeView", "(Ldn/i;Landroid/view/View;)V", "removeViewAt", "(Ldn/i;I)V", "removeAllViews", "(Ldn/i;)V", "getChildAt", "(Ldn/i;I)Landroid/view/View;", "getChildCount", "(Ldn/i;)I", "onDropViewInstance", "", "needsCustomLayoutForChildren", "()Z", "delegate", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "Companion", "dn/j", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nStackHostViewManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 StackHostViewManager.kt\ncom/swmansion/rnscreens/gamma/stack/host/StackHostViewManager\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,77:1\n1#2:78\n*E\n"})
/* loaded from: classes3.dex */
public final class StackHostViewManager extends ViewGroupManager<i> implements RNSStackHostManagerInterface<i> {

    @NotNull
    public static final j Companion = new j();

    @NotNull
    public static final String REACT_CLASS = "RNSStackHost";

    @NotNull
    private final ViewManagerDelegate<i> delegate;

    public StackHostViewManager() {
        super(null, 1, null);
        this.delegate = new RNSStackHostManagerDelegate(this);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public ViewManagerDelegate<i> getDelegate() {
        return this.delegate;
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return REACT_CLASS;
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager, com.facebook.react.uimanager.IViewManagerWithChildren
    public boolean needsCustomLayoutForChildren() {
        return true;
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public i createViewInstance(@NotNull ThemedReactContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        return new i(reactContext);
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onDropViewInstance(@NotNull i view) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.getClass();
        b.w(UIManagerHelper.INSTANCE, view.f7627d).removeUIManagerEventListener(view);
        super.onDropViewInstance((StackHostViewManager) view);
    }

    @Override // com.facebook.react.uimanager.IViewGroupManager
    public void removeAllViews(@NotNull i parent) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        ArrayList arrayList = parent.f7628e;
        Iterator it = i0.y(arrayList).iterator();
        while (true) {
            ListIterator listIterator = ((w0) it).f13525d;
            if (!listIterator.hasPrevious()) {
                arrayList.clear();
                return;
            }
            parent.a((f) listIterator.previous());
        }
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void removeView(@NotNull i parent, @NotNull View view) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        Intrinsics.checkNotNullParameter(view, "view");
        if (!(view instanceof f)) {
            throw new IllegalArgumentException("[RNScreens] Attempt to attach child that is not of type javaClass");
        }
        f reactSubview = (f) view;
        parent.getClass();
        Intrinsics.checkNotNullParameter(reactSubview, "reactSubview");
        parent.f7628e.remove(reactSubview);
        parent.a(reactSubview);
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void addView(@NotNull i parent, @NotNull View child, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        Intrinsics.checkNotNullParameter(child, "child");
        if (child instanceof f) {
            f stackScreen = (f) child;
            parent.getClass();
            Intrinsics.checkNotNullParameter(stackScreen, "stackScreen");
            parent.f7628e.add(index, stackScreen);
            stackScreen.setStackHost$react_native_screens_release(new WeakReference<>(parent));
            if (stackScreen.getActivityMode() == d.f8169e) {
                c cVar = parent.f7630v;
                cVar.getClass();
                Intrinsics.checkNotNullParameter(stackScreen, "stackScreen");
                ((ArrayList) cVar.f11622e).add(new e(stackScreen));
                return;
            }
            return;
        }
        throw new IllegalArgumentException("[RNScreens] Attempt to attach child that is not of type javaClass");
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public View getChildAt(@NotNull i parent, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        return (View) CollectionsKt.M(index, parent.getRenderedScreens$react_native_screens_release());
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public int getChildCount(@NotNull i parent) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        return parent.getRenderedScreens$react_native_screens_release().size();
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager
    public void removeViewAt(@NotNull i parent, int index) {
        Intrinsics.checkNotNullParameter(parent, "parent");
        Object remove = parent.f7628e.remove(index);
        Intrinsics.checkNotNullExpressionValue(remove, "removeAt(...)");
        parent.a((f) remove);
    }
}
