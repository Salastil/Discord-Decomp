package aq;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes3.dex */
public final class s {
    public static final s k = new s(false, false, false, false, false, new s(false, false, false, false, false, null, false, null, null, 1023), false, null, null, 988);
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f2652b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f2653c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f2654d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f2655e;

    /* renamed from: f, reason: collision with root package name */
    public final s f2656f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f2657g;

    /* renamed from: h, reason: collision with root package name */
    public final s f2658h;

    /* renamed from: i, reason: collision with root package name */
    public final s f2659i;
    public final boolean j;

    public s(boolean z5, boolean z6, boolean z7, boolean z8, boolean z10, s sVar, boolean z11, s sVar2, s sVar3, int i5) {
        z5 = (i5 & 1) != 0 ? true : z5;
        z6 = (i5 & 2) != 0 ? true : z6;
        z7 = (i5 & 4) != 0 ? false : z7;
        z8 = (i5 & 8) != 0 ? false : z8;
        z10 = (i5 & 16) != 0 ? false : z10;
        sVar = (i5 & 32) != 0 ? null : sVar;
        z11 = (i5 & 64) != 0 ? true : z11;
        sVar2 = (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? sVar : sVar2;
        sVar3 = (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? sVar : sVar3;
        boolean z12 = (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0;
        this.a = z5;
        this.f2652b = z6;
        this.f2653c = z7;
        this.f2654d = z8;
        this.f2655e = z10;
        this.f2656f = sVar;
        this.f2657g = z11;
        this.f2658h = sVar2;
        this.f2659i = sVar3;
        this.j = z12;
    }
}
