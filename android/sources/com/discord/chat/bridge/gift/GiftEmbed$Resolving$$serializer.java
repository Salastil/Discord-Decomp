package com.discord.chat.bridge.gift;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.gift.GiftEmbed;
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
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/gift/GiftEmbed.Resolving.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/gift/GiftEmbed$Resolving;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/gift/GiftEmbed$Resolving;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/gift/GiftEmbed$Resolving;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class GiftEmbed$Resolving$$serializer implements h0 {

    @NotNull
    public static final GiftEmbed$Resolving$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        GiftEmbed$Resolving$$serializer giftEmbed$Resolving$$serializer = new GiftEmbed$Resolving$$serializer();
        INSTANCE = giftEmbed$Resolving$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.gift.GiftEmbed.Resolving", giftEmbed$Resolving$$serializer, 6);
        j1Var.k("headerText", false);
        j1Var.k("headerColor", false);
        j1Var.k(ViewProps.BACKGROUND_COLOR, false);
        j1Var.k("thumbnailCornerRadius", false);
        j1Var.k("resolvingGradientStart", false);
        j1Var.k("resolvingGradientEnd", false);
        descriptor = j1Var;
    }

    private GiftEmbed$Resolving$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        o0 o0Var = o0.a;
        return new KSerializer[]{v1.a, o0Var, o0Var, o0Var, o0Var, o0Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final GiftEmbed.Resolving deserialize(@NotNull Decoder decoder) {
        String str;
        int i5;
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            str = beginStructure.decodeStringElement(serialDescriptor, 0);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 2);
            int decodeIntElement3 = beginStructure.decodeIntElement(serialDescriptor, 3);
            int decodeIntElement4 = beginStructure.decodeIntElement(serialDescriptor, 4);
            i5 = beginStructure.decodeIntElement(serialDescriptor, 5);
            i6 = decodeIntElement3;
            i10 = decodeIntElement4;
            i11 = decodeIntElement2;
            i12 = decodeIntElement;
            i13 = 63;
        } else {
            str = null;
            boolean z5 = true;
            int i14 = 0;
            int i15 = 0;
            int i16 = 0;
            int i17 = 0;
            int i18 = 0;
            int i19 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        continue;
                    case 0:
                        str = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i19 |= 1;
                        continue;
                    case 1:
                        i18 = beginStructure.decodeIntElement(serialDescriptor, 1);
                        i19 |= 2;
                        break;
                    case 2:
                        i17 = beginStructure.decodeIntElement(serialDescriptor, 2);
                        i19 |= 4;
                        break;
                    case 3:
                        i15 = beginStructure.decodeIntElement(serialDescriptor, 3);
                        i19 |= 8;
                        break;
                    case 4:
                        i16 = beginStructure.decodeIntElement(serialDescriptor, 4);
                        i19 |= 16;
                        break;
                    case 5:
                        i14 = beginStructure.decodeIntElement(serialDescriptor, 5);
                        i19 |= 32;
                        break;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i14;
            i6 = i15;
            i10 = i16;
            i11 = i17;
            i12 = i18;
            i13 = i19;
        }
        String str2 = str;
        beginStructure.endStructure(serialDescriptor);
        return new GiftEmbed.Resolving(i13, str2, i12, i11, i6, i10, i5, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull GiftEmbed.Resolving value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        GiftEmbed.Resolving.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
