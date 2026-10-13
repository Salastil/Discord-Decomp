package com.discord.mobile_voice_overlay;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import ds.r;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import org.jetbrains.annotations.NotNull;

@fo.d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/mobile_voice_overlay/MobileVoiceOverlayAssets.$serializer", "Lbs/h0;", "Lcom/discord/mobile_voice_overlay/MobileVoiceOverlayAssets;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/mobile_voice_overlay/MobileVoiceOverlayAssets;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/mobile_voice_overlay/MobileVoiceOverlayAssets;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "mobile_voice_overlay_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MobileVoiceOverlayAssets$$serializer implements h0 {

    @NotNull
    public static final MobileVoiceOverlayAssets$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        MobileVoiceOverlayAssets$$serializer mobileVoiceOverlayAssets$$serializer = new MobileVoiceOverlayAssets$$serializer();
        INSTANCE = mobileVoiceOverlayAssets$$serializer;
        j1 j1Var = new j1("com.discord.mobile_voice_overlay.MobileVoiceOverlayAssets", mobileVoiceOverlayAssets$$serializer, 11);
        j1Var.k("useSpeaker", false);
        j1Var.k("mute", false);
        j1Var.k("disconnectFromVoice", false);
        j1Var.k("getInvite", false);
        j1Var.k("switchChannels", false);
        j1Var.k("openDiscord", false);
        j1Var.k("inviteLinkCopied", false);
        j1Var.k("channelSelect", false);
        j1Var.k("closeWindow", false);
        j1Var.k("searchChannels", false);
        j1Var.k("noResults", false);
        descriptor = j1Var;
    }

    private MobileVoiceOverlayAssets$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{v1Var, v1Var, v1Var, v1Var, v1Var, v1Var, v1Var, v1Var, v1Var, v1Var, v1Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final MobileVoiceOverlayAssets deserialize(@NotNull Decoder decoder) {
        String str;
        String str2;
        String str3;
        String str4;
        String str5;
        String str6;
        String str7;
        String str8;
        String str9;
        String str10;
        String str11;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i5 = 0;
        if (beginStructure.decodeSequentially()) {
            str = beginStructure.decodeStringElement(serialDescriptor, 0);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 2);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 3);
            String decodeStringElement4 = beginStructure.decodeStringElement(serialDescriptor, 4);
            String decodeStringElement5 = beginStructure.decodeStringElement(serialDescriptor, 5);
            String decodeStringElement6 = beginStructure.decodeStringElement(serialDescriptor, 6);
            String decodeStringElement7 = beginStructure.decodeStringElement(serialDescriptor, 7);
            String decodeStringElement8 = beginStructure.decodeStringElement(serialDescriptor, 8);
            String decodeStringElement9 = beginStructure.decodeStringElement(serialDescriptor, 9);
            i5 = 2047;
            str2 = beginStructure.decodeStringElement(serialDescriptor, 10);
            str3 = decodeStringElement9;
            str4 = decodeStringElement7;
            str5 = decodeStringElement6;
            str6 = decodeStringElement5;
            str7 = decodeStringElement3;
            str8 = decodeStringElement8;
            str9 = decodeStringElement4;
            str10 = decodeStringElement2;
            str11 = decodeStringElement;
        } else {
            str = null;
            String str12 = null;
            String str13 = null;
            String str14 = null;
            String str15 = null;
            String str16 = null;
            String str17 = null;
            String str18 = null;
            String str19 = null;
            String str20 = null;
            String str21 = null;
            boolean z5 = true;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        break;
                    case 0:
                        i5 |= 1;
                        str = beginStructure.decodeStringElement(serialDescriptor, 0);
                        continue;
                    case 1:
                        str21 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i5 |= 2;
                        continue;
                    case 2:
                        str20 = beginStructure.decodeStringElement(serialDescriptor, 2);
                        i5 |= 4;
                        break;
                    case 3:
                        str17 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i5 |= 8;
                        break;
                    case 4:
                        str19 = beginStructure.decodeStringElement(serialDescriptor, 4);
                        i5 |= 16;
                        break;
                    case 5:
                        str16 = beginStructure.decodeStringElement(serialDescriptor, 5);
                        i5 |= 32;
                        break;
                    case 6:
                        str15 = beginStructure.decodeStringElement(serialDescriptor, 6);
                        i5 |= 64;
                        break;
                    case 7:
                        str14 = beginStructure.decodeStringElement(serialDescriptor, 7);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        break;
                    case 8:
                        str18 = beginStructure.decodeStringElement(serialDescriptor, 8);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        break;
                    case 9:
                        str13 = beginStructure.decodeStringElement(serialDescriptor, 9);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        break;
                    case 10:
                        str12 = beginStructure.decodeStringElement(serialDescriptor, 10);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        break;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str2 = str12;
            str3 = str13;
            str4 = str14;
            str5 = str15;
            str6 = str16;
            str7 = str17;
            str8 = str18;
            str9 = str19;
            str10 = str20;
            str11 = str21;
        }
        String str22 = str;
        int i6 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new MobileVoiceOverlayAssets(i6, str22, str11, str10, str7, str9, str6, str5, str4, str8, str3, str2, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull MobileVoiceOverlayAssets value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        MobileVoiceOverlayAssets.write$Self$mobile_voice_overlay_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
