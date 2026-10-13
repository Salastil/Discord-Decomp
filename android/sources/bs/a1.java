package bs;

import java.io.Serializable;
import java.util.ArrayList;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.Decoder;

/* loaded from: classes3.dex */
public abstract class a1 implements Decoder, CompositeDecoder {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f3159b;

    /* renamed from: c, reason: collision with root package name */
    public final Serializable f3160c;

    public a1(String name, boolean z5) {
        this.a = 1;
        Intrinsics.checkNotNullParameter(name, "name");
        this.f3160c = name;
        this.f3159b = z5;
    }

    public Integer c(a1 second) {
        Intrinsics.checkNotNullParameter(second, "visibility");
        go.i iVar = ip.f1.a;
        Intrinsics.checkNotNullParameter(this, "first");
        Intrinsics.checkNotNullParameter(second, "second");
        if (this == second) {
            return 0;
        }
        go.i iVar2 = ip.f1.a;
        Integer num = (Integer) iVar2.get(this);
        Integer num2 = (Integer) iVar2.get(second);
        if (num == null || num2 == null || Intrinsics.areEqual(num, num2)) {
            return null;
        }
        return Integer.valueOf(num.intValue() - num2.intValue());
    }

    public String d(String parentName, String childName) {
        Intrinsics.checkNotNullParameter(parentName, "parentName");
        Intrinsics.checkNotNullParameter(childName, "childName");
        if (parentName.length() == 0) {
            return childName;
        }
        return parentName + '.' + childName;
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public boolean decodeBoolean() {
        return e(v());
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public boolean decodeBooleanElement(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return e(t(descriptor, i5));
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public byte decodeByte() {
        return f(v());
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public byte decodeByteElement(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return f(t(descriptor, i5));
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public char decodeChar() {
        return g(v());
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public char decodeCharElement(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return g(t(descriptor, i5));
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public int decodeCollectionSize(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return -1;
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public double decodeDouble() {
        return h(v());
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public double decodeDoubleElement(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return h(t(descriptor, i5));
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public int decodeEnum(SerialDescriptor enumDescriptor) {
        Intrinsics.checkNotNullParameter(enumDescriptor, "enumDescriptor");
        return i(v(), enumDescriptor);
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public float decodeFloat() {
        return j(v());
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public float decodeFloatElement(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return j(t(descriptor, i5));
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public Decoder decodeInline(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return k(v(), descriptor);
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public Decoder decodeInlineElement(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return k(t(descriptor, i5), ((q0) descriptor).i(i5));
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public int decodeInt() {
        return l(v());
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public int decodeIntElement(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return l(t(descriptor, i5));
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public long decodeLong() {
        return m(v());
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public long decodeLongElement(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return m(t(descriptor, i5));
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public boolean decodeNotNullMark() {
        Object S = CollectionsKt.S((ArrayList) this.f3160c);
        if (S == null) {
            return false;
        }
        return n(S);
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public Void decodeNull() {
        return null;
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public Object decodeNullableSerializableElement(SerialDescriptor descriptor, int i5, DeserializationStrategy deserializer, Object obj) {
        Object decodeSerializableValue;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        ((ArrayList) this.f3160c).add(t(descriptor, i5));
        if (deserializer.getDescriptor().d() || decodeNotNullMark()) {
            Intrinsics.checkNotNullParameter(deserializer, "deserializer");
            decodeSerializableValue = decodeSerializableValue(deserializer);
        } else {
            decodeSerializableValue = null;
        }
        if (!this.f3159b) {
            v();
        }
        this.f3159b = false;
        return decodeSerializableValue;
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public boolean decodeSequentially() {
        return false;
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public Object decodeSerializableElement(SerialDescriptor descriptor, int i5, DeserializationStrategy deserializer, Object obj) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        ((ArrayList) this.f3160c).add(t(descriptor, i5));
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        Object decodeSerializableValue = decodeSerializableValue(deserializer);
        if (!this.f3159b) {
            v();
        }
        this.f3159b = false;
        return decodeSerializableValue;
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public abstract Object decodeSerializableValue(DeserializationStrategy deserializationStrategy);

    @Override // kotlinx.serialization.encoding.Decoder
    public short decodeShort() {
        return o(v());
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public short decodeShortElement(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return o(t(descriptor, i5));
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public String decodeString() {
        return p(v());
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public String decodeStringElement(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return p(t(descriptor, i5));
    }

    public abstract boolean e(Object obj);

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public void endStructure(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
    }

    public abstract byte f(Object obj);

    public abstract char g(Object obj);

    public abstract double h(Object obj);

    public abstract int i(Object obj, SerialDescriptor serialDescriptor);

    public abstract float j(Object obj);

    public Decoder k(Object obj, SerialDescriptor inlineDescriptor) {
        Intrinsics.checkNotNullParameter(inlineDescriptor, "inlineDescriptor");
        ((ArrayList) this.f3160c).add(obj);
        return this;
    }

    public abstract int l(Object obj);

    public abstract long m(Object obj);

    public boolean n(Object obj) {
        return true;
    }

    public abstract short o(Object obj);

    public String p(Object obj) {
        Object q5 = q(obj);
        Intrinsics.checkNotNull(q5, "null cannot be cast to non-null type kotlin.String");
        return (String) q5;
    }

    public Object q(Object obj) {
        throw new xr.f(Reflection.getOrCreateKotlinClass(getClass()) + " can't retrieve untyped values");
    }

    public String r(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return descriptor.g(i5);
    }

    public String s() {
        return (String) this.f3160c;
    }

    public String t(SerialDescriptor serialDescriptor, int i5) {
        Intrinsics.checkNotNullParameter(serialDescriptor, "<this>");
        String nestedName = r(serialDescriptor, i5);
        Intrinsics.checkNotNullParameter(nestedName, "nestedName");
        String str = (String) CollectionsKt.S((ArrayList) this.f3160c);
        if (str == null) {
            str = "";
        }
        return d(str, nestedName);
    }

    public String toString() {
        switch (this.a) {
            case 1:
                return s();
            default:
                return super.toString();
        }
    }

    public Object v() {
        ArrayList arrayList = (ArrayList) this.f3160c;
        Object remove = arrayList.remove(kotlin.collections.c0.f(arrayList));
        this.f3159b = true;
        return remove;
    }

    public String w() {
        ArrayList arrayList = (ArrayList) this.f3160c;
        return arrayList.isEmpty() ? "$" : CollectionsKt.O(arrayList, ".", "$.", null, null, 60);
    }

    public a1() {
        this.a = 0;
        this.f3160c = new ArrayList();
    }

    public a1 u() {
        return this;
    }
}
