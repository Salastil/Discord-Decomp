package com.discord.chat.reactevents;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
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
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/reactevents/FirstLayoutData.$serializer", "Lbs/h0;", "Lcom/discord/chat/reactevents/FirstLayoutData;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/reactevents/FirstLayoutData;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/reactevents/FirstLayoutData;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class FirstLayoutData$$serializer implements h0 {

    @NotNull
    public static final FirstLayoutData$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        FirstLayoutData$$serializer firstLayoutData$$serializer = new FirstLayoutData$$serializer();
        INSTANCE = firstLayoutData$$serializer;
        j1 j1Var = new j1("com.discord.chat.reactevents.FirstLayoutData", firstLayoutData$$serializer, 4);
        j1Var.k("firstVisibleMessageIndex", false);
        j1Var.k("firstVisibleMessagePercentVisible", false);
        j1Var.k("lastVisibleMessageIndex", false);
        j1Var.k("lastVisibleMessagePercentVisible", false);
        descriptor = j1Var;
    }

    private FirstLayoutData$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        x xVar = x.a;
        KSerializer o6 = e.o(xVar);
        KSerializer o7 = e.o(xVar);
        o0 o0Var = o0.a;
        return new KSerializer[]{o0Var, o6, o0Var, o7};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final FirstLayoutData deserialize(@NotNull Decoder decoder) {
        int i5;
        int i6;
        int i10;
        Double d6;
        Double d7;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
            x xVar = x.a;
            Double d8 = (Double) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, xVar, null);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 2);
            d7 = (Double) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, xVar, null);
            i6 = decodeIntElement;
            d6 = d8;
            i10 = 15;
        } else {
            boolean z5 = true;
            i5 = 0;
            int i11 = 0;
            Double d10 = null;
            Double d11 = null;
            int i12 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
                    i11 |= 1;
                } else if (decodeElementIndex == 1) {
                    d10 = (Double) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, x.a, d10);
                    i11 |= 2;
                } else if (decodeElementIndex == 2) {
                    i12 = beginStructure.decodeIntElement(serialDescriptor, 2);
                    i11 |= 4;
                } else {
                    if (decodeElementIndex != 3) {
                        throw new r(decodeElementIndex);
                    }
                    d11 = (Double) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, x.a, d11);
                    i11 |= 8;
                }
            }
            i6 = i12;
            i10 = i11;
            d6 = d10;
            d7 = d11;
        }
        int i13 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new FirstLayoutData(i10, i13, d6, i6, d7, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull FirstLayoutData value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        FirstLayoutData.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
