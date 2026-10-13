package com.discord.bundle_updater;

import android.view.ViewGroup;
import java.util.List;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3815d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ BundleUpdaterManager f3816e;

    public /* synthetic */ c(BundleUpdaterManager bundleUpdaterManager, int i5) {
        this.f3815d = i5;
        this.f3816e = bundleUpdaterManager;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit removeSpinnerView$lambda$7;
        Unit addListener$lambda$1;
        Unit addListener$lambda$2;
        Unit showSpinnerView$lambda$5;
        switch (this.f3815d) {
            case 0:
                removeSpinnerView$lambda$7 = BundleUpdaterManager.removeSpinnerView$lambda$7(this.f3816e, (ViewGroup) obj);
                return removeSpinnerView$lambda$7;
            case 1:
                addListener$lambda$1 = BundleUpdaterManager.addListener$lambda$1(this.f3816e, ((Boolean) obj).booleanValue());
                return addListener$lambda$1;
            case 2:
                addListener$lambda$2 = BundleUpdaterManager.addListener$lambda$2(this.f3816e, (List) obj);
                return addListener$lambda$2;
            default:
                showSpinnerView$lambda$5 = BundleUpdaterManager.showSpinnerView$lambda$5(this.f3816e, (ViewGroup) obj);
                return showSpinnerView$lambda$5;
        }
    }
}
