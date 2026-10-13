package com.discord.chat.bridge.safetysystemnotification;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import ds.r;
import fo.d;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.DeserializationStrategy;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/safetysystemnotification/SafetySystemNotificationEmbed.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/safetysystemnotification/SafetySystemNotificationEmbed;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/safetysystemnotification/SafetySystemNotificationEmbed;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/safetysystemnotification/SafetySystemNotificationEmbed;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class SafetySystemNotificationEmbed$$serializer implements h0 {

    @NotNull
    public static final SafetySystemNotificationEmbed$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        SafetySystemNotificationEmbed$$serializer safetySystemNotificationEmbed$$serializer = new SafetySystemNotificationEmbed$$serializer();
        INSTANCE = safetySystemNotificationEmbed$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.safetysystemnotification.SafetySystemNotificationEmbed", safetySystemNotificationEmbed$$serializer, 11);
        j1Var.k("titleText", false);
        j1Var.k("titleIcon", false);
        j1Var.k("subtitleText", false);
        j1Var.k("descriptionText", false);
        j1Var.k("primaryCtaText", true);
        j1Var.k("primaryCtaType", true);
        j1Var.k("primaryCtaKey", true);
        j1Var.k("secondaryCtaText", true);
        j1Var.k("secondaryCtaType", true);
        j1Var.k("secondaryCtaKey", true);
        j1Var.k("footerTheme", false);
        descriptor = j1Var;
    }

    private SafetySystemNotificationEmbed$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = SafetySystemNotificationEmbed.$childSerializers;
        v1 v1Var = v1.a;
        return new KSerializer[]{v1Var, v1Var, v1Var, v1Var, e.o(v1Var), e.o(v1Var), e.o(v1Var), e.o(v1Var), e.o(v1Var), e.o(v1Var), lazyArr[10].getValue()};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SafetySystemNotificationEmbed deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        int i5;
        FooterTheme footerTheme;
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
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = SafetySystemNotificationEmbed.$childSerializers;
        int i6 = 9;
        String str11 = null;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 1);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 2);
            String decodeStringElement4 = beginStructure.decodeStringElement(serialDescriptor, 3);
            v1 v1Var = v1.a;
            String str12 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            String str13 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1Var, null);
            String str14 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1Var, null);
            String str15 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1Var, null);
            String str16 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, v1Var, null);
            String str17 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, v1Var, null);
            footerTheme = (FooterTheme) beginStructure.decodeSerializableElement(serialDescriptor, 10, (DeserializationStrategy) lazyArr[10].getValue(), null);
            str7 = decodeStringElement;
            str = str17;
            str2 = str15;
            str4 = str14;
            str5 = str13;
            str10 = decodeStringElement4;
            str3 = str16;
            str6 = str12;
            str9 = decodeStringElement3;
            i5 = 2047;
            str8 = decodeStringElement2;
        } else {
            boolean z5 = true;
            int i10 = 0;
            FooterTheme footerTheme2 = null;
            String str18 = null;
            String str19 = null;
            String str20 = null;
            String str21 = null;
            String str22 = null;
            String str23 = null;
            String str24 = null;
            String str25 = null;
            String str26 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        i6 = 9;
                    case 0:
                        i10 |= 1;
                        str11 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i6 = 9;
                    case 1:
                        str24 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i10 |= 2;
                        i6 = 9;
                    case 2:
                        str25 = beginStructure.decodeStringElement(serialDescriptor, 2);
                        i10 |= 4;
                        i6 = 9;
                    case 3:
                        str26 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i10 |= 8;
                        i6 = 9;
                    case 4:
                        str23 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str23);
                        i10 |= 16;
                        i6 = 9;
                    case 5:
                        str22 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str22);
                        i10 |= 32;
                        i6 = 9;
                    case 6:
                        str21 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1.a, str21);
                        i10 |= 64;
                        i6 = 9;
                    case 7:
                        str19 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1.a, str19);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i6 = 9;
                    case 8:
                        str20 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, v1.a, str20);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    case 9:
                        str18 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, i6, v1.a, str18);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    case 10:
                        footerTheme2 = (FooterTheme) beginStructure.decodeSerializableElement(serialDescriptor, 10, (DeserializationStrategy) lazyArr[10].getValue(), footerTheme2);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i10;
            footerTheme = footerTheme2;
            str = str18;
            str2 = str19;
            str3 = str20;
            str4 = str21;
            str5 = str22;
            str6 = str23;
            str7 = str11;
            str8 = str24;
            str9 = str25;
            str10 = str26;
        }
        beginStructure.endStructure(serialDescriptor);
        return new SafetySystemNotificationEmbed(i5, str7, str8, str9, str10, str6, str5, str4, str2, str3, str, footerTheme, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull SafetySystemNotificationEmbed value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        SafetySystemNotificationEmbed.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
