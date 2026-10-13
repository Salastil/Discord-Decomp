package com.discord.chat.input.events;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import com.facebook.react.uimanager.ViewProps;
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
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/input/events/OnFocusEvent.$serializer", "Lbs/h0;", "Lcom/discord/chat/input/events/OnFocusEvent;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/input/events/OnFocusEvent;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/input/events/OnFocusEvent;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class OnFocusEvent$$serializer implements h0 {

    @NotNull
    public static final OnFocusEvent$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        OnFocusEvent$$serializer onFocusEvent$$serializer = new OnFocusEvent$$serializer();
        INSTANCE = onFocusEvent$$serializer;
        j1 j1Var = new j1("com.discord.chat.input.events.OnFocusEvent", onFocusEvent$$serializer, 3);
        j1Var.k(ViewProps.START, false);
        j1Var.k(ViewProps.END, false);
        j1Var.k("target", true);
        descriptor = j1Var;
    }

    private OnFocusEvent$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        o0 o0Var = o0.a;
        return new KSerializer[]{o0Var, o0Var, o0Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final OnFocusEvent deserialize(@NotNull Decoder decoder) {
        int i5;
        int i6;
        int i10;
        int i11;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            i6 = beginStructure.decodeIntElement(serialDescriptor, 2);
            i10 = decodeIntElement;
            i11 = 7;
        } else {
            boolean z5 = true;
            i5 = 0;
            int i12 = 0;
            int i13 = 0;
            int i14 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
                    i14 |= 1;
                } else if (decodeElementIndex == 1) {
                    i13 = beginStructure.decodeIntElement(serialDescriptor, 1);
                    i14 |= 2;
                } else {
                    if (decodeElementIndex != 2) {
                        throw new r(decodeElementIndex);
                    }
                    i12 = beginStructure.decodeIntElement(serialDescriptor, 2);
                    i14 |= 4;
                }
            }
            i6 = i12;
            i10 = i13;
            i11 = i14;
        }
        int i15 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new OnFocusEvent(i11, i15, i10, i6, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull OnFocusEvent value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        OnFocusEvent.write$Self$chat_input_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
