package fr;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class x extends n {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f9056c = 1;

    /* renamed from: d, reason: collision with root package name */
    public final int f9057d;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public x(int i5) {
        super(r0.toString(), 1);
        StringBuilder r5 = a3.e.r(i5, "must have at least ", " value parameter");
        r5.append(i5 > 1 ? "s" : "");
        this.f9057d = i5;
    }

    @Override // fr.e
    public final boolean a(tp.e functionDescriptor) {
        switch (this.f9056c) {
            case 0:
                Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
                if (functionDescriptor.P().size() >= this.f9057d) {
                }
                break;
            default:
                Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
                if (functionDescriptor.P().size() == this.f9057d) {
                }
                break;
        }
        return false;
    }

    public x() {
        super("must have exactly 2 value parameters", 1);
        this.f9057d = 2;
    }
}
