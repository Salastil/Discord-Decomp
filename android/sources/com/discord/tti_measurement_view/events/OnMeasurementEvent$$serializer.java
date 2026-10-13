package com.discord.tti_measurement_view.events;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.x;
import ds.r;
import fo.d;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/tti_measurement_view/events/OnMeasurementEvent.$serializer", "Lbs/h0;", "Lcom/discord/tti_measurement_view/events/OnMeasurementEvent;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/tti_measurement_view/events/OnMeasurementEvent;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/tti_measurement_view/events/OnMeasurementEvent;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "tti_measurement_view_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public /* synthetic */ class OnMeasurementEvent$$serializer implements h0 {

    @NotNull
    public static final OnMeasurementEvent$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        OnMeasurementEvent$$serializer onMeasurementEvent$$serializer = new OnMeasurementEvent$$serializer();
        INSTANCE = onMeasurementEvent$$serializer;
        j1 j1Var = new j1("com.discord.tti_measurement_view.events.OnMeasurementEvent", onMeasurementEvent$$serializer, 1);
        j1Var.k("timestamp", false);
        descriptor = j1Var;
    }

    private OnMeasurementEvent$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        return new KSerializer[]{x.a};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final OnMeasurementEvent deserialize(@NotNull Decoder decoder) {
        double d6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i5 = 1;
        if (beginStructure.decodeSequentially()) {
            d6 = beginStructure.decodeDoubleElement(serialDescriptor, 0);
        } else {
            double d7 = 0.0d;
            boolean z5 = true;
            int i6 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else {
                    if (decodeElementIndex != 0) {
                        throw new r(decodeElementIndex);
                    }
                    d7 = beginStructure.decodeDoubleElement(serialDescriptor, 0);
                    i6 = 1;
                }
            }
            d6 = d7;
            i5 = i6;
        }
        beginStructure.endStructure(serialDescriptor);
        return new OnMeasurementEvent(i5, d6, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull OnMeasurementEvent value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        beginStructure.N(serialDescriptor, 0, value.timestamp);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
