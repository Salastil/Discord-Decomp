package com.discord.chat.bridge.reaction;

import bs.g0;
import bs.h0;
import bs.h1;
import bs.j1;
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
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/reaction/BurstReactionColorPalette.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/reaction/BurstReactionColorPalette;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/reaction/BurstReactionColorPalette;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/reaction/BurstReactionColorPalette;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class BurstReactionColorPalette$$serializer implements h0 {

    @NotNull
    public static final BurstReactionColorPalette$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        BurstReactionColorPalette$$serializer burstReactionColorPalette$$serializer = new BurstReactionColorPalette$$serializer();
        INSTANCE = burstReactionColorPalette$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.reaction.BurstReactionColorPalette", burstReactionColorPalette$$serializer, 4);
        j1Var.k(ViewProps.BACKGROUND_COLOR, false);
        j1Var.k("accentColor", false);
        j1Var.k("highlightColor", false);
        j1Var.k(ViewProps.OPACITY, false);
        descriptor = j1Var;
    }

    private BurstReactionColorPalette$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{e.o(v1Var), e.o(v1Var), e.o(v1Var), g0.a};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final BurstReactionColorPalette deserialize(@NotNull Decoder decoder) {
        float f2;
        int i5;
        String str;
        String str2;
        String str3;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            v1 v1Var = v1.a;
            String str4 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, v1Var, null);
            String str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1Var, null);
            str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1Var, null);
            f2 = beginStructure.decodeFloatElement(serialDescriptor, 3);
            i5 = 15;
            str2 = str5;
            str = str4;
        } else {
            float f10 = 0.0f;
            boolean z5 = true;
            String str6 = null;
            String str7 = null;
            String str8 = null;
            int i6 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, v1.a, str6);
                    i6 |= 1;
                } else if (decodeElementIndex == 1) {
                    str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1.a, str7);
                    i6 |= 2;
                } else if (decodeElementIndex == 2) {
                    str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str8);
                    i6 |= 4;
                } else {
                    if (decodeElementIndex != 3) {
                        throw new r(decodeElementIndex);
                    }
                    f10 = beginStructure.decodeFloatElement(serialDescriptor, 3);
                    i6 |= 8;
                }
            }
            f2 = f10;
            i5 = i6;
            str = str6;
            str2 = str7;
            str3 = str8;
        }
        beginStructure.endStructure(serialDescriptor);
        return new BurstReactionColorPalette(i5, str, str2, str3, f2, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull BurstReactionColorPalette value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        BurstReactionColorPalette.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
