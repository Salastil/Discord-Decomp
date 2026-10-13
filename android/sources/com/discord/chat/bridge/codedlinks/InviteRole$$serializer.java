package com.discord.chat.bridge.codedlinks;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.roleicons.RoleIcon;
import com.discord.chat.bridge.roleicons.RoleIcon$$serializer;
import com.facebook.react.devsupport.StackTraceHelper;
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
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/codedlinks/InviteRole.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/codedlinks/InviteRole;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/codedlinks/InviteRole;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/codedlinks/InviteRole;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class InviteRole$$serializer implements h0 {

    @NotNull
    public static final InviteRole$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        InviteRole$$serializer inviteRole$$serializer = new InviteRole$$serializer();
        INSTANCE = inviteRole$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.codedlinks.InviteRole", inviteRole$$serializer, 4);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k(StackTraceHelper.NAME_KEY, false);
        j1Var.k(ViewProps.COLOR, false);
        j1Var.k("roleIcon", true);
        descriptor = j1Var;
    }

    private InviteRole$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        KSerializer o6 = e.o(RoleIcon$$serializer.INSTANCE);
        v1 v1Var = v1.a;
        return new KSerializer[]{v1Var, v1Var, o0.a, o6};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final InviteRole deserialize(@NotNull Decoder decoder) {
        int i5;
        int i6;
        String str;
        String str2;
        RoleIcon roleIcon;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 1);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 2);
            str = decodeStringElement;
            roleIcon = (RoleIcon) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, RoleIcon$$serializer.INSTANCE, null);
            i5 = decodeIntElement;
            str2 = decodeStringElement2;
            i6 = 15;
        } else {
            boolean z5 = true;
            int i10 = 0;
            String str3 = null;
            String str4 = null;
            RoleIcon roleIcon2 = null;
            int i11 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    str3 = beginStructure.decodeStringElement(serialDescriptor, 0);
                    i11 |= 1;
                } else if (decodeElementIndex == 1) {
                    str4 = beginStructure.decodeStringElement(serialDescriptor, 1);
                    i11 |= 2;
                } else if (decodeElementIndex == 2) {
                    i10 = beginStructure.decodeIntElement(serialDescriptor, 2);
                    i11 |= 4;
                } else {
                    if (decodeElementIndex != 3) {
                        throw new r(decodeElementIndex);
                    }
                    roleIcon2 = (RoleIcon) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, RoleIcon$$serializer.INSTANCE, roleIcon2);
                    i11 |= 8;
                }
            }
            i5 = i10;
            i6 = i11;
            str = str3;
            str2 = str4;
            roleIcon = roleIcon2;
        }
        beginStructure.endStructure(serialDescriptor);
        return new InviteRole(i6, str, str2, i5, roleIcon, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull InviteRole value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        InviteRole.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
