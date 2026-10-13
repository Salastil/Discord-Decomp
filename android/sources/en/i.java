package en;

import android.content.Context;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import androidx.activity.OnBackPressedDispatcher;
import androidx.fragment.app.Fragment;
import androidx.lifecycle.LifecycleOwner;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i extends Fragment {

    /* renamed from: d, reason: collision with root package name */
    public final f f8180d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f8181e;

    /* renamed from: i, reason: collision with root package name */
    public b f8182i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f8183v;

    public i(f stackScreen, boolean z5) {
        Intrinsics.checkNotNullParameter(stackScreen, "stackScreen");
        this.f8180d = stackScreen;
        this.f8181e = z5;
    }

    @Override // androidx.fragment.app.Fragment
    public final void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.f8182i = new b(this, this.f8180d);
        OnBackPressedDispatcher onBackPressedDispatcher = requireActivity().getOnBackPressedDispatcher();
        b onBackPressedCallback = this.f8182i;
        if (onBackPressedCallback == null) {
            throw new IllegalStateException("[RNScreens] Attempt to require nullish OnBackPressedCallback");
        }
        onBackPressedDispatcher.getClass();
        Intrinsics.checkNotNullParameter(onBackPressedCallback, "onBackPressedCallback");
        onBackPressedDispatcher.b(onBackPressedCallback);
        setAllowEnterTransitionOverlap(true);
        setAllowReturnTransitionOverlap(true);
        setEnterTransition(new androidx.transition.b(5));
        setExitTransition(new androidx.transition.b(3));
        setReturnTransition(new androidx.transition.b(5));
        setReenterTransition(new androidx.transition.b(3));
    }

    @Override // androidx.fragment.app.Fragment
    public final View onCreateView(LayoutInflater inflater, ViewGroup viewGroup, Bundle bundle) {
        Intrinsics.checkNotNullParameter(inflater, "inflater");
        Context requireContext = requireContext();
        Intrinsics.checkNotNullExpressionValue(requireContext, "requireContext(...)");
        return new ym.h(requireContext, this.f8180d, this.f8181e);
    }

    @Override // androidx.fragment.app.Fragment
    public final void onDestroy() {
        super.onDestroy();
        f fVar = this.f8180d;
        if (fVar.getActivityMode() == d.f8169e) {
            fVar.setNativelyDismissed$react_native_screens_release(true);
        }
        h eventEmitter$react_native_screens_release = fVar.getEventEmitter$react_native_screens_release();
        ((EventDispatcher) eventEmitter$react_native_screens_release.f13124c).dispatchEvent(new fn.b(UIManagerHelper.getSurfaceId((ReactContext) eventEmitter$react_native_screens_release.f13123b), eventEmitter$react_native_screens_release.a, fVar.f8176v));
        b bVar = this.f8182i;
        if (bVar == null) {
            throw new IllegalStateException("[RNScreens] Attempt to require nullish OnBackPressedCallback");
        }
        bVar.remove();
        this.f8182i = null;
    }

    @Override // androidx.fragment.app.Fragment
    public final void onDestroyView() {
        View view = getView();
        if (!(view instanceof ym.h)) {
            throw new IllegalStateException(("[RNScreens] Unexpected fragment view type: " + getView()).toString());
        }
        ym.h hVar = (ym.h) view;
        hVar.y();
        hVar.x();
        hVar.requestLayout();
        FrameLayout frameLayout = hVar.f20976j0;
        f fVar = hVar.U;
        frameLayout.removeView(fVar);
        zm.g gVar = hVar.W;
        if (gVar != null) {
            ((zm.c) gVar).setConfigurationObserver(null);
        }
        hVar.W = null;
        hVar.a0 = null;
        fVar.G = null;
        super.onDestroyView();
    }

    @Override // androidx.fragment.app.Fragment
    public final void onViewCreated(View view, Bundle bundle) {
        Intrinsics.checkNotNullParameter(view, "view");
        super.onViewCreated(view, bundle);
        LifecycleOwner viewLifecycleOwner = getViewLifecycleOwner();
        Intrinsics.checkNotNullExpressionValue(viewLifecycleOwner, "getViewLifecycleOwner(...)");
        f fVar = this.f8180d;
        fVar.getClass();
        Intrinsics.checkNotNullParameter(viewLifecycleOwner, "viewLifecycleOwner");
        new d3.b(viewLifecycleOwner.getLifecycle(), fVar.getEventEmitter$react_native_screens_release());
    }
}
