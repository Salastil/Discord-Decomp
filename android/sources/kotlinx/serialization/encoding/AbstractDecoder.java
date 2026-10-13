package kotlinx.serialization.encoding;

import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.descriptors.SerialDescriptor;
import org.jetbrains.annotations.NotNull;
import xr.f;

/* loaded from: classes3.dex */
public abstract class AbstractDecoder implements Decoder, CompositeDecoder {
    public static /* synthetic */ Object decodeSerializableValue$default(AbstractDecoder abstractDecoder, DeserializationStrategy deserializationStrategy, Object obj, int i5, Object obj2) {
        if (obj2 != null) {
            throw new UnsupportedOperationException("Super calls with default arguments not supported in this target, function: decodeSerializableValue");
        }
        if ((i5 & 2) != 0) {
            obj = null;
        }
        return abstractDecoder.decodeSerializableValue(deserializationStrategy, obj);
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public CompositeDecoder beginStructure(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return this;
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public boolean decodeBoolean() {
        Object decodeValue = decodeValue();
        Intrinsics.checkNotNull(decodeValue, "null cannot be cast to non-null type kotlin.Boolean");
        return ((Boolean) decodeValue).booleanValue();
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public final boolean decodeBooleanElement(@NotNull SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return decodeBoolean();
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public byte decodeByte() {
        Object decodeValue = decodeValue();
        Intrinsics.checkNotNull(decodeValue, "null cannot be cast to non-null type kotlin.Byte");
        return ((Byte) decodeValue).byteValue();
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public final byte decodeByteElement(@NotNull SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return decodeByte();
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public char decodeChar() {
        Object decodeValue = decodeValue();
        Intrinsics.checkNotNull(decodeValue, "null cannot be cast to non-null type kotlin.Char");
        return ((Character) decodeValue).charValue();
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public final char decodeCharElement(@NotNull SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return decodeChar();
    }

    public int decodeCollectionSize(@NotNull SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return -1;
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public double decodeDouble() {
        Object decodeValue = decodeValue();
        Intrinsics.checkNotNull(decodeValue, "null cannot be cast to non-null type kotlin.Double");
        return ((Double) decodeValue).doubleValue();
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public final double decodeDoubleElement(@NotNull SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return decodeDouble();
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public int decodeEnum(@NotNull SerialDescriptor enumDescriptor) {
        Intrinsics.checkNotNullParameter(enumDescriptor, "enumDescriptor");
        Object decodeValue = decodeValue();
        Intrinsics.checkNotNull(decodeValue, "null cannot be cast to non-null type kotlin.Int");
        return ((Integer) decodeValue).intValue();
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public float decodeFloat() {
        Object decodeValue = decodeValue();
        Intrinsics.checkNotNull(decodeValue, "null cannot be cast to non-null type kotlin.Float");
        return ((Float) decodeValue).floatValue();
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public final float decodeFloatElement(@NotNull SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return decodeFloat();
    }

    @Override // kotlinx.serialization.encoding.Decoder
    @NotNull
    public Decoder decodeInline(@NotNull SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return this;
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    @NotNull
    public Decoder decodeInlineElement(@NotNull SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return decodeInline(descriptor.i(i5));
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public int decodeInt() {
        Object decodeValue = decodeValue();
        Intrinsics.checkNotNull(decodeValue, "null cannot be cast to non-null type kotlin.Int");
        return ((Integer) decodeValue).intValue();
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public final int decodeIntElement(@NotNull SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return decodeInt();
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public long decodeLong() {
        Object decodeValue = decodeValue();
        Intrinsics.checkNotNull(decodeValue, "null cannot be cast to non-null type kotlin.Long");
        return ((Long) decodeValue).longValue();
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public final long decodeLongElement(@NotNull SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return decodeLong();
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public boolean decodeNotNullMark() {
        return true;
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public Void decodeNull() {
        return null;
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public final <T> T decodeNullableSerializableElement(@NotNull SerialDescriptor descriptor, int i5, @NotNull DeserializationStrategy deserializer, T t5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        return (deserializer.getDescriptor().d() || decodeNotNullMark()) ? (T) decodeSerializableValue(deserializer, t5) : (T) decodeNull();
    }

    public <T> T decodeNullableSerializableValue(@NotNull DeserializationStrategy deserializer) {
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        return (deserializer.getDescriptor().d() || decodeNotNullMark()) ? (T) decodeSerializableValue(deserializer) : (T) decodeNull();
    }

    public boolean decodeSequentially() {
        return false;
    }

    public <T> T decodeSerializableElement(@NotNull SerialDescriptor descriptor, int i5, @NotNull DeserializationStrategy deserializer, T t5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        return (T) decodeSerializableValue(deserializer, t5);
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public <T> T decodeSerializableValue(@NotNull DeserializationStrategy deserializer) {
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        return (T) deserializer.deserialize(this);
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public short decodeShort() {
        Object decodeValue = decodeValue();
        Intrinsics.checkNotNull(decodeValue, "null cannot be cast to non-null type kotlin.Short");
        return ((Short) decodeValue).shortValue();
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public final short decodeShortElement(@NotNull SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return decodeShort();
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public String decodeString() {
        Object decodeValue = decodeValue();
        Intrinsics.checkNotNull(decodeValue, "null cannot be cast to non-null type kotlin.String");
        return (String) decodeValue;
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    @NotNull
    public final String decodeStringElement(@NotNull SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return decodeString();
    }

    @NotNull
    public Object decodeValue() {
        throw new f(Reflection.getOrCreateKotlinClass(getClass()) + " can't retrieve untyped values");
    }

    public void endStructure(@NotNull SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
    }

    public <T> T decodeSerializableValue(@NotNull DeserializationStrategy deserializer, T t5) {
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        return (T) decodeSerializableValue(deserializer);
    }
}
