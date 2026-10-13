package com.discord.chat.bridge.contentnode;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.rolecolors.RoleColors;
import com.discord.chat.bridge.rolecolors.RoleColors$$serializer;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.GuildId;
import com.discord.primitives.GuildId$$serializer;
import com.discord.primitives.RoleId;
import com.discord.primitives.RoleId$$serializer;
import com.discord.primitives.UserId;
import com.discord.primitives.UserId$$serializer;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import ds.r;
import fo.d;
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
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/contentnode/UserOrRoleMentionContentNode.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/contentnode/UserOrRoleMentionContentNode;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/contentnode/UserOrRoleMentionContentNode;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/contentnode/UserOrRoleMentionContentNode;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class UserOrRoleMentionContentNode$$serializer implements h0 {

    @NotNull
    public static final UserOrRoleMentionContentNode$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        UserOrRoleMentionContentNode$$serializer userOrRoleMentionContentNode$$serializer = new UserOrRoleMentionContentNode$$serializer();
        INSTANCE = userOrRoleMentionContentNode$$serializer;
        j1 j1Var = new j1("mention", userOrRoleMentionContentNode$$serializer, 9);
        j1Var.k("channelId", true);
        j1Var.k("userId", true);
        j1Var.k("roleName", true);
        j1Var.k("parsedUserId", true);
        j1Var.k("roleColor", true);
        j1Var.k("roleColors", true);
        j1Var.k("guildId", true);
        j1Var.k("roleId", true);
        j1Var.k("content", false);
        descriptor = j1Var;
    }

    private UserOrRoleMentionContentNode$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = UserOrRoleMentionContentNode.$childSerializers;
        v1 v1Var = v1.a;
        return new KSerializer[]{e.o(ChannelId$$serializer.INSTANCE), e.o(UserId$$serializer.INSTANCE), e.o(v1Var), e.o(v1Var), o0.a, e.o(RoleColors$$serializer.INSTANCE), e.o(GuildId$$serializer.INSTANCE), e.o(RoleId$$serializer.INSTANCE), lazyArr[8].getValue()};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final UserOrRoleMentionContentNode deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        int i5;
        List list;
        GuildId guildId;
        RoleId roleId;
        RoleColors roleColors;
        String str;
        String str2;
        int i6;
        ChannelId channelId;
        UserId userId;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = UserOrRoleMentionContentNode.$childSerializers;
        int i10 = 7;
        if (beginStructure.decodeSequentially()) {
            ChannelId channelId2 = (ChannelId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, ChannelId$$serializer.INSTANCE, null);
            UserId userId2 = (UserId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, UserId$$serializer.INSTANCE, null);
            v1 v1Var = v1.a;
            String str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1Var, null);
            String str4 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1Var, null);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 4);
            RoleColors roleColors2 = (RoleColors) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, RoleColors$$serializer.INSTANCE, null);
            GuildId guildId2 = (GuildId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, GuildId$$serializer.INSTANCE, null);
            RoleId roleId2 = (RoleId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, RoleId$$serializer.INSTANCE, null);
            list = (List) beginStructure.decodeSerializableElement(serialDescriptor, 8, (DeserializationStrategy) lazyArr[8].getValue(), null);
            channelId = channelId2;
            roleId = roleId2;
            guildId = guildId2;
            roleColors = roleColors2;
            str = str4;
            i5 = decodeIntElement;
            str2 = str3;
            i6 = 511;
            userId = userId2;
        } else {
            boolean z5 = true;
            int i11 = 0;
            List list2 = null;
            GuildId guildId3 = null;
            RoleId roleId3 = null;
            RoleColors roleColors3 = null;
            String str5 = null;
            ChannelId channelId3 = null;
            UserId userId3 = null;
            int i12 = 0;
            String str6 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                    case 0:
                        channelId3 = (ChannelId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, ChannelId$$serializer.INSTANCE, channelId3);
                        i12 |= 1;
                        i10 = 7;
                    case 1:
                        userId3 = (UserId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, UserId$$serializer.INSTANCE, userId3);
                        i12 |= 2;
                        i10 = 7;
                    case 2:
                        str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str6);
                        i12 |= 4;
                        i10 = 7;
                    case 3:
                        str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, str5);
                        i12 |= 8;
                        i10 = 7;
                    case 4:
                        i11 = beginStructure.decodeIntElement(serialDescriptor, 4);
                        i12 |= 16;
                        i10 = 7;
                    case 5:
                        roleColors3 = (RoleColors) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, RoleColors$$serializer.INSTANCE, roleColors3);
                        i12 |= 32;
                        i10 = 7;
                    case 6:
                        guildId3 = (GuildId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, GuildId$$serializer.INSTANCE, guildId3);
                        i12 |= 64;
                        i10 = 7;
                    case 7:
                        roleId3 = (RoleId) beginStructure.decodeNullableSerializableElement(serialDescriptor, i10, RoleId$$serializer.INSTANCE, roleId3);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        list2 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 8, (DeserializationStrategy) lazyArr[8].getValue(), list2);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i11;
            list = list2;
            guildId = guildId3;
            roleId = roleId3;
            roleColors = roleColors3;
            str = str5;
            str2 = str6;
            i6 = i12;
            channelId = channelId3;
            userId = userId3;
        }
        beginStructure.endStructure(serialDescriptor);
        return new UserOrRoleMentionContentNode(i6, channelId, userId, str2, str, i5, roleColors, guildId, roleId, list, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull UserOrRoleMentionContentNode value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        UserOrRoleMentionContentNode.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
