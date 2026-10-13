package com.discord.chat.bridge.gift;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.gift.GiftEmbed;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/gift/GiftEmbed.Resolved.Invalid.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/gift/GiftEmbed$Resolved$Invalid;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/gift/GiftEmbed$Resolved$Invalid;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/gift/GiftEmbed$Resolved$Invalid;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class GiftEmbed$Resolved$Invalid$$serializer implements h0 {

    @NotNull
    public static final GiftEmbed$Resolved$Invalid$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        GiftEmbed$Resolved$Invalid$$serializer giftEmbed$Resolved$Invalid$$serializer = new GiftEmbed$Resolved$Invalid$$serializer();
        INSTANCE = giftEmbed$Resolved$Invalid$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.gift.GiftEmbed.Resolved.Invalid", giftEmbed$Resolved$Invalid$$serializer, 10);
        j1Var.k("headerText", false);
        j1Var.k("headerColor", false);
        j1Var.k(ViewProps.BACKGROUND_COLOR, false);
        j1Var.k("thumbnailCornerRadius", false);
        j1Var.k("thumbnailUrl", false);
        j1Var.k("titleText", false);
        j1Var.k("titleColor", false);
        j1Var.k("subtitle", false);
        j1Var.k("subtitleColor", false);
        j1Var.k("thumbnailBackgroundColor", false);
        descriptor = j1Var;
    }

    private GiftEmbed$Resolved$Invalid$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        o0 o0Var = o0.a;
        return new KSerializer[]{v1Var, o0Var, o0Var, o0Var, v1Var, v1Var, o0Var, v1Var, o0Var, o0Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final GiftEmbed.Resolved.Invalid deserialize(@NotNull Decoder decoder) {
        String str;
        int i5;
        String str2;
        int i6;
        String str3;
        int i10;
        int i11;
        String str4;
        int i12;
        int i13;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i14 = 0;
        if (beginStructure.decodeSequentially()) {
            str = beginStructure.decodeStringElement(serialDescriptor, 0);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 2);
            int decodeIntElement3 = beginStructure.decodeIntElement(serialDescriptor, 3);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 4);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 5);
            int decodeIntElement4 = beginStructure.decodeIntElement(serialDescriptor, 6);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 7);
            int decodeIntElement5 = beginStructure.decodeIntElement(serialDescriptor, 8);
            i14 = 1023;
            i5 = beginStructure.decodeIntElement(serialDescriptor, 9);
            str2 = decodeStringElement3;
            i6 = decodeIntElement4;
            str3 = decodeStringElement2;
            i10 = decodeIntElement3;
            i11 = decodeIntElement5;
            str4 = decodeStringElement;
            i12 = decodeIntElement2;
            i13 = decodeIntElement;
        } else {
            str = null;
            String str5 = null;
            String str6 = null;
            String str7 = null;
            boolean z5 = true;
            int i15 = 0;
            int i16 = 0;
            int i17 = 0;
            int i18 = 0;
            int i19 = 0;
            int i20 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        break;
                    case 0:
                        i14 |= 1;
                        str = beginStructure.decodeStringElement(serialDescriptor, 0);
                        continue;
                    case 1:
                        i20 = beginStructure.decodeIntElement(serialDescriptor, 1);
                        i14 |= 2;
                        continue;
                    case 2:
                        i19 = beginStructure.decodeIntElement(serialDescriptor, 2);
                        i14 |= 4;
                        break;
                    case 3:
                        i17 = beginStructure.decodeIntElement(serialDescriptor, 3);
                        i14 |= 8;
                        break;
                    case 4:
                        str7 = beginStructure.decodeStringElement(serialDescriptor, 4);
                        i14 |= 16;
                        break;
                    case 5:
                        str6 = beginStructure.decodeStringElement(serialDescriptor, 5);
                        i14 |= 32;
                        break;
                    case 6:
                        i16 = beginStructure.decodeIntElement(serialDescriptor, 6);
                        i14 |= 64;
                        break;
                    case 7:
                        str5 = beginStructure.decodeStringElement(serialDescriptor, 7);
                        i14 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        break;
                    case 8:
                        i18 = beginStructure.decodeIntElement(serialDescriptor, 8);
                        i14 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        break;
                    case 9:
                        i15 = beginStructure.decodeIntElement(serialDescriptor, 9);
                        i14 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        break;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i15;
            str2 = str5;
            i6 = i16;
            str3 = str6;
            i10 = i17;
            i11 = i18;
            str4 = str7;
            i12 = i19;
            i13 = i20;
        }
        String str8 = str;
        int i21 = i14;
        beginStructure.endStructure(serialDescriptor);
        return new GiftEmbed.Resolved.Invalid(i21, str8, i13, i12, i10, str4, str3, i6, str2, i11, i5, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull GiftEmbed.Resolved.Invalid value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        GiftEmbed.Resolved.Invalid.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
