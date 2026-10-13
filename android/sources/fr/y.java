package fr;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class y extends n {

    /* renamed from: d, reason: collision with root package name */
    public static final y f9058d = new y("must have no value parameters", 0);

    /* renamed from: e, reason: collision with root package name */
    public static final y f9059e = new y("must have a single value parameter", 1);

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f9060c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ y(String str, int i5) {
        super(str, 1);
        this.f9060c = i5;
    }

    @Override // fr.e
    public final boolean a(tp.e functionDescriptor) {
        switch (this.f9060c) {
            case 0:
                Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
                return functionDescriptor.P().isEmpty();
            default:
                Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
                return functionDescriptor.P().size() == 1;
        }
    }
}
