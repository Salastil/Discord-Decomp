package com.swmansion.rnscreens;

import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class c0 extends vo.c {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6731d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ScreenStackHeaderConfig f6732e;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public c0(ScreenStackHeaderConfig screenStackHeaderConfig, int i5) {
        super(r2);
        this.f6731d = i5;
        switch (i5) {
            case 1:
                Boolean bool = Boolean.TRUE;
                this.f6732e = screenStackHeaderConfig;
                super(bool);
                break;
            case 2:
                Boolean bool2 = Boolean.TRUE;
                this.f6732e = screenStackHeaderConfig;
                super(bool2);
                break;
            case 3:
                Boolean bool3 = Boolean.TRUE;
                this.f6732e = screenStackHeaderConfig;
                super(bool3);
                break;
            case 4:
                Boolean bool4 = Boolean.FALSE;
                this.f6732e = screenStackHeaderConfig;
                super(bool4);
                break;
            default:
                Boolean bool5 = Boolean.FALSE;
                this.f6732e = screenStackHeaderConfig;
                break;
        }
    }

    @Override // vo.c
    public final void afterChange(KProperty property, Object obj, Object obj2) {
        switch (this.f6731d) {
            case 0:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() != ((Boolean) obj2).booleanValue()) {
                    ScreenStackHeaderConfig screenStackHeaderConfig = this.f6732e;
                    if (screenStackHeaderConfig.f6712c0) {
                        screenStackHeaderConfig.getToolbar().requestApplyInsets();
                        break;
                    }
                }
                break;
            case 1:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() != ((Boolean) obj2).booleanValue()) {
                    ScreenStackHeaderConfig screenStackHeaderConfig2 = this.f6732e;
                    if (screenStackHeaderConfig2.f6712c0) {
                        screenStackHeaderConfig2.getToolbar().requestApplyInsets();
                        break;
                    }
                }
                break;
            case 2:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() != ((Boolean) obj2).booleanValue()) {
                    ScreenStackHeaderConfig screenStackHeaderConfig3 = this.f6732e;
                    if (screenStackHeaderConfig3.f6712c0) {
                        screenStackHeaderConfig3.getToolbar().requestApplyInsets();
                        break;
                    }
                }
                break;
            case 3:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() != ((Boolean) obj2).booleanValue()) {
                    ScreenStackHeaderConfig screenStackHeaderConfig4 = this.f6732e;
                    if (screenStackHeaderConfig4.f6712c0) {
                        screenStackHeaderConfig4.getToolbar().requestApplyInsets();
                        break;
                    }
                }
                break;
            default:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() != ((Boolean) obj2).booleanValue()) {
                    ScreenStackHeaderConfig screenStackHeaderConfig5 = this.f6732e;
                    if (screenStackHeaderConfig5.f6712c0) {
                        screenStackHeaderConfig5.getToolbar().requestApplyInsets();
                        break;
                    }
                }
                break;
        }
    }
}
