package fr;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m extends n {

    /* renamed from: d, reason: collision with root package name */
    public static final m f9026d = new m("must be a member function", 0);

    /* renamed from: e, reason: collision with root package name */
    public static final m f9027e = new m("must be a member or an extension function", 1);

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f9028c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ m(String str, int i5) {
        super(str, 0);
        this.f9028c = i5;
    }

    @Override // fr.e
    public final boolean a(tp.e functionDescriptor) {
        switch (this.f9028c) {
            case 0:
                Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
                return functionDescriptor.H != null;
            default:
                Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
                return (functionDescriptor.H == null && functionDescriptor.G == null) ? false : true;
        }
    }
}
