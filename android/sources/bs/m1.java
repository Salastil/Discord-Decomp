package bs;

import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public abstract class m1 extends u {

    /* renamed from: b, reason: collision with root package name */
    public final l1 f3216b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public m1(KSerializer primitiveSerializer) {
        super(primitiveSerializer);
        Intrinsics.checkNotNullParameter(primitiveSerializer, "primitiveSerializer");
        this.f3216b = new l1(primitiveSerializer.getDescriptor());
    }

    @Override // bs.a
    public final Object a() {
        return (k1) i(l());
    }

    @Override // bs.a
    public final int b(Object obj) {
        k1 k1Var = (k1) obj;
        Intrinsics.checkNotNullParameter(k1Var, "<this>");
        return k1Var.d();
    }

    @Override // bs.a
    public final void c(int i5, Object obj) {
        k1 k1Var = (k1) obj;
        Intrinsics.checkNotNullParameter(k1Var, "<this>");
        k1Var.b(i5);
    }

    @Override // bs.a
    public final Iterator d(Object obj) {
        throw new IllegalStateException("This method lead to boxing and must not be used, use writeContents instead");
    }

    @Override // bs.a, kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return f(decoder);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return this.f3216b;
    }

    @Override // bs.a
    public final Object j(Object obj) {
        k1 k1Var = (k1) obj;
        Intrinsics.checkNotNullParameter(k1Var, "<this>");
        return k1Var.a();
    }

    @Override // bs.u
    public final void k(int i5, Object obj, Object obj2) {
        Intrinsics.checkNotNullParameter((k1) obj, "<this>");
        throw new IllegalStateException("This method lead to boxing and must not be used, use Builder.append instead");
    }

    public abstract Object l();

    public abstract void m(CompositeEncoder compositeEncoder, Object obj, int i5);

    @Override // bs.u, kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        int e9 = e(obj);
        l1 l1Var = this.f3216b;
        CompositeEncoder E = encoder.E(l1Var, e9);
        m(E, obj, e9);
        E.endStructure(l1Var);
    }
}
