package xr;

import bs.v1;
import java.util.List;
import java.util.Map;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.SealedClassSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;

/* loaded from: classes3.dex */
public final /* synthetic */ class d implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f20557d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ SealedClassSerializer f20558e;

    public /* synthetic */ d(SealedClassSerializer sealedClassSerializer, int i5) {
        this.f20557d = i5;
        this.f20558e = sealedClassSerializer;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        zr.a buildSerialDescriptor = (zr.a) obj;
        switch (this.f20557d) {
            case 0:
                Intrinsics.checkNotNullParameter(buildSerialDescriptor, "$this$buildSerialDescriptor");
                nf.e.A(StringCompanionObject.INSTANCE);
                zr.a.a(buildSerialDescriptor, "type", v1.f3245b);
                StringBuilder sb2 = new StringBuilder("kotlinx.serialization.Sealed<");
                SealedClassSerializer sealedClassSerializer = this.f20558e;
                sb2.append(sealedClassSerializer.a.getSimpleName());
                sb2.append('>');
                d dVar = new d(sealedClassSerializer, 1);
                zr.a.a(buildSerialDescriptor, "value", com.facebook.imagepipeline.nativecode.c.g(sb2.toString(), zr.h.f21431t, new SerialDescriptor[0], dVar));
                List list = sealedClassSerializer.f13602b;
                Intrinsics.checkNotNullParameter(list, "<set-?>");
                buildSerialDescriptor.f21405b = list;
                break;
            default:
                Intrinsics.checkNotNullParameter(buildSerialDescriptor, "$this$buildSerialDescriptor");
                for (Map.Entry entry : this.f20558e.f13605e.entrySet()) {
                    zr.a.a(buildSerialDescriptor, (String) entry.getKey(), ((KSerializer) entry.getValue()).getDescriptor());
                }
                break;
        }
        return Unit.a;
    }
}
