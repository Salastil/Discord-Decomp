package com.discord.mobile_voice_overlay;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.notifications.renderer.NotificationRenderer;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.GuildId;
import com.discord.primitives.GuildId$$serializer;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import ds.r;
import java.util.List;
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
import org.jetbrains.annotations.NotNull;

@fo.d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/mobile_voice_overlay/MobileVoiceOverlayData.$serializer", "Lbs/h0;", "Lcom/discord/mobile_voice_overlay/MobileVoiceOverlayData;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/mobile_voice_overlay/MobileVoiceOverlayData;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/mobile_voice_overlay/MobileVoiceOverlayData;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "mobile_voice_overlay_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MobileVoiceOverlayData$$serializer implements h0 {

    @NotNull
    public static final MobileVoiceOverlayData$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        MobileVoiceOverlayData$$serializer mobileVoiceOverlayData$$serializer = new MobileVoiceOverlayData$$serializer();
        INSTANCE = mobileVoiceOverlayData$$serializer;
        j1 j1Var = new j1("com.discord.mobile_voice_overlay.MobileVoiceOverlayData", mobileVoiceOverlayData$$serializer, 11);
        j1Var.k("users", false);
        j1Var.k("extraUsers", false);
        j1Var.k("guildId", false);
        j1Var.k("channelId", false);
        j1Var.k(NotificationRenderer.CHANNEL_NAME, false);
        j1Var.k("guildName", false);
        j1Var.k("deafened", false);
        j1Var.k("muted", false);
        j1Var.k("connectionQuality", false);
        j1Var.k("canGenerateInvite", false);
        j1Var.k("channelSelectorResults", false);
        descriptor = j1Var;
    }

    private MobileVoiceOverlayData$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = MobileVoiceOverlayData.$childSerializers;
        v1 v1Var = v1.a;
        g gVar = g.a;
        return new KSerializer[]{lazyArr[0].getValue(), o0.a, nf.e.o(GuildId$$serializer.INSTANCE), ChannelId$$serializer.INSTANCE, v1Var, v1Var, gVar, gVar, lazyArr[8].getValue(), gVar, lazyArr[10].getValue()};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final MobileVoiceOverlayData deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        boolean z5;
        List list;
        ConnectionQuality connectionQuality;
        List list2;
        ChannelId channelId;
        GuildId guildId;
        int i5;
        boolean z6;
        boolean z7;
        int i6;
        String str;
        String str2;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = MobileVoiceOverlayData.$childSerializers;
        int i10 = 9;
        int i11 = 7;
        int i12 = 6;
        int i13 = 0;
        if (beginStructure.decodeSequentially()) {
            List list3 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 0, (DeserializationStrategy) lazyArr[0].getValue(), null);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            GuildId guildId2 = (GuildId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, GuildId$$serializer.INSTANCE, null);
            ChannelId channelId2 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 3, ChannelId$$serializer.INSTANCE, null);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 4);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 5);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 6);
            boolean decodeBooleanElement2 = beginStructure.decodeBooleanElement(serialDescriptor, 7);
            ConnectionQuality connectionQuality2 = (ConnectionQuality) beginStructure.decodeSerializableElement(serialDescriptor, 8, (DeserializationStrategy) lazyArr[8].getValue(), null);
            boolean decodeBooleanElement3 = beginStructure.decodeBooleanElement(serialDescriptor, 9);
            list2 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 10, (DeserializationStrategy) lazyArr[10].getValue(), null);
            list = list3;
            z5 = decodeBooleanElement3;
            z6 = decodeBooleanElement2;
            z7 = decodeBooleanElement;
            str2 = decodeStringElement2;
            channelId = channelId2;
            str = decodeStringElement;
            guildId = guildId2;
            i5 = 2047;
            connectionQuality = connectionQuality2;
            i6 = decodeIntElement;
        } else {
            boolean z8 = true;
            boolean z10 = false;
            boolean z11 = false;
            int i14 = 0;
            ConnectionQuality connectionQuality3 = null;
            List list4 = null;
            ChannelId channelId3 = null;
            GuildId guildId3 = null;
            List list5 = null;
            String str3 = null;
            String str4 = null;
            boolean z12 = false;
            while (z8) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z8 = false;
                        i11 = 7;
                        i12 = 6;
                    case 0:
                        list5 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 0, (DeserializationStrategy) lazyArr[0].getValue(), list5);
                        i13 |= 1;
                        i10 = 9;
                        i11 = 7;
                        i12 = 6;
                    case 1:
                        i14 = beginStructure.decodeIntElement(serialDescriptor, 1);
                        i13 |= 2;
                        i10 = 9;
                        i11 = 7;
                    case 2:
                        guildId3 = (GuildId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, GuildId$$serializer.INSTANCE, guildId3);
                        i13 |= 4;
                        i10 = 9;
                        i11 = 7;
                    case 3:
                        channelId3 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 3, ChannelId$$serializer.INSTANCE, channelId3);
                        i13 |= 8;
                        i10 = 9;
                        i11 = 7;
                    case 4:
                        str3 = beginStructure.decodeStringElement(serialDescriptor, 4);
                        i13 |= 16;
                        i10 = 9;
                    case 5:
                        str4 = beginStructure.decodeStringElement(serialDescriptor, 5);
                        i13 |= 32;
                    case 6:
                        z11 = beginStructure.decodeBooleanElement(serialDescriptor, i12);
                        i13 |= 64;
                    case 7:
                        z12 = beginStructure.decodeBooleanElement(serialDescriptor, i11);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        connectionQuality3 = (ConnectionQuality) beginStructure.decodeSerializableElement(serialDescriptor, 8, (DeserializationStrategy) lazyArr[8].getValue(), connectionQuality3);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    case 9:
                        z10 = beginStructure.decodeBooleanElement(serialDescriptor, i10);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    case 10:
                        list4 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 10, (DeserializationStrategy) lazyArr[10].getValue(), list4);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            z5 = z10;
            list = list5;
            connectionQuality = connectionQuality3;
            list2 = list4;
            channelId = channelId3;
            guildId = guildId3;
            i5 = i13;
            z6 = z12;
            z7 = z11;
            i6 = i14;
            str = str3;
            str2 = str4;
        }
        beginStructure.endStructure(serialDescriptor);
        return new MobileVoiceOverlayData(i5, list, i6, guildId, channelId, str, str2, z7, z6, connectionQuality, z5, list2, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull MobileVoiceOverlayData value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        MobileVoiceOverlayData.write$Self$mobile_voice_overlay_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
