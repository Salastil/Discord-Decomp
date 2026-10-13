package com.facebook.react.views.view;

import android.view.accessibility.AccessibilityManager;
import com.discord.device.DeviceAccessibilityModule;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements AccessibilityManager.AccessibilityStateChangeListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5071d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f5072e;

    public /* synthetic */ a(int i5, Object obj) {
        this.f5071d = i5;
        this.f5072e = obj;
    }

    @Override // android.view.accessibility.AccessibilityManager.AccessibilityStateChangeListener
    public final void onAccessibilityStateChanged(boolean z5) {
        switch (this.f5071d) {
            case 0:
                ReactViewGroup.addChildrenForAccessibility$lambda$3((ReactViewGroup) this.f5072e, z5);
                break;
            default:
                ((DeviceAccessibilityModule) this.f5072e).emitOnAccessibilityServiceEnabledChanged(z5);
                break;
        }
    }
}
