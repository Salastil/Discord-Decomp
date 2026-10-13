package kn;

import android.content.res.Configuration;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import androidx.fragment.app.Fragment;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e extends Fragment {

    /* renamed from: d, reason: collision with root package name */
    public final b f13463d;

    public e(b tabsScreen) {
        Intrinsics.checkNotNullParameter(tabsScreen, "tabsScreen");
        this.f13463d = tabsScreen;
    }

    @Override // androidx.fragment.app.Fragment, android.content.ComponentCallbacks
    public final void onConfigurationChanged(Configuration config) {
        Intrinsics.checkNotNullParameter(config, "newConfig");
        super.onConfigurationChanged(config);
        b tabsScreen = this.f13463d;
        tabsScreen.getClass();
        Intrinsics.checkNotNullParameter(this, "fragment");
        Intrinsics.checkNotNullParameter(config, "config");
        c cVar = (c) tabsScreen.f13457e.get();
        if (cVar != null) {
            Intrinsics.checkNotNullParameter(tabsScreen, "tabsScreen");
            Intrinsics.checkNotNullParameter(config, "config");
            ((hn.f) cVar).onConfigurationChanged(config);
        }
    }

    @Override // androidx.fragment.app.Fragment
    public final View onCreateView(LayoutInflater inflater, ViewGroup viewGroup, Bundle bundle) {
        Intrinsics.checkNotNullParameter(inflater, "inflater");
        return this.f13463d;
    }

    @Override // androidx.fragment.app.Fragment
    public final void onPause() {
        d eventEmitter$react_native_screens_release = this.f13463d.getEventEmitter$react_native_screens_release();
        int i5 = eventEmitter$react_native_screens_release.a;
        zk.a.c(i5, "onWillDisappear");
        ((EventDispatcher) eventEmitter$react_native_screens_release.f13124c).dispatchEvent(new ln.a(UIManagerHelper.getSurfaceId((ReactContext) eventEmitter$react_native_screens_release.f13123b), i5, 3));
        super.onPause();
    }

    @Override // androidx.fragment.app.Fragment
    public final void onResume() {
        d eventEmitter$react_native_screens_release = this.f13463d.getEventEmitter$react_native_screens_release();
        int i5 = eventEmitter$react_native_screens_release.a;
        zk.a.c(i5, "onDidAppear");
        ((EventDispatcher) eventEmitter$react_native_screens_release.f13124c).dispatchEvent(new ln.a(UIManagerHelper.getSurfaceId((ReactContext) eventEmitter$react_native_screens_release.f13123b), i5, 0));
        super.onResume();
    }

    @Override // androidx.fragment.app.Fragment
    public final void onStart() {
        d eventEmitter$react_native_screens_release = this.f13463d.getEventEmitter$react_native_screens_release();
        int i5 = eventEmitter$react_native_screens_release.a;
        zk.a.c(i5, "onWillAppear");
        ((EventDispatcher) eventEmitter$react_native_screens_release.f13124c).dispatchEvent(new ln.a(UIManagerHelper.getSurfaceId((ReactContext) eventEmitter$react_native_screens_release.f13123b), i5, 2));
        super.onStart();
    }

    @Override // androidx.fragment.app.Fragment
    public final void onStop() {
        d eventEmitter$react_native_screens_release = this.f13463d.getEventEmitter$react_native_screens_release();
        int i5 = eventEmitter$react_native_screens_release.a;
        zk.a.c(i5, "onDidDisappear");
        ((EventDispatcher) eventEmitter$react_native_screens_release.f13124c).dispatchEvent(new ln.a(UIManagerHelper.getSurfaceId((ReactContext) eventEmitter$react_native_screens_release.f13123b), i5, 1));
        super.onStop();
    }
}
