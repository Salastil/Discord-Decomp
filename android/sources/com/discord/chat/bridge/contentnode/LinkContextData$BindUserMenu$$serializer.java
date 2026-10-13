package com.discord.chat.bridge.contentnode;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.contentnode.LinkContextData;
import com.discord.chat.bridge.rolecolors.RoleColors;
import com.discord.chat.bridge.rolecolors.RoleColors$$serializer;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.UserId;
import com.discord.primitives.UserId$$serializer;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/contentnode/LinkContextData.BindUserMenu.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/contentnode/LinkContextData$BindUserMenu;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/contentnode/LinkContextData$BindUserMenu;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/contentnode/LinkContextData$BindUserMenu;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class LinkContextData$BindUserMenu$$serializer implements h0 {

    @NotNull
    public static final LinkContextData$BindUserMenu$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        LinkContextData$BindUserMenu$$serializer linkContextData$BindUserMenu$$serializer = new LinkContextData$BindUserMenu$$serializer();
        INSTANCE = linkContextData$BindUserMenu$$serializer;
        j1 j1Var = new j1("bindUserMenu", linkContextData$BindUserMenu$$serializer, 9);
        j1Var.k("action", false);
        j1Var.k("userId", false);
        j1Var.k("linkColor", true);
        j1Var.k("roleColor", true);
        j1Var.k("roleColors", true);
        j1Var.k("shouldShowRoleDot", true);
        j1Var.k("messageChannelId", true);
        j1Var.k("medium", true);
        j1Var.k("fontId", true);
        j1Var.l(new LinkContextData$LinkContext$Companion$annotationImpl$kotlinx_serialization_json_JsonClassDiscriminator$0("action"));
        descriptor = j1Var;
    }

    private LinkContextData$BindUserMenu$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        o0 o0Var = o0.a;
        KSerializer o6 = e.o(o0Var);
        KSerializer o7 = e.o(o0Var);
        KSerializer o10 = e.o(RoleColors$$serializer.INSTANCE);
        g gVar = g.a;
        return new KSerializer[]{v1.a, UserId$$serializer.INSTANCE, o6, o7, o10, e.o(gVar), e.o(ChannelId$$serializer.INSTANCE), e.o(gVar), e.o(o0Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final LinkContextData.BindUserMenu deserialize(@NotNull Decoder decoder) {
        int i5;
        Boolean bool;
        Integer num;
        ChannelId channelId;
        Boolean bool2;
        RoleColors roleColors;
        String str;
        UserId userId;
        Integer num2;
        Integer num3;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i6 = 7;
        String str2 = null;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            UserId userId2 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 1, UserId$$serializer.INSTANCE, null);
            o0 o0Var = o0.a;
            Integer num4 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, o0Var, null);
            Integer num5 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, o0Var, null);
            RoleColors roleColors2 = (RoleColors) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, RoleColors$$serializer.INSTANCE, null);
            g gVar = g.a;
            Boolean bool3 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, gVar, null);
            ChannelId channelId2 = (ChannelId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, ChannelId$$serializer.INSTANCE, null);
            str = decodeStringElement;
            bool = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, gVar, null);
            channelId = channelId2;
            bool2 = bool3;
            num3 = num5;
            num = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, o0Var, null);
            roleColors = roleColors2;
            num2 = num4;
            userId = userId2;
            i5 = 511;
        } else {
            boolean z5 = true;
            int i10 = 0;
            Boolean bool4 = null;
            Integer num6 = null;
            ChannelId channelId3 = null;
            Boolean bool5 = null;
            RoleColors roleColors3 = null;
            UserId userId3 = null;
            Integer num7 = null;
            Integer num8 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                    case 0:
                        str2 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i10 |= 1;
                        i6 = 7;
                    case 1:
                        userId3 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 1, UserId$$serializer.INSTANCE, userId3);
                        i10 |= 2;
                        i6 = 7;
                    case 2:
                        num7 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, o0.a, num7);
                        i10 |= 4;
                        i6 = 7;
                    case 3:
                        num8 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, o0.a, num8);
                        i10 |= 8;
                        i6 = 7;
                    case 4:
                        roleColors3 = (RoleColors) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, RoleColors$$serializer.INSTANCE, roleColors3);
                        i10 |= 16;
                        i6 = 7;
                    case 5:
                        bool5 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, g.a, bool5);
                        i10 |= 32;
                        i6 = 7;
                    case 6:
                        channelId3 = (ChannelId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, ChannelId$$serializer.INSTANCE, channelId3);
                        i10 |= 64;
                    case 7:
                        bool4 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, i6, g.a, bool4);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        num6 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, o0.a, num6);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i10;
            bool = bool4;
            num = num6;
            channelId = channelId3;
            bool2 = bool5;
            roleColors = roleColors3;
            str = str2;
            userId = userId3;
            num2 = num7;
            num3 = num8;
        }
        beginStructure.endStructure(serialDescriptor);
        return new LinkContextData.BindUserMenu(i5, str, userId, num2, num3, roleColors, bool2, channelId, bool, num, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull LinkContextData.BindUserMenu value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        LinkContextData.BindUserMenu.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
