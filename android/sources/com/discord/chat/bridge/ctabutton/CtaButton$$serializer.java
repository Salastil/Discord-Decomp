package com.discord.chat.bridge.ctabutton;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
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
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/ctabutton/CtaButton.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/ctabutton/CtaButton;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/ctabutton/CtaButton;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/ctabutton/CtaButton;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class CtaButton$$serializer implements h0 {

    @NotNull
    public static final CtaButton$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        CtaButton$$serializer ctaButton$$serializer = new CtaButton$$serializer();
        INSTANCE = ctaButton$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.ctabutton.CtaButton", ctaButton$$serializer, 4);
        j1Var.k("text", false);
        j1Var.k("textColor", true);
        j1Var.k(ViewProps.BACKGROUND_COLOR, true);
        j1Var.k("callback", true);
        descriptor = j1Var;
    }

    private CtaButton$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        o0 o0Var = o0.a;
        return new KSerializer[]{v1Var, e.o(o0Var), e.o(o0Var), e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final CtaButton deserialize(@NotNull Decoder decoder) {
        int i5;
        String str;
        Integer num;
        Integer num2;
        String str2;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        String str3 = null;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            o0 o0Var = o0.a;
            Integer num3 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, o0Var, null);
            Integer num4 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, o0Var, null);
            str = decodeStringElement;
            str2 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, null);
            num2 = num4;
            num = num3;
            i5 = 15;
        } else {
            boolean z5 = true;
            int i6 = 0;
            Integer num5 = null;
            Integer num6 = null;
            String str4 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    str3 = beginStructure.decodeStringElement(serialDescriptor, 0);
                    i6 |= 1;
                } else if (decodeElementIndex == 1) {
                    num5 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, o0.a, num5);
                    i6 |= 2;
                } else if (decodeElementIndex == 2) {
                    num6 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, o0.a, num6);
                    i6 |= 4;
                } else {
                    if (decodeElementIndex != 3) {
                        throw new r(decodeElementIndex);
                    }
                    str4 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, str4);
                    i6 |= 8;
                }
            }
            i5 = i6;
            str = str3;
            num = num5;
            num2 = num6;
            str2 = str4;
        }
        beginStructure.endStructure(serialDescriptor);
        return new CtaButton(i5, str, num, num2, str2, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull CtaButton value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        CtaButton.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
