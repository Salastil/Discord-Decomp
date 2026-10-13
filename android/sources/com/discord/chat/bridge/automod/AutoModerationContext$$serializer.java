package com.discord.chat.bridge.automod;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/automod/AutoModerationContext.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/automod/AutoModerationContext;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/automod/AutoModerationContext;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/automod/AutoModerationContext;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class AutoModerationContext$$serializer implements h0 {

    @NotNull
    public static final AutoModerationContext$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        AutoModerationContext$$serializer autoModerationContext$$serializer = new AutoModerationContext$$serializer();
        INSTANCE = autoModerationContext$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.automod.AutoModerationContext", autoModerationContext$$serializer, 9);
        j1Var.k("headerText", false);
        j1Var.k("headerBadgeText", false);
        j1Var.k("ruleDisplayText", true);
        j1Var.k("keywordDisplayText", true);
        j1Var.k("actionsIconURL", true);
        j1Var.k("actionsText", false);
        j1Var.k("feedbackText", false);
        j1Var.k("message", false);
        j1Var.k("notification", true);
        descriptor = j1Var;
    }

    private AutoModerationContext$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{v1Var, v1Var, e.o(v1Var), e.o(v1Var), e.o(v1Var), v1Var, v1Var, FlaggedMessageEmbed$$serializer.INSTANCE, e.o(AutoModerationNotification$$serializer.INSTANCE)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final AutoModerationContext deserialize(@NotNull Decoder decoder) {
        int i5;
        AutoModerationNotification autoModerationNotification;
        FlaggedMessageEmbed flaggedMessageEmbed;
        String str;
        String str2;
        String str3;
        String str4;
        String str5;
        String str6;
        String str7;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i6 = 7;
        String str8 = null;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 1);
            v1 v1Var = v1.a;
            String str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1Var, null);
            String str10 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1Var, null);
            String str11 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 5);
            String decodeStringElement4 = beginStructure.decodeStringElement(serialDescriptor, 6);
            str2 = decodeStringElement;
            flaggedMessageEmbed = (FlaggedMessageEmbed) beginStructure.decodeSerializableElement(serialDescriptor, 7, FlaggedMessageEmbed$$serializer.INSTANCE, null);
            str7 = decodeStringElement4;
            str6 = decodeStringElement3;
            str5 = str10;
            autoModerationNotification = (AutoModerationNotification) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, AutoModerationNotification$$serializer.INSTANCE, null);
            str = str11;
            str4 = str9;
            str3 = decodeStringElement2;
            i5 = 511;
        } else {
            boolean z5 = true;
            int i10 = 0;
            AutoModerationNotification autoModerationNotification2 = null;
            FlaggedMessageEmbed flaggedMessageEmbed2 = null;
            String str12 = null;
            String str13 = null;
            String str14 = null;
            String str15 = null;
            String str16 = null;
            String str17 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                    case 0:
                        i10 |= 1;
                        str8 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i6 = 7;
                    case 1:
                        str13 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i10 |= 2;
                        i6 = 7;
                    case 2:
                        str14 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str14);
                        i10 |= 4;
                        i6 = 7;
                    case 3:
                        str15 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, str15);
                        i10 |= 8;
                        i6 = 7;
                    case 4:
                        str12 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str12);
                        i10 |= 16;
                    case 5:
                        str16 = beginStructure.decodeStringElement(serialDescriptor, 5);
                        i10 |= 32;
                    case 6:
                        str17 = beginStructure.decodeStringElement(serialDescriptor, 6);
                        i10 |= 64;
                    case 7:
                        flaggedMessageEmbed2 = (FlaggedMessageEmbed) beginStructure.decodeSerializableElement(serialDescriptor, i6, FlaggedMessageEmbed$$serializer.INSTANCE, flaggedMessageEmbed2);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        autoModerationNotification2 = (AutoModerationNotification) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, AutoModerationNotification$$serializer.INSTANCE, autoModerationNotification2);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i10;
            autoModerationNotification = autoModerationNotification2;
            flaggedMessageEmbed = flaggedMessageEmbed2;
            str = str12;
            str2 = str8;
            str3 = str13;
            str4 = str14;
            str5 = str15;
            str6 = str16;
            str7 = str17;
        }
        beginStructure.endStructure(serialDescriptor);
        return new AutoModerationContext(i5, str2, str3, str4, str5, str, str6, str7, flaggedMessageEmbed, autoModerationNotification, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull AutoModerationContext value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        AutoModerationContext.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
