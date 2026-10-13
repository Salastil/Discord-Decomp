package com.discord.notifications.api;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.t0;
import bs.v1;
import com.discord.notifications.api.StickerFormatType;
import com.discord.notifications.api.StickerType;
import com.discord.primitives.GuildId;
import com.discord.primitives.GuildId$$serializer;
import com.discord.primitives.StickerId;
import com.discord.primitives.StickerId$$serializer;
import com.facebook.react.devsupport.StackTraceHelper;
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
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/notifications/api/Sticker.$serializer", "Lbs/h0;", "Lcom/discord/notifications/api/Sticker;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/notifications/api/Sticker;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/notifications/api/Sticker;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class Sticker$$serializer implements h0 {

    @NotNull
    public static final Sticker$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        Sticker$$serializer sticker$$serializer = new Sticker$$serializer();
        INSTANCE = sticker$$serializer;
        j1 j1Var = new j1("com.discord.notifications.api.Sticker", sticker$$serializer, 9);
        j1Var.k(StackTraceHelper.ID_KEY, true);
        j1Var.k(StackTraceHelper.NAME_KEY, false);
        j1Var.k("pack_id", true);
        j1Var.k("guild_id", true);
        j1Var.k("description", true);
        j1Var.k("format_type", true);
        j1Var.k("tags", true);
        j1Var.k("type", true);
        j1Var.k("available", true);
        descriptor = j1Var;
    }

    private Sticker$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        KSerializer o6 = e.o(t0.a);
        KSerializer o7 = e.o(GuildId$$serializer.INSTANCE);
        KSerializer o10 = e.o(g.a);
        v1 v1Var = v1.a;
        return new KSerializer[]{StickerId$$serializer.INSTANCE, v1Var, o6, o7, v1Var, StickerFormatType.Serializer.INSTANCE, v1Var, StickerType.Serializer.INSTANCE, o10};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final Sticker deserialize(@NotNull Decoder decoder) {
        int i5;
        Boolean bool;
        StickerType stickerType;
        StickerFormatType stickerFormatType;
        StickerId stickerId;
        String str;
        Long l6;
        GuildId guildId;
        String str2;
        String str3;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i6 = 7;
        int i10 = 6;
        StickerId stickerId2 = null;
        if (beginStructure.decodeSequentially()) {
            StickerId stickerId3 = (StickerId) beginStructure.decodeSerializableElement(serialDescriptor, 0, StickerId$$serializer.INSTANCE, null);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            Long l7 = (Long) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, t0.a, null);
            GuildId guildId2 = (GuildId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, GuildId$$serializer.INSTANCE, null);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 4);
            StickerFormatType stickerFormatType2 = (StickerFormatType) beginStructure.decodeSerializableElement(serialDescriptor, 5, StickerFormatType.Serializer.INSTANCE, null);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 6);
            stickerId = stickerId3;
            stickerType = (StickerType) beginStructure.decodeSerializableElement(serialDescriptor, 7, StickerType.Serializer.INSTANCE, null);
            str3 = decodeStringElement3;
            stickerFormatType = stickerFormatType2;
            guildId = guildId2;
            bool = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, g.a, null);
            str2 = decodeStringElement2;
            l6 = l7;
            str = decodeStringElement;
            i5 = 511;
        } else {
            boolean z5 = true;
            int i11 = 0;
            Boolean bool2 = null;
            StickerType stickerType2 = null;
            StickerFormatType stickerFormatType3 = null;
            String str4 = null;
            Long l10 = null;
            GuildId guildId3 = null;
            String str5 = null;
            String str6 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        i10 = 6;
                    case 0:
                        stickerId2 = (StickerId) beginStructure.decodeSerializableElement(serialDescriptor, 0, StickerId$$serializer.INSTANCE, stickerId2);
                        i11 |= 1;
                        i6 = 7;
                        i10 = 6;
                    case 1:
                        str4 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i11 |= 2;
                        i6 = 7;
                    case 2:
                        l10 = (Long) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, t0.a, l10);
                        i11 |= 4;
                        i6 = 7;
                    case 3:
                        guildId3 = (GuildId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, GuildId$$serializer.INSTANCE, guildId3);
                        i11 |= 8;
                        i6 = 7;
                    case 4:
                        str5 = beginStructure.decodeStringElement(serialDescriptor, 4);
                        i11 |= 16;
                    case 5:
                        stickerFormatType3 = (StickerFormatType) beginStructure.decodeSerializableElement(serialDescriptor, 5, StickerFormatType.Serializer.INSTANCE, stickerFormatType3);
                        i11 |= 32;
                    case 6:
                        str6 = beginStructure.decodeStringElement(serialDescriptor, i10);
                        i11 |= 64;
                    case 7:
                        stickerType2 = (StickerType) beginStructure.decodeSerializableElement(serialDescriptor, i6, StickerType.Serializer.INSTANCE, stickerType2);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        bool2 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, g.a, bool2);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i11;
            bool = bool2;
            stickerType = stickerType2;
            stickerFormatType = stickerFormatType3;
            stickerId = stickerId2;
            str = str4;
            l6 = l10;
            guildId = guildId3;
            str2 = str5;
            str3 = str6;
        }
        beginStructure.endStructure(serialDescriptor);
        return new Sticker(i5, stickerId, str, l6, guildId, str2, stickerFormatType, str3, stickerType, bool, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull Sticker value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        Sticker.write$Self$notification_api_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
