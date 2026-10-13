package com.facebook.react.uimanager;

import java.util.ArrayList;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.reflect.KType;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5049d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ArrayList f5050e;

    public /* synthetic */ b(int i5, ArrayList arrayList) {
        this.f5049d = i5;
        this.f5050e = arrayList;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit invalidate$lambda$9;
        Unit onTrimMemory$lambda$12;
        switch (this.f5049d) {
            case 0:
                invalidate$lambda$9 = ViewManagerRegistry.invalidate$lambda$9(this.f5050e);
                return invalidate$lambda$9;
            case 1:
                onTrimMemory$lambda$12 = ViewManagerRegistry.onTrimMemory$lambda$12(this.f5050e);
                return onTrimMemory$lambda$12;
            default:
                return ((KType) this.f5050e.get(0)).getClassifier();
        }
    }
}
