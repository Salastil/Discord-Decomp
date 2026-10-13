package com.facebook.react.runtime;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final /* synthetic */ class k implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5025d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ReactHostImpl f5026e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f5027i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ ReactSurfaceImpl f5028v;

    public /* synthetic */ k(ReactHostImpl reactHostImpl, String str, ReactSurfaceImpl reactSurfaceImpl, int i5) {
        this.f5025d = i5;
        this.f5026e = reactHostImpl;
        this.f5027i = str;
        this.f5028v = reactSurfaceImpl;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit prerenderSurface$lambda$2;
        Unit stopSurface$lambda$4;
        Unit startSurface$lambda$3;
        switch (this.f5025d) {
            case 0:
                prerenderSurface$lambda$2 = ReactHostImpl.prerenderSurface$lambda$2(this.f5026e, this.f5027i, this.f5028v, (ReactInstance) obj);
                return prerenderSurface$lambda$2;
            case 1:
                stopSurface$lambda$4 = ReactHostImpl.stopSurface$lambda$4(this.f5026e, this.f5027i, this.f5028v, (ReactInstance) obj);
                return stopSurface$lambda$4;
            default:
                startSurface$lambda$3 = ReactHostImpl.startSurface$lambda$3(this.f5026e, this.f5027i, this.f5028v, (ReactInstance) obj);
                return startSurface$lambda$3;
        }
    }
}
