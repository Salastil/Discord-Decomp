package com.discord.timers;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4383d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ TimersModule f4384e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ double f4385i;

    public /* synthetic */ a(TimersModule timersModule, double d6, int i5) {
        this.f4383d = i5;
        this.f4384e = timersModule;
        this.f4385i = d6;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit interval$lambda$1;
        Unit timeout$lambda$0;
        switch (this.f4383d) {
            case 0:
                interval$lambda$1 = TimersModule.setInterval$lambda$1(this.f4384e, this.f4385i);
                return interval$lambda$1;
            default:
                timeout$lambda$0 = TimersModule.setTimeout$lambda$0(this.f4384e, this.f4385i);
                return timeout$lambda$0;
        }
    }
}
