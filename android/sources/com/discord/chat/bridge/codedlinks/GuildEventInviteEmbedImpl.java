package com.discord.chat.bridge.codedlinks;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.botuikit.a;
import com.discord.chat.bridge.codedlinks.CodedLinkExtendedType;
import com.discord.chat.bridge.codedlinks.InviteType;
import com.discord.chat.bridge.structurabletext.StructurableText;
import com.discord.chat.bridge.structurabletext.StructurableTextSerializer;
import com.discord.jank_stats.JankRecordStore;
import com.discord.notifications.renderer.NotificationRenderer;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import k0.d;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u001f\n\u0002\u0018\u0002\n\u0002\bg\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 °\u00012\u00020\u00012\u00020\u00022\u00020\u0003:\u0004¯\u0001°\u0001B\u0093\u0004\u0012\b\b\u0001\u0010\u0004\u001a\u00020\u0005\u0012\b\b\u0001\u0010\u0006\u001a\u00020\u0005\u0012\b\b\u0002\u0010\u0007\u001a\u00020\b\u0012\b\b\u0001\u0010\t\u001a\u00020\u0005\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0006\u0010\f\u001a\u00020\r\u0012\n\b\u0003\u0010\u000e\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0003\u0010\u000f\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0003\u0010\u0010\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0003\u0010\u0016\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\u0018\u0012\n\b\u0002\u0010\u0019\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u001c\u0012\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\u0018\u0012\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010 \u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010!\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0003\u0010\"\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010#\u001a\u0004\u0018\u00010\u0018\u0012\n\b\u0002\u0010$\u001a\u0004\u0018\u00010\u001c\u0012\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010&\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010'\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010(\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010)\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010*\u001a\u0004\u0018\u00010\u0018\u0012\n\b\u0002\u0010+\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u0010,\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010-\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u0010.\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0003\u0010/\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0003\u00100\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u00101\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u00102\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u00103\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0003\u00104\u001a\u0004\u0018\u00010\u0005\u0012\n\b\u0002\u00105\u001a\u0004\u0018\u00010\u000b\u0012\n\b\u0002\u00106\u001a\u0004\u0018\u00010\u000b¢\u0006\u0004\b7\u00108Bß\u0003\b\u0010\u0012\u0006\u00109\u001a\u00020\u0005\u0012\u0006\u0010:\u001a\u00020\u0005\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\u0006\u0010\t\u001a\u00020\u0005\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0010\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\u0013\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\u0014\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\u0015\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\u0016\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010\u0017\u001a\u0004\u0018\u00010\u0018\u0012\b\u0010\u0019\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\u001a\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\u001b\u001a\u0004\u0018\u00010\u001c\u0012\b\u0010\u001d\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\u001e\u001a\u0004\u0018\u00010\u0018\u0012\b\u0010\u001f\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010 \u001a\u0004\u0018\u00010\u000b\u0012\b\u0010!\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\"\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010#\u001a\u0004\u0018\u00010\u0018\u0012\b\u0010$\u001a\u0004\u0018\u00010\u001c\u0012\b\u0010%\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010&\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010'\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010(\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010)\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010*\u001a\u0004\u0018\u00010\u0018\u0012\b\u0010+\u001a\u0004\u0018\u00010\u0005\u0012\b\u0010,\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010-\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010.\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010/\u001a\u0004\u0018\u00010\u0005\u0012\b\u00100\u001a\u0004\u0018\u00010\u0005\u0012\b\u00101\u001a\u0004\u0018\u00010\u0005\u0012\b\u00102\u001a\u0004\u0018\u00010\u000b\u0012\b\u00103\u001a\u0004\u0018\u00010\u000b\u0012\b\u00104\u001a\u0004\u0018\u00010\u0005\u0012\b\u00105\u001a\u0004\u0018\u00010\u000b\u0012\b\u00106\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010;\u001a\u0004\u0018\u00010<¢\u0006\u0004\b7\u0010=J\t\u0010s\u001a\u00020\u0005HÆ\u0003J\t\u0010t\u001a\u00020\u0005HÆ\u0003J\t\u0010u\u001a\u00020\bHÆ\u0003J\t\u0010v\u001a\u00020\u0005HÆ\u0003J\t\u0010w\u001a\u00020\u000bHÆ\u0003J\t\u0010x\u001a\u00020\rHÆ\u0003J\u0010\u0010y\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010IJ\u0010\u0010z\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010IJ\u0010\u0010{\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010IJ\u000b\u0010|\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\u000b\u0010}\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\u000b\u0010~\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\u000b\u0010\u007f\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\f\u0010\u0080\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\u0011\u0010\u0081\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010IJ\u0011\u0010\u0082\u0001\u001a\u0004\u0018\u00010\u0018HÆ\u0003¢\u0006\u0002\u0010TJ\f\u0010\u0083\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\f\u0010\u0084\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\f\u0010\u0085\u0001\u001a\u0004\u0018\u00010\u001cHÆ\u0003J\f\u0010\u0086\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\u0011\u0010\u0087\u0001\u001a\u0004\u0018\u00010\u0018HÆ\u0003¢\u0006\u0002\u0010TJ\f\u0010\u0088\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\f\u0010\u0089\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\f\u0010\u008a\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\u0011\u0010\u008b\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010IJ\u0011\u0010\u008c\u0001\u001a\u0004\u0018\u00010\u0018HÆ\u0003¢\u0006\u0002\u0010TJ\f\u0010\u008d\u0001\u001a\u0004\u0018\u00010\u001cHÆ\u0003J\f\u0010\u008e\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\f\u0010\u008f\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\u0011\u0010\u0090\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010IJ\u0011\u0010\u0091\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010IJ\f\u0010\u0092\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\u0011\u0010\u0093\u0001\u001a\u0004\u0018\u00010\u0018HÆ\u0003¢\u0006\u0002\u0010TJ\u0011\u0010\u0094\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010IJ\f\u0010\u0095\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\f\u0010\u0096\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\f\u0010\u0097\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\u0011\u0010\u0098\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010IJ\u0011\u0010\u0099\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010IJ\u0011\u0010\u009a\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010IJ\f\u0010\u009b\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\f\u0010\u009c\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\u0011\u0010\u009d\u0001\u001a\u0004\u0018\u00010\u0005HÆ\u0003¢\u0006\u0002\u0010IJ\f\u0010\u009e\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J\f\u0010\u009f\u0001\u001a\u0004\u0018\u00010\u000bHÆ\u0003J \u0004\u0010 \u0001\u001a\u00020\u00002\b\b\u0003\u0010\u0004\u001a\u00020\u00052\b\b\u0003\u0010\u0006\u001a\u00020\u00052\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\b\u0003\u0010\t\u001a\u00020\u00052\b\b\u0002\u0010\n\u001a\u00020\u000b2\b\b\u0002\u0010\f\u001a\u00020\r2\n\b\u0003\u0010\u000e\u001a\u0004\u0018\u00010\u00052\n\b\u0003\u0010\u000f\u001a\u0004\u0018\u00010\u00052\n\b\u0003\u0010\u0010\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u000b2\n\b\u0003\u0010\u0016\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\u00182\n\b\u0002\u0010\u0019\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u001c2\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\u00182\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010 \u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010!\u001a\u0004\u0018\u00010\u000b2\n\b\u0003\u0010\"\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010#\u001a\u0004\u0018\u00010\u00182\n\b\u0002\u0010$\u001a\u0004\u0018\u00010\u001c2\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010&\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010'\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010(\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010)\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010*\u001a\u0004\u0018\u00010\u00182\n\b\u0002\u0010+\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u0010,\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010-\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u0010.\u001a\u0004\u0018\u00010\u000b2\n\b\u0003\u0010/\u001a\u0004\u0018\u00010\u00052\n\b\u0003\u00100\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u00101\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u00102\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u00103\u001a\u0004\u0018\u00010\u000b2\n\b\u0003\u00104\u001a\u0004\u0018\u00010\u00052\n\b\u0002\u00105\u001a\u0004\u0018\u00010\u000b2\n\b\u0002\u00106\u001a\u0004\u0018\u00010\u000bHÆ\u0001¢\u0006\u0003\u0010¡\u0001J\u0016\u0010¢\u0001\u001a\u00020\u00182\n\u0010£\u0001\u001a\u0005\u0018\u00010¤\u0001HÖ\u0003J\n\u0010¥\u0001\u001a\u00020\u0005HÖ\u0001J\n\u0010¦\u0001\u001a\u00020\u000bHÖ\u0001J-\u0010§\u0001\u001a\u00030¨\u00012\u0007\u0010©\u0001\u001a\u00020\u00002\b\u0010ª\u0001\u001a\u00030«\u00012\b\u0010¬\u0001\u001a\u00030\u00ad\u0001H\u0001¢\u0006\u0003\b®\u0001R\u0014\u0010\u0004\u001a\u00020\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b>\u0010?R\u0014\u0010\u0006\u001a\u00020\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b@\u0010?R\u0014\u0010\u0007\u001a\u00020\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bA\u0010BR\u0014\u0010\t\u001a\u00020\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bC\u0010?R\u0014\u0010\n\u001a\u00020\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bD\u0010ER\u0014\u0010\f\u001a\u00020\rX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bF\u0010GR\u0018\u0010\u000e\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010J\u001a\u0004\bH\u0010IR\u0018\u0010\u000f\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010J\u001a\u0004\bK\u0010IR\u0018\u0010\u0010\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010J\u001a\u0004\bL\u0010IR\u0016\u0010\u0011\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bM\u0010ER\u0016\u0010\u0012\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bN\u0010ER\u0016\u0010\u0013\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bO\u0010ER\u0016\u0010\u0014\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bP\u0010ER\u0016\u0010\u0015\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bQ\u0010ER\u0018\u0010\u0016\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010J\u001a\u0004\bR\u0010IR\u0018\u0010\u0017\u001a\u0004\u0018\u00010\u0018X\u0096\u0004¢\u0006\n\n\u0002\u0010U\u001a\u0004\bS\u0010TR\u0016\u0010\u0019\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bV\u0010ER\u0016\u0010\u001a\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bW\u0010ER\u0016\u0010\u001b\u001a\u0004\u0018\u00010\u001cX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bX\u0010YR\u0016\u0010\u001d\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bZ\u0010ER\u0018\u0010\u001e\u001a\u0004\u0018\u00010\u0018X\u0096\u0004¢\u0006\n\n\u0002\u0010U\u001a\u0004\b[\u0010TR\u0016\u0010\u001f\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\\\u0010ER\u0016\u0010 \u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b]\u0010ER\u0016\u0010!\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b^\u0010ER\u0018\u0010\"\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010J\u001a\u0004\b_\u0010IR\u0018\u0010#\u001a\u0004\u0018\u00010\u0018X\u0096\u0004¢\u0006\n\n\u0002\u0010U\u001a\u0004\b#\u0010TR\u0016\u0010$\u001a\u0004\u0018\u00010\u001cX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b`\u0010YR\u0016\u0010%\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\ba\u0010ER\u0016\u0010&\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bb\u0010ER\u0018\u0010'\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010J\u001a\u0004\bc\u0010IR\u0018\u0010(\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010J\u001a\u0004\bd\u0010IR\u0016\u0010)\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\be\u0010ER\u0018\u0010*\u001a\u0004\u0018\u00010\u0018X\u0096\u0004¢\u0006\n\n\u0002\u0010U\u001a\u0004\bf\u0010TR\u0018\u0010+\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010J\u001a\u0004\bg\u0010IR\u0016\u0010,\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bh\u0010ER\u0016\u0010-\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bi\u0010ER\u0016\u0010.\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bj\u0010ER\u0018\u0010/\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010J\u001a\u0004\bk\u0010IR\u0018\u00100\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010J\u001a\u0004\bl\u0010IR\u0018\u00101\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010J\u001a\u0004\bm\u0010IR\u0016\u00102\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bn\u0010ER\u0016\u00103\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bo\u0010ER\u0018\u00104\u001a\u0004\u0018\u00010\u0005X\u0096\u0004¢\u0006\n\n\u0002\u0010J\u001a\u0004\bp\u0010IR\u0016\u00105\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bq\u0010ER\u0016\u00106\u001a\u0004\u0018\u00010\u000bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\br\u0010E¨\u0006±\u0001"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/GuildEventInviteEmbedImpl;", "Lcom/discord/chat/bridge/codedlinks/CodedLinkEmbed;", "Lcom/discord/chat/bridge/codedlinks/GuildEventInviteEmbed;", "Lcom/discord/chat/bridge/codedlinks/GuildInviteExtendedEmbed;", ViewProps.BACKGROUND_COLOR, "", ViewProps.BORDER_COLOR, "extendedType", "Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;", "headerColor", "headerText", "", "type", "Lcom/discord/chat/bridge/codedlinks/InviteType;", "acceptLabelBackgroundColor", "acceptLabelBorderColor", "acceptLabelColor", "acceptLabelIcon", "acceptLabelText", "badgeCount", "badgeIcon", "bodyText", "bodyTextColor", "canBeAccepted", "", "channelIcon", NotificationRenderer.CHANNEL_NAME, "content", "Lcom/discord/chat/bridge/structurabletext/StructurableText;", "creatorAvatar", "embedCanBeTapped", "guildIcon", "guildName", "headerIcon", "headerTextColor", "isRsvped", "locationContent", "memberText", "onlineText", "resolvingGradientEnd", "resolvingGradientStart", "secondaryActionIcon", "splashHasRadialGradient", "splashOpacity", "splashUrl", "inviteSplash", "subtitle", "subtitleColor", "thumbnailBackgroundColor", "thumbnailCornerRadius", "thumbnailText", "thumbnailUrl", "titleColor", "titleText", "badgeIconUrl", "<init>", "(IILcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;ILjava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Lcom/discord/chat/bridge/structurabletext/StructurableText;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/discord/chat/bridge/structurabletext/StructurableText;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)V", "seen0", "seen1", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IIIILcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;ILjava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Lcom/discord/chat/bridge/structurabletext/StructurableText;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/discord/chat/bridge/structurabletext/StructurableText;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getBackgroundColor", "()I", "getBorderColor", "getExtendedType", "()Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;", "getHeaderColor", "getHeaderText", "()Ljava/lang/String;", "getType", "()Lcom/discord/chat/bridge/codedlinks/InviteType;", "getAcceptLabelBackgroundColor", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getAcceptLabelBorderColor", "getAcceptLabelColor", "getAcceptLabelIcon", "getAcceptLabelText", "getBadgeCount", "getBadgeIcon", "getBodyText", "getBodyTextColor", "getCanBeAccepted", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "getChannelIcon", "getChannelName", "getContent", "()Lcom/discord/chat/bridge/structurabletext/StructurableText;", "getCreatorAvatar", "getEmbedCanBeTapped", "getGuildIcon", "getGuildName", "getHeaderIcon", "getHeaderTextColor", "getLocationContent", "getMemberText", "getOnlineText", "getResolvingGradientEnd", "getResolvingGradientStart", "getSecondaryActionIcon", "getSplashHasRadialGradient", "getSplashOpacity", "getSplashUrl", "getInviteSplash", "getSubtitle", "getSubtitleColor", "getThumbnailBackgroundColor", "getThumbnailCornerRadius", "getThumbnailText", "getThumbnailUrl", "getTitleColor", "getTitleText", "getBadgeIconUrl", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "component14", "component15", "component16", "component17", "component18", "component19", "component20", "component21", "component22", "component23", "component24", "component25", "component26", "component27", "component28", "component29", "component30", "component31", "component32", "component33", "component34", "component35", "component36", "component37", "component38", "component39", "component40", "component41", "component42", "component43", "component44", "component45", "copy", "(IILcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;ILjava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Lcom/discord/chat/bridge/structurabletext/StructurableText;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Boolean;Lcom/discord/chat/bridge/structurabletext/StructurableText;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;)Lcom/discord/chat/bridge/codedlinks/GuildEventInviteEmbedImpl;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class GuildEventInviteEmbedImpl extends CodedLinkEmbed implements GuildEventInviteEmbed, GuildInviteExtendedEmbed {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final Integer acceptLabelBackgroundColor;
    private final Integer acceptLabelBorderColor;
    private final Integer acceptLabelColor;
    private final String acceptLabelIcon;
    private final String acceptLabelText;
    private final int backgroundColor;
    private final String badgeCount;
    private final String badgeIcon;
    private final String badgeIconUrl;
    private final String bodyText;
    private final Integer bodyTextColor;
    private final int borderColor;
    private final Boolean canBeAccepted;
    private final String channelIcon;
    private final String channelName;
    private final StructurableText content;
    private final String creatorAvatar;
    private final Boolean embedCanBeTapped;

    @NotNull
    private final CodedLinkExtendedType extendedType;
    private final String guildIcon;
    private final String guildName;
    private final int headerColor;
    private final String headerIcon;

    @NotNull
    private final String headerText;
    private final Integer headerTextColor;
    private final String inviteSplash;
    private final Boolean isRsvped;
    private final StructurableText locationContent;
    private final String memberText;
    private final String onlineText;
    private final Integer resolvingGradientEnd;
    private final Integer resolvingGradientStart;
    private final String secondaryActionIcon;
    private final Boolean splashHasRadialGradient;
    private final Integer splashOpacity;
    private final String splashUrl;
    private final String subtitle;
    private final Integer subtitleColor;
    private final Integer thumbnailBackgroundColor;
    private final Integer thumbnailCornerRadius;
    private final String thumbnailText;
    private final String thumbnailUrl;
    private final Integer titleColor;
    private final String titleText;

    @NotNull
    private final InviteType type;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/GuildEventInviteEmbedImpl$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/codedlinks/GuildEventInviteEmbedImpl;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return GuildEventInviteEmbedImpl$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ GuildEventInviteEmbedImpl(int i5, int i6, int i10, int i11, CodedLinkExtendedType codedLinkExtendedType, int i12, String str, InviteType inviteType, Integer num, Integer num2, Integer num3, String str2, String str3, String str4, String str5, String str6, Integer num4, Boolean bool, String str7, String str8, StructurableText structurableText, String str9, Boolean bool2, String str10, String str11, String str12, Integer num5, Boolean bool3, StructurableText structurableText2, String str13, String str14, Integer num6, Integer num7, String str15, Boolean bool4, Integer num8, String str16, String str17, String str18, Integer num9, Integer num10, Integer num11, String str19, String str20, Integer num12, String str21, String str22, SerializationConstructorMarker serializationConstructorMarker) {
        super(r3);
        DefaultConstructorMarker defaultConstructorMarker = null;
        if (59 != (i5 & 59)) {
            h1.k(new int[]{i5, i6}, new int[]{59, 0}, GuildEventInviteEmbedImpl$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.backgroundColor = i10;
        this.borderColor = i11;
        if ((i5 & 4) == 0) {
            this.extendedType = CodedLinkExtendedType.GUILD_SCHEDULED_EVENT;
        } else {
            this.extendedType = codedLinkExtendedType;
        }
        this.headerColor = i12;
        this.headerText = str;
        this.type = inviteType;
        if ((i5 & 64) == 0) {
            this.acceptLabelBackgroundColor = null;
        } else {
            this.acceptLabelBackgroundColor = num;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            this.acceptLabelBorderColor = null;
        } else {
            this.acceptLabelBorderColor = num2;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.acceptLabelColor = null;
        } else {
            this.acceptLabelColor = num3;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.acceptLabelIcon = null;
        } else {
            this.acceptLabelIcon = str2;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 0) {
            this.acceptLabelText = null;
        } else {
            this.acceptLabelText = str3;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_MOVED) == 0) {
            this.badgeCount = null;
        } else {
            this.badgeCount = str4;
        }
        if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
            this.badgeIcon = null;
        } else {
            this.badgeIcon = str5;
        }
        if ((i5 & 8192) == 0) {
            this.bodyText = null;
        } else {
            this.bodyText = str6;
        }
        if ((i5 & 16384) == 0) {
            this.bodyTextColor = null;
        } else {
            this.bodyTextColor = num4;
        }
        if ((32768 & i5) == 0) {
            this.canBeAccepted = null;
        } else {
            this.canBeAccepted = bool;
        }
        if ((65536 & i5) == 0) {
            this.channelIcon = null;
        } else {
            this.channelIcon = str7;
        }
        if ((131072 & i5) == 0) {
            this.channelName = null;
        } else {
            this.channelName = str8;
        }
        if ((262144 & i5) == 0) {
            this.content = null;
        } else {
            this.content = structurableText;
        }
        if ((524288 & i5) == 0) {
            this.creatorAvatar = null;
        } else {
            this.creatorAvatar = str9;
        }
        if ((1048576 & i5) == 0) {
            this.embedCanBeTapped = null;
        } else {
            this.embedCanBeTapped = bool2;
        }
        if ((2097152 & i5) == 0) {
            this.guildIcon = null;
        } else {
            this.guildIcon = str10;
        }
        if ((4194304 & i5) == 0) {
            this.guildName = null;
        } else {
            this.guildName = str11;
        }
        if ((8388608 & i5) == 0) {
            this.headerIcon = null;
        } else {
            this.headerIcon = str12;
        }
        if ((16777216 & i5) == 0) {
            this.headerTextColor = null;
        } else {
            this.headerTextColor = num5;
        }
        if ((33554432 & i5) == 0) {
            this.isRsvped = null;
        } else {
            this.isRsvped = bool3;
        }
        if ((67108864 & i5) == 0) {
            this.locationContent = null;
        } else {
            this.locationContent = structurableText2;
        }
        if ((134217728 & i5) == 0) {
            this.memberText = null;
        } else {
            this.memberText = str13;
        }
        if ((268435456 & i5) == 0) {
            this.onlineText = null;
        } else {
            this.onlineText = str14;
        }
        if ((536870912 & i5) == 0) {
            this.resolvingGradientEnd = null;
        } else {
            this.resolvingGradientEnd = num6;
        }
        if ((1073741824 & i5) == 0) {
            this.resolvingGradientStart = null;
        } else {
            this.resolvingGradientStart = num7;
        }
        if ((i5 & Integer.MIN_VALUE) == 0) {
            this.secondaryActionIcon = null;
        } else {
            this.secondaryActionIcon = str15;
        }
        if ((i6 & 1) == 0) {
            this.splashHasRadialGradient = null;
        } else {
            this.splashHasRadialGradient = bool4;
        }
        if ((i6 & 2) == 0) {
            this.splashOpacity = null;
        } else {
            this.splashOpacity = num8;
        }
        if ((i6 & 4) == 0) {
            this.splashUrl = null;
        } else {
            this.splashUrl = str16;
        }
        if ((i6 & 8) == 0) {
            this.inviteSplash = null;
        } else {
            this.inviteSplash = str17;
        }
        if ((i6 & 16) == 0) {
            this.subtitle = null;
        } else {
            this.subtitle = str18;
        }
        if ((i6 & 32) == 0) {
            this.subtitleColor = null;
        } else {
            this.subtitleColor = num9;
        }
        if ((i6 & 64) == 0) {
            this.thumbnailBackgroundColor = null;
        } else {
            this.thumbnailBackgroundColor = num10;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            this.thumbnailCornerRadius = null;
        } else {
            this.thumbnailCornerRadius = num11;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.thumbnailText = null;
        } else {
            this.thumbnailText = str19;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.thumbnailUrl = null;
        } else {
            this.thumbnailUrl = str20;
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) == 0) {
            this.titleColor = null;
        } else {
            this.titleColor = num12;
        }
        if ((i6 & RecyclerView.ItemAnimator.FLAG_MOVED) == 0) {
            this.titleText = null;
        } else {
            this.titleText = str21;
        }
        if ((i6 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
            this.badgeIconUrl = null;
        } else {
            this.badgeIconUrl = str22;
        }
    }

    public static final /* synthetic */ void write$Self$chat_release(GuildEventInviteEmbedImpl self, CompositeEncoder output, SerialDescriptor serialDesc) {
        output.n(0, self.getBackgroundColor(), serialDesc);
        output.n(1, self.getBorderColor(), serialDesc);
        if (output.I(serialDesc, 2) || self.getExtendedType() != CodedLinkExtendedType.GUILD_SCHEDULED_EVENT) {
            output.g(serialDesc, 2, CodedLinkExtendedType.Serializer.INSTANCE, self.getExtendedType());
        }
        output.n(3, self.getHeaderColor(), serialDesc);
        output.y(serialDesc, 4, self.getHeaderText());
        output.g(serialDesc, 5, InviteType.Serializer.INSTANCE, self.getType());
        if (output.I(serialDesc, 6) || self.getAcceptLabelBackgroundColor() != null) {
            output.z(serialDesc, 6, o0.a, self.getAcceptLabelBackgroundColor());
        }
        if (output.I(serialDesc, 7) || self.getAcceptLabelBorderColor() != null) {
            output.z(serialDesc, 7, o0.a, self.getAcceptLabelBorderColor());
        }
        if (output.I(serialDesc, 8) || self.getAcceptLabelColor() != null) {
            output.z(serialDesc, 8, o0.a, self.getAcceptLabelColor());
        }
        if (output.I(serialDesc, 9) || self.getAcceptLabelIcon() != null) {
            output.z(serialDesc, 9, v1.a, self.getAcceptLabelIcon());
        }
        if (output.I(serialDesc, 10) || self.getAcceptLabelText() != null) {
            output.z(serialDesc, 10, v1.a, self.getAcceptLabelText());
        }
        if (output.I(serialDesc, 11) || self.getBadgeCount() != null) {
            output.z(serialDesc, 11, v1.a, self.getBadgeCount());
        }
        if (output.I(serialDesc, 12) || self.getBadgeIcon() != null) {
            output.z(serialDesc, 12, v1.a, self.getBadgeIcon());
        }
        if (output.I(serialDesc, 13) || self.getBodyText() != null) {
            output.z(serialDesc, 13, v1.a, self.getBodyText());
        }
        if (output.I(serialDesc, 14) || self.getBodyTextColor() != null) {
            output.z(serialDesc, 14, o0.a, self.getBodyTextColor());
        }
        if (output.I(serialDesc, 15) || self.getCanBeAccepted() != null) {
            output.z(serialDesc, 15, g.a, self.getCanBeAccepted());
        }
        if (output.I(serialDesc, 16) || self.getChannelIcon() != null) {
            output.z(serialDesc, 16, v1.a, self.getChannelIcon());
        }
        if (output.I(serialDesc, 17) || self.getChannelName() != null) {
            output.z(serialDesc, 17, v1.a, self.getChannelName());
        }
        if (output.I(serialDesc, 18) || self.getContent() != null) {
            output.z(serialDesc, 18, StructurableTextSerializer.INSTANCE, self.getContent());
        }
        if (output.I(serialDesc, 19) || self.getCreatorAvatar() != null) {
            output.z(serialDesc, 19, v1.a, self.getCreatorAvatar());
        }
        if (output.I(serialDesc, 20) || self.getEmbedCanBeTapped() != null) {
            output.z(serialDesc, 20, g.a, self.getEmbedCanBeTapped());
        }
        if (output.I(serialDesc, 21) || self.getGuildIcon() != null) {
            output.z(serialDesc, 21, v1.a, self.getGuildIcon());
        }
        if (output.I(serialDesc, 22) || self.getGuildName() != null) {
            output.z(serialDesc, 22, v1.a, self.getGuildName());
        }
        if (output.I(serialDesc, 23) || self.getHeaderIcon() != null) {
            output.z(serialDesc, 23, v1.a, self.getHeaderIcon());
        }
        if (output.I(serialDesc, 24) || self.getHeaderTextColor() != null) {
            output.z(serialDesc, 24, o0.a, self.getHeaderTextColor());
        }
        if (output.I(serialDesc, 25) || self.isRsvped() != null) {
            output.z(serialDesc, 25, g.a, self.isRsvped());
        }
        if (output.I(serialDesc, 26) || self.getLocationContent() != null) {
            output.z(serialDesc, 26, StructurableTextSerializer.INSTANCE, self.getLocationContent());
        }
        if (output.I(serialDesc, 27) || self.getMemberText() != null) {
            output.z(serialDesc, 27, v1.a, self.getMemberText());
        }
        if (output.I(serialDesc, 28) || self.getOnlineText() != null) {
            output.z(serialDesc, 28, v1.a, self.getOnlineText());
        }
        if (output.I(serialDesc, 29) || self.getResolvingGradientEnd() != null) {
            output.z(serialDesc, 29, o0.a, self.getResolvingGradientEnd());
        }
        if (output.I(serialDesc, 30) || self.getResolvingGradientStart() != null) {
            output.z(serialDesc, 30, o0.a, self.getResolvingGradientStart());
        }
        if (output.I(serialDesc, 31) || self.getSecondaryActionIcon() != null) {
            output.z(serialDesc, 31, v1.a, self.getSecondaryActionIcon());
        }
        if (output.I(serialDesc, 32) || self.getSplashHasRadialGradient() != null) {
            output.z(serialDesc, 32, g.a, self.getSplashHasRadialGradient());
        }
        if (output.I(serialDesc, 33) || self.getSplashOpacity() != null) {
            output.z(serialDesc, 33, o0.a, self.getSplashOpacity());
        }
        if (output.I(serialDesc, 34) || self.getSplashUrl() != null) {
            output.z(serialDesc, 34, v1.a, self.getSplashUrl());
        }
        if (output.I(serialDesc, 35) || self.getInviteSplash() != null) {
            output.z(serialDesc, 35, v1.a, self.getInviteSplash());
        }
        if (output.I(serialDesc, 36) || self.getSubtitle() != null) {
            output.z(serialDesc, 36, v1.a, self.getSubtitle());
        }
        if (output.I(serialDesc, 37) || self.getSubtitleColor() != null) {
            output.z(serialDesc, 37, o0.a, self.getSubtitleColor());
        }
        if (output.I(serialDesc, 38) || self.getThumbnailBackgroundColor() != null) {
            output.z(serialDesc, 38, o0.a, self.getThumbnailBackgroundColor());
        }
        if (output.I(serialDesc, 39) || self.getThumbnailCornerRadius() != null) {
            output.z(serialDesc, 39, o0.a, self.getThumbnailCornerRadius());
        }
        if (output.I(serialDesc, 40) || self.getThumbnailText() != null) {
            output.z(serialDesc, 40, v1.a, self.getThumbnailText());
        }
        if (output.I(serialDesc, 41) || self.getThumbnailUrl() != null) {
            output.z(serialDesc, 41, v1.a, self.getThumbnailUrl());
        }
        if (output.I(serialDesc, 42) || self.getTitleColor() != null) {
            output.z(serialDesc, 42, o0.a, self.getTitleColor());
        }
        if (output.I(serialDesc, 43) || self.getTitleText() != null) {
            output.z(serialDesc, 43, v1.a, self.getTitleText());
        }
        if (!output.I(serialDesc, 44) && self.getBadgeIconUrl() == null) {
            return;
        }
        output.z(serialDesc, 44, v1.a, self.getBadgeIconUrl());
    }

    /* renamed from: component1, reason: from getter */
    public final int getBackgroundColor() {
        return this.backgroundColor;
    }

    /* renamed from: component10, reason: from getter */
    public final String getAcceptLabelIcon() {
        return this.acceptLabelIcon;
    }

    /* renamed from: component11, reason: from getter */
    public final String getAcceptLabelText() {
        return this.acceptLabelText;
    }

    /* renamed from: component12, reason: from getter */
    public final String getBadgeCount() {
        return this.badgeCount;
    }

    /* renamed from: component13, reason: from getter */
    public final String getBadgeIcon() {
        return this.badgeIcon;
    }

    /* renamed from: component14, reason: from getter */
    public final String getBodyText() {
        return this.bodyText;
    }

    /* renamed from: component15, reason: from getter */
    public final Integer getBodyTextColor() {
        return this.bodyTextColor;
    }

    /* renamed from: component16, reason: from getter */
    public final Boolean getCanBeAccepted() {
        return this.canBeAccepted;
    }

    /* renamed from: component17, reason: from getter */
    public final String getChannelIcon() {
        return this.channelIcon;
    }

    /* renamed from: component18, reason: from getter */
    public final String getChannelName() {
        return this.channelName;
    }

    /* renamed from: component19, reason: from getter */
    public final StructurableText getContent() {
        return this.content;
    }

    /* renamed from: component2, reason: from getter */
    public final int getBorderColor() {
        return this.borderColor;
    }

    /* renamed from: component20, reason: from getter */
    public final String getCreatorAvatar() {
        return this.creatorAvatar;
    }

    /* renamed from: component21, reason: from getter */
    public final Boolean getEmbedCanBeTapped() {
        return this.embedCanBeTapped;
    }

    /* renamed from: component22, reason: from getter */
    public final String getGuildIcon() {
        return this.guildIcon;
    }

    /* renamed from: component23, reason: from getter */
    public final String getGuildName() {
        return this.guildName;
    }

    /* renamed from: component24, reason: from getter */
    public final String getHeaderIcon() {
        return this.headerIcon;
    }

    /* renamed from: component25, reason: from getter */
    public final Integer getHeaderTextColor() {
        return this.headerTextColor;
    }

    /* renamed from: component26, reason: from getter */
    public final Boolean getIsRsvped() {
        return this.isRsvped;
    }

    /* renamed from: component27, reason: from getter */
    public final StructurableText getLocationContent() {
        return this.locationContent;
    }

    /* renamed from: component28, reason: from getter */
    public final String getMemberText() {
        return this.memberText;
    }

    /* renamed from: component29, reason: from getter */
    public final String getOnlineText() {
        return this.onlineText;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final CodedLinkExtendedType getExtendedType() {
        return this.extendedType;
    }

    /* renamed from: component30, reason: from getter */
    public final Integer getResolvingGradientEnd() {
        return this.resolvingGradientEnd;
    }

    /* renamed from: component31, reason: from getter */
    public final Integer getResolvingGradientStart() {
        return this.resolvingGradientStart;
    }

    /* renamed from: component32, reason: from getter */
    public final String getSecondaryActionIcon() {
        return this.secondaryActionIcon;
    }

    /* renamed from: component33, reason: from getter */
    public final Boolean getSplashHasRadialGradient() {
        return this.splashHasRadialGradient;
    }

    /* renamed from: component34, reason: from getter */
    public final Integer getSplashOpacity() {
        return this.splashOpacity;
    }

    /* renamed from: component35, reason: from getter */
    public final String getSplashUrl() {
        return this.splashUrl;
    }

    /* renamed from: component36, reason: from getter */
    public final String getInviteSplash() {
        return this.inviteSplash;
    }

    /* renamed from: component37, reason: from getter */
    public final String getSubtitle() {
        return this.subtitle;
    }

    /* renamed from: component38, reason: from getter */
    public final Integer getSubtitleColor() {
        return this.subtitleColor;
    }

    /* renamed from: component39, reason: from getter */
    public final Integer getThumbnailBackgroundColor() {
        return this.thumbnailBackgroundColor;
    }

    /* renamed from: component4, reason: from getter */
    public final int getHeaderColor() {
        return this.headerColor;
    }

    /* renamed from: component40, reason: from getter */
    public final Integer getThumbnailCornerRadius() {
        return this.thumbnailCornerRadius;
    }

    /* renamed from: component41, reason: from getter */
    public final String getThumbnailText() {
        return this.thumbnailText;
    }

    /* renamed from: component42, reason: from getter */
    public final String getThumbnailUrl() {
        return this.thumbnailUrl;
    }

    /* renamed from: component43, reason: from getter */
    public final Integer getTitleColor() {
        return this.titleColor;
    }

    /* renamed from: component44, reason: from getter */
    public final String getTitleText() {
        return this.titleText;
    }

    /* renamed from: component45, reason: from getter */
    public final String getBadgeIconUrl() {
        return this.badgeIconUrl;
    }

    @NotNull
    /* renamed from: component5, reason: from getter */
    public final String getHeaderText() {
        return this.headerText;
    }

    @NotNull
    /* renamed from: component6, reason: from getter */
    public final InviteType getType() {
        return this.type;
    }

    /* renamed from: component7, reason: from getter */
    public final Integer getAcceptLabelBackgroundColor() {
        return this.acceptLabelBackgroundColor;
    }

    /* renamed from: component8, reason: from getter */
    public final Integer getAcceptLabelBorderColor() {
        return this.acceptLabelBorderColor;
    }

    /* renamed from: component9, reason: from getter */
    public final Integer getAcceptLabelColor() {
        return this.acceptLabelColor;
    }

    @NotNull
    public final GuildEventInviteEmbedImpl copy(int backgroundColor, int borderColor, @NotNull CodedLinkExtendedType extendedType, int headerColor, @NotNull String headerText, @NotNull InviteType type, Integer acceptLabelBackgroundColor, Integer acceptLabelBorderColor, Integer acceptLabelColor, String acceptLabelIcon, String acceptLabelText, String badgeCount, String badgeIcon, String bodyText, Integer bodyTextColor, Boolean canBeAccepted, String channelIcon, String channelName, StructurableText content, String creatorAvatar, Boolean embedCanBeTapped, String guildIcon, String guildName, String headerIcon, Integer headerTextColor, Boolean isRsvped, StructurableText locationContent, String memberText, String onlineText, Integer resolvingGradientEnd, Integer resolvingGradientStart, String secondaryActionIcon, Boolean splashHasRadialGradient, Integer splashOpacity, String splashUrl, String inviteSplash, String subtitle, Integer subtitleColor, Integer thumbnailBackgroundColor, Integer thumbnailCornerRadius, String thumbnailText, String thumbnailUrl, Integer titleColor, String titleText, String badgeIconUrl) {
        Intrinsics.checkNotNullParameter(extendedType, "extendedType");
        Intrinsics.checkNotNullParameter(headerText, "headerText");
        Intrinsics.checkNotNullParameter(type, "type");
        return new GuildEventInviteEmbedImpl(backgroundColor, borderColor, extendedType, headerColor, headerText, type, acceptLabelBackgroundColor, acceptLabelBorderColor, acceptLabelColor, acceptLabelIcon, acceptLabelText, badgeCount, badgeIcon, bodyText, bodyTextColor, canBeAccepted, channelIcon, channelName, content, creatorAvatar, embedCanBeTapped, guildIcon, guildName, headerIcon, headerTextColor, isRsvped, locationContent, memberText, onlineText, resolvingGradientEnd, resolvingGradientStart, secondaryActionIcon, splashHasRadialGradient, splashOpacity, splashUrl, inviteSplash, subtitle, subtitleColor, thumbnailBackgroundColor, thumbnailCornerRadius, thumbnailText, thumbnailUrl, titleColor, titleText, badgeIconUrl);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof GuildEventInviteEmbedImpl)) {
            return false;
        }
        GuildEventInviteEmbedImpl guildEventInviteEmbedImpl = (GuildEventInviteEmbedImpl) other;
        return this.backgroundColor == guildEventInviteEmbedImpl.backgroundColor && this.borderColor == guildEventInviteEmbedImpl.borderColor && this.extendedType == guildEventInviteEmbedImpl.extendedType && this.headerColor == guildEventInviteEmbedImpl.headerColor && Intrinsics.areEqual(this.headerText, guildEventInviteEmbedImpl.headerText) && this.type == guildEventInviteEmbedImpl.type && Intrinsics.areEqual(this.acceptLabelBackgroundColor, guildEventInviteEmbedImpl.acceptLabelBackgroundColor) && Intrinsics.areEqual(this.acceptLabelBorderColor, guildEventInviteEmbedImpl.acceptLabelBorderColor) && Intrinsics.areEqual(this.acceptLabelColor, guildEventInviteEmbedImpl.acceptLabelColor) && Intrinsics.areEqual(this.acceptLabelIcon, guildEventInviteEmbedImpl.acceptLabelIcon) && Intrinsics.areEqual(this.acceptLabelText, guildEventInviteEmbedImpl.acceptLabelText) && Intrinsics.areEqual(this.badgeCount, guildEventInviteEmbedImpl.badgeCount) && Intrinsics.areEqual(this.badgeIcon, guildEventInviteEmbedImpl.badgeIcon) && Intrinsics.areEqual(this.bodyText, guildEventInviteEmbedImpl.bodyText) && Intrinsics.areEqual(this.bodyTextColor, guildEventInviteEmbedImpl.bodyTextColor) && Intrinsics.areEqual(this.canBeAccepted, guildEventInviteEmbedImpl.canBeAccepted) && Intrinsics.areEqual(this.channelIcon, guildEventInviteEmbedImpl.channelIcon) && Intrinsics.areEqual(this.channelName, guildEventInviteEmbedImpl.channelName) && Intrinsics.areEqual(this.content, guildEventInviteEmbedImpl.content) && Intrinsics.areEqual(this.creatorAvatar, guildEventInviteEmbedImpl.creatorAvatar) && Intrinsics.areEqual(this.embedCanBeTapped, guildEventInviteEmbedImpl.embedCanBeTapped) && Intrinsics.areEqual(this.guildIcon, guildEventInviteEmbedImpl.guildIcon) && Intrinsics.areEqual(this.guildName, guildEventInviteEmbedImpl.guildName) && Intrinsics.areEqual(this.headerIcon, guildEventInviteEmbedImpl.headerIcon) && Intrinsics.areEqual(this.headerTextColor, guildEventInviteEmbedImpl.headerTextColor) && Intrinsics.areEqual(this.isRsvped, guildEventInviteEmbedImpl.isRsvped) && Intrinsics.areEqual(this.locationContent, guildEventInviteEmbedImpl.locationContent) && Intrinsics.areEqual(this.memberText, guildEventInviteEmbedImpl.memberText) && Intrinsics.areEqual(this.onlineText, guildEventInviteEmbedImpl.onlineText) && Intrinsics.areEqual(this.resolvingGradientEnd, guildEventInviteEmbedImpl.resolvingGradientEnd) && Intrinsics.areEqual(this.resolvingGradientStart, guildEventInviteEmbedImpl.resolvingGradientStart) && Intrinsics.areEqual(this.secondaryActionIcon, guildEventInviteEmbedImpl.secondaryActionIcon) && Intrinsics.areEqual(this.splashHasRadialGradient, guildEventInviteEmbedImpl.splashHasRadialGradient) && Intrinsics.areEqual(this.splashOpacity, guildEventInviteEmbedImpl.splashOpacity) && Intrinsics.areEqual(this.splashUrl, guildEventInviteEmbedImpl.splashUrl) && Intrinsics.areEqual(this.inviteSplash, guildEventInviteEmbedImpl.inviteSplash) && Intrinsics.areEqual(this.subtitle, guildEventInviteEmbedImpl.subtitle) && Intrinsics.areEqual(this.subtitleColor, guildEventInviteEmbedImpl.subtitleColor) && Intrinsics.areEqual(this.thumbnailBackgroundColor, guildEventInviteEmbedImpl.thumbnailBackgroundColor) && Intrinsics.areEqual(this.thumbnailCornerRadius, guildEventInviteEmbedImpl.thumbnailCornerRadius) && Intrinsics.areEqual(this.thumbnailText, guildEventInviteEmbedImpl.thumbnailText) && Intrinsics.areEqual(this.thumbnailUrl, guildEventInviteEmbedImpl.thumbnailUrl) && Intrinsics.areEqual(this.titleColor, guildEventInviteEmbedImpl.titleColor) && Intrinsics.areEqual(this.titleText, guildEventInviteEmbedImpl.titleText) && Intrinsics.areEqual(this.badgeIconUrl, guildEventInviteEmbedImpl.badgeIconUrl);
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getAcceptLabelBackgroundColor() {
        return this.acceptLabelBackgroundColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getAcceptLabelBorderColor() {
        return this.acceptLabelBorderColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getAcceptLabelColor() {
        return this.acceptLabelColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildEventInviteEmbed
    public String getAcceptLabelIcon() {
        return this.acceptLabelIcon;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getAcceptLabelText() {
        return this.acceptLabelText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public int getBackgroundColor() {
        return this.backgroundColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildEventInviteEmbed
    public String getBadgeCount() {
        return this.badgeCount;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildEventInviteEmbed
    public String getBadgeIcon() {
        return this.badgeIcon;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteEmbed
    public String getBadgeIconUrl() {
        return this.badgeIconUrl;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getBodyText() {
        return this.bodyText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getBodyTextColor() {
        return this.bodyTextColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public int getBorderColor() {
        return this.borderColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Boolean getCanBeAccepted() {
        return this.canBeAccepted;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteEmbed
    public String getChannelIcon() {
        return this.channelIcon;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteEmbed
    public String getChannelName() {
        return this.channelName;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildEventInviteEmbed
    public StructurableText getContent() {
        return this.content;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildEventInviteEmbed
    public String getCreatorAvatar() {
        return this.creatorAvatar;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Boolean getEmbedCanBeTapped() {
        return this.embedCanBeTapped;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteExtendedEmbed
    @NotNull
    public CodedLinkExtendedType getExtendedType() {
        return this.extendedType;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteExtendedEmbed
    public String getGuildIcon() {
        return this.guildIcon;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteExtendedEmbed
    public String getGuildName() {
        return this.guildName;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public int getHeaderColor() {
        return this.headerColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteExtendedEmbed
    public String getHeaderIcon() {
        return this.headerIcon;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    @NotNull
    public String getHeaderText() {
        return this.headerText;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildEventInviteEmbed
    public Integer getHeaderTextColor() {
        return this.headerTextColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getInviteSplash() {
        return this.inviteSplash;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildEventInviteEmbed
    public StructurableText getLocationContent() {
        return this.locationContent;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteEmbed
    public String getMemberText() {
        return this.memberText;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildInviteEmbed
    public String getOnlineText() {
        return this.onlineText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getResolvingGradientEnd() {
        return this.resolvingGradientEnd;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getResolvingGradientStart() {
        return this.resolvingGradientStart;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildEventInviteEmbed
    public String getSecondaryActionIcon() {
        return this.secondaryActionIcon;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Boolean getSplashHasRadialGradient() {
        return this.splashHasRadialGradient;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getSplashOpacity() {
        return this.splashOpacity;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getSplashUrl() {
        return this.splashUrl;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getSubtitle() {
        return this.subtitle;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getSubtitleColor() {
        return this.subtitleColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getThumbnailBackgroundColor() {
        return this.thumbnailBackgroundColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getThumbnailCornerRadius() {
        return this.thumbnailCornerRadius;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getThumbnailText() {
        return this.thumbnailText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getThumbnailUrl() {
        return this.thumbnailUrl;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getTitleColor() {
        return this.titleColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getTitleText() {
        return this.titleText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    @NotNull
    public InviteType getType() {
        return this.type;
    }

    public int hashCode() {
        int hashCode = (this.type.hashCode() + a3.e.d(a.u(this.headerColor, (this.extendedType.hashCode() + a.u(this.borderColor, Integer.hashCode(this.backgroundColor) * 31, 31)) * 31, 31), 31, this.headerText)) * 31;
        Integer num = this.acceptLabelBackgroundColor;
        int hashCode2 = (hashCode + (num == null ? 0 : num.hashCode())) * 31;
        Integer num2 = this.acceptLabelBorderColor;
        int hashCode3 = (hashCode2 + (num2 == null ? 0 : num2.hashCode())) * 31;
        Integer num3 = this.acceptLabelColor;
        int hashCode4 = (hashCode3 + (num3 == null ? 0 : num3.hashCode())) * 31;
        String str = this.acceptLabelIcon;
        int hashCode5 = (hashCode4 + (str == null ? 0 : str.hashCode())) * 31;
        String str2 = this.acceptLabelText;
        int hashCode6 = (hashCode5 + (str2 == null ? 0 : str2.hashCode())) * 31;
        String str3 = this.badgeCount;
        int hashCode7 = (hashCode6 + (str3 == null ? 0 : str3.hashCode())) * 31;
        String str4 = this.badgeIcon;
        int hashCode8 = (hashCode7 + (str4 == null ? 0 : str4.hashCode())) * 31;
        String str5 = this.bodyText;
        int hashCode9 = (hashCode8 + (str5 == null ? 0 : str5.hashCode())) * 31;
        Integer num4 = this.bodyTextColor;
        int hashCode10 = (hashCode9 + (num4 == null ? 0 : num4.hashCode())) * 31;
        Boolean bool = this.canBeAccepted;
        int hashCode11 = (hashCode10 + (bool == null ? 0 : bool.hashCode())) * 31;
        String str6 = this.channelIcon;
        int hashCode12 = (hashCode11 + (str6 == null ? 0 : str6.hashCode())) * 31;
        String str7 = this.channelName;
        int hashCode13 = (hashCode12 + (str7 == null ? 0 : str7.hashCode())) * 31;
        StructurableText structurableText = this.content;
        int hashCode14 = (hashCode13 + (structurableText == null ? 0 : structurableText.hashCode())) * 31;
        String str8 = this.creatorAvatar;
        int hashCode15 = (hashCode14 + (str8 == null ? 0 : str8.hashCode())) * 31;
        Boolean bool2 = this.embedCanBeTapped;
        int hashCode16 = (hashCode15 + (bool2 == null ? 0 : bool2.hashCode())) * 31;
        String str9 = this.guildIcon;
        int hashCode17 = (hashCode16 + (str9 == null ? 0 : str9.hashCode())) * 31;
        String str10 = this.guildName;
        int hashCode18 = (hashCode17 + (str10 == null ? 0 : str10.hashCode())) * 31;
        String str11 = this.headerIcon;
        int hashCode19 = (hashCode18 + (str11 == null ? 0 : str11.hashCode())) * 31;
        Integer num5 = this.headerTextColor;
        int hashCode20 = (hashCode19 + (num5 == null ? 0 : num5.hashCode())) * 31;
        Boolean bool3 = this.isRsvped;
        int hashCode21 = (hashCode20 + (bool3 == null ? 0 : bool3.hashCode())) * 31;
        StructurableText structurableText2 = this.locationContent;
        int hashCode22 = (hashCode21 + (structurableText2 == null ? 0 : structurableText2.hashCode())) * 31;
        String str12 = this.memberText;
        int hashCode23 = (hashCode22 + (str12 == null ? 0 : str12.hashCode())) * 31;
        String str13 = this.onlineText;
        int hashCode24 = (hashCode23 + (str13 == null ? 0 : str13.hashCode())) * 31;
        Integer num6 = this.resolvingGradientEnd;
        int hashCode25 = (hashCode24 + (num6 == null ? 0 : num6.hashCode())) * 31;
        Integer num7 = this.resolvingGradientStart;
        int hashCode26 = (hashCode25 + (num7 == null ? 0 : num7.hashCode())) * 31;
        String str14 = this.secondaryActionIcon;
        int hashCode27 = (hashCode26 + (str14 == null ? 0 : str14.hashCode())) * 31;
        Boolean bool4 = this.splashHasRadialGradient;
        int hashCode28 = (hashCode27 + (bool4 == null ? 0 : bool4.hashCode())) * 31;
        Integer num8 = this.splashOpacity;
        int hashCode29 = (hashCode28 + (num8 == null ? 0 : num8.hashCode())) * 31;
        String str15 = this.splashUrl;
        int hashCode30 = (hashCode29 + (str15 == null ? 0 : str15.hashCode())) * 31;
        String str16 = this.inviteSplash;
        int hashCode31 = (hashCode30 + (str16 == null ? 0 : str16.hashCode())) * 31;
        String str17 = this.subtitle;
        int hashCode32 = (hashCode31 + (str17 == null ? 0 : str17.hashCode())) * 31;
        Integer num9 = this.subtitleColor;
        int hashCode33 = (hashCode32 + (num9 == null ? 0 : num9.hashCode())) * 31;
        Integer num10 = this.thumbnailBackgroundColor;
        int hashCode34 = (hashCode33 + (num10 == null ? 0 : num10.hashCode())) * 31;
        Integer num11 = this.thumbnailCornerRadius;
        int hashCode35 = (hashCode34 + (num11 == null ? 0 : num11.hashCode())) * 31;
        String str18 = this.thumbnailText;
        int hashCode36 = (hashCode35 + (str18 == null ? 0 : str18.hashCode())) * 31;
        String str19 = this.thumbnailUrl;
        int hashCode37 = (hashCode36 + (str19 == null ? 0 : str19.hashCode())) * 31;
        Integer num12 = this.titleColor;
        int hashCode38 = (hashCode37 + (num12 == null ? 0 : num12.hashCode())) * 31;
        String str20 = this.titleText;
        int hashCode39 = (hashCode38 + (str20 == null ? 0 : str20.hashCode())) * 31;
        String str21 = this.badgeIconUrl;
        return hashCode39 + (str21 != null ? str21.hashCode() : 0);
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildEventInviteEmbed
    public Boolean isRsvped() {
        return this.isRsvped;
    }

    @NotNull
    public String toString() {
        int i5 = this.backgroundColor;
        int i6 = this.borderColor;
        CodedLinkExtendedType codedLinkExtendedType = this.extendedType;
        int i10 = this.headerColor;
        String str = this.headerText;
        InviteType inviteType = this.type;
        Integer num = this.acceptLabelBackgroundColor;
        Integer num2 = this.acceptLabelBorderColor;
        Integer num3 = this.acceptLabelColor;
        String str2 = this.acceptLabelIcon;
        String str3 = this.acceptLabelText;
        String str4 = this.badgeCount;
        String str5 = this.badgeIcon;
        String str6 = this.bodyText;
        Integer num4 = this.bodyTextColor;
        Boolean bool = this.canBeAccepted;
        String str7 = this.channelIcon;
        String str8 = this.channelName;
        StructurableText structurableText = this.content;
        String str9 = this.creatorAvatar;
        Boolean bool2 = this.embedCanBeTapped;
        String str10 = this.guildIcon;
        String str11 = this.guildName;
        String str12 = this.headerIcon;
        Integer num5 = this.headerTextColor;
        Boolean bool3 = this.isRsvped;
        StructurableText structurableText2 = this.locationContent;
        String str13 = this.memberText;
        String str14 = this.onlineText;
        Integer num6 = this.resolvingGradientEnd;
        Integer num7 = this.resolvingGradientStart;
        String str15 = this.secondaryActionIcon;
        Boolean bool4 = this.splashHasRadialGradient;
        Integer num8 = this.splashOpacity;
        String str16 = this.splashUrl;
        String str17 = this.inviteSplash;
        String str18 = this.subtitle;
        Integer num9 = this.subtitleColor;
        Integer num10 = this.thumbnailBackgroundColor;
        Integer num11 = this.thumbnailCornerRadius;
        String str19 = this.thumbnailText;
        String str20 = this.thumbnailUrl;
        Integer num12 = this.titleColor;
        String str21 = this.titleText;
        String str22 = this.badgeIconUrl;
        StringBuilder q5 = a3.e.q(i5, "GuildEventInviteEmbedImpl(backgroundColor=", i6, ", borderColor=", ", extendedType=");
        q5.append(codedLinkExtendedType);
        q5.append(", headerColor=");
        q5.append(i10);
        q5.append(", headerText=");
        q5.append(str);
        q5.append(", type=");
        q5.append(inviteType);
        q5.append(", acceptLabelBackgroundColor=");
        d.s(q5, num, ", acceptLabelBorderColor=", num2, ", acceptLabelColor=");
        d.r(num3, ", acceptLabelIcon=", str2, ", acceptLabelText=", q5);
        a3.e.A(q5, str3, ", badgeCount=", str4, ", badgeIcon=");
        a3.e.A(q5, str5, ", bodyText=", str6, ", bodyTextColor=");
        q5.append(num4);
        q5.append(", canBeAccepted=");
        q5.append(bool);
        q5.append(", channelIcon=");
        a3.e.A(q5, str7, ", channelName=", str8, ", content=");
        q5.append(structurableText);
        q5.append(", creatorAvatar=");
        q5.append(str9);
        q5.append(", embedCanBeTapped=");
        q5.append(bool2);
        q5.append(", guildIcon=");
        q5.append(str10);
        q5.append(", guildName=");
        a3.e.A(q5, str11, ", headerIcon=", str12, ", headerTextColor=");
        q5.append(num5);
        q5.append(", isRsvped=");
        q5.append(bool3);
        q5.append(", locationContent=");
        q5.append(structurableText2);
        q5.append(", memberText=");
        q5.append(str13);
        q5.append(", onlineText=");
        a.r(num6, str14, ", resolvingGradientEnd=", ", resolvingGradientStart=", q5);
        d.r(num7, ", secondaryActionIcon=", str15, ", splashHasRadialGradient=", q5);
        q5.append(bool4);
        q5.append(", splashOpacity=");
        q5.append(num8);
        q5.append(", splashUrl=");
        a3.e.A(q5, str16, ", inviteSplash=", str17, ", subtitle=");
        a.r(num9, str18, ", subtitleColor=", ", thumbnailBackgroundColor=", q5);
        d.s(q5, num10, ", thumbnailCornerRadius=", num11, ", thumbnailText=");
        a3.e.A(q5, str19, ", thumbnailUrl=", str20, ", titleColor=");
        d.r(num12, ", titleText=", str21, ", badgeIconUrl=", q5);
        return a.j(q5, str22, ")");
    }

    /*  JADX ERROR: NullPointerException in pass: InitCodeVariables
        java.lang.NullPointerException: Cannot invoke "jadx.core.dex.instructions.args.SSAVar.getPhiList()" because "resultVar" is null
        	at jadx.core.dex.visitors.InitCodeVariables.collectConnectedVars(InitCodeVariables.java:119)
        	at jadx.core.dex.visitors.InitCodeVariables.setCodeVar(InitCodeVariables.java:82)
        	at jadx.core.dex.visitors.InitCodeVariables.initCodeVar(InitCodeVariables.java:74)
        	at jadx.core.dex.visitors.InitCodeVariables.initCodeVars(InitCodeVariables.java:48)
        	at jadx.core.dex.visitors.InitCodeVariables.visit(InitCodeVariables.java:29)
        */
    public /* synthetic */ GuildEventInviteEmbedImpl(int r50, int r51, com.discord.chat.bridge.codedlinks.CodedLinkExtendedType r52, int r53, java.lang.String r54, com.discord.chat.bridge.codedlinks.InviteType r55, java.lang.Integer r56, java.lang.Integer r57, java.lang.Integer r58, java.lang.String r59, java.lang.String r60, java.lang.String r61, java.lang.String r62, java.lang.String r63, java.lang.Integer r64, java.lang.Boolean r65, java.lang.String r66, java.lang.String r67, com.discord.chat.bridge.structurabletext.StructurableText r68, java.lang.String r69, java.lang.Boolean r70, java.lang.String r71, java.lang.String r72, java.lang.String r73, java.lang.Integer r74, java.lang.Boolean r75, com.discord.chat.bridge.structurabletext.StructurableText r76, java.lang.String r77, java.lang.String r78, java.lang.Integer r79, java.lang.Integer r80, java.lang.String r81, java.lang.Boolean r82, java.lang.Integer r83, java.lang.String r84, java.lang.String r85, java.lang.String r86, java.lang.Integer r87, java.lang.Integer r88, java.lang.Integer r89, java.lang.String r90, java.lang.String r91, java.lang.Integer r92, java.lang.String r93, java.lang.String r94, int r95, int r96, kotlin.jvm.internal.DefaultConstructorMarker r97) {
        /*
            Method dump skipped, instructions count: 406
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.discord.chat.bridge.codedlinks.GuildEventInviteEmbedImpl.<init>(int, int, com.discord.chat.bridge.codedlinks.CodedLinkExtendedType, int, java.lang.String, com.discord.chat.bridge.codedlinks.InviteType, java.lang.Integer, java.lang.Integer, java.lang.Integer, java.lang.String, java.lang.String, java.lang.String, java.lang.String, java.lang.String, java.lang.Integer, java.lang.Boolean, java.lang.String, java.lang.String, com.discord.chat.bridge.structurabletext.StructurableText, java.lang.String, java.lang.Boolean, java.lang.String, java.lang.String, java.lang.String, java.lang.Integer, java.lang.Boolean, com.discord.chat.bridge.structurabletext.StructurableText, java.lang.String, java.lang.String, java.lang.Integer, java.lang.Integer, java.lang.String, java.lang.Boolean, java.lang.Integer, java.lang.String, java.lang.String, java.lang.String, java.lang.Integer, java.lang.Integer, java.lang.Integer, java.lang.String, java.lang.String, java.lang.Integer, java.lang.String, java.lang.String, int, int, kotlin.jvm.internal.DefaultConstructorMarker):void");
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public GuildEventInviteEmbedImpl(int i5, int i6, @NotNull CodedLinkExtendedType extendedType, int i10, @NotNull String headerText, @NotNull InviteType type, Integer num, Integer num2, Integer num3, String str, String str2, String str3, String str4, String str5, Integer num4, Boolean bool, String str6, String str7, StructurableText structurableText, String str8, Boolean bool2, String str9, String str10, String str11, Integer num5, Boolean bool3, StructurableText structurableText2, String str12, String str13, Integer num6, Integer num7, String str14, Boolean bool4, Integer num8, String str15, String str16, String str17, Integer num9, Integer num10, Integer num11, String str18, String str19, Integer num12, String str20, String str21) {
        super(null);
        Intrinsics.checkNotNullParameter(extendedType, "extendedType");
        Intrinsics.checkNotNullParameter(headerText, "headerText");
        Intrinsics.checkNotNullParameter(type, "type");
        this.backgroundColor = i5;
        this.borderColor = i6;
        this.extendedType = extendedType;
        this.headerColor = i10;
        this.headerText = headerText;
        this.type = type;
        this.acceptLabelBackgroundColor = num;
        this.acceptLabelBorderColor = num2;
        this.acceptLabelColor = num3;
        this.acceptLabelIcon = str;
        this.acceptLabelText = str2;
        this.badgeCount = str3;
        this.badgeIcon = str4;
        this.bodyText = str5;
        this.bodyTextColor = num4;
        this.canBeAccepted = bool;
        this.channelIcon = str6;
        this.channelName = str7;
        this.content = structurableText;
        this.creatorAvatar = str8;
        this.embedCanBeTapped = bool2;
        this.guildIcon = str9;
        this.guildName = str10;
        this.headerIcon = str11;
        this.headerTextColor = num5;
        this.isRsvped = bool3;
        this.locationContent = structurableText2;
        this.memberText = str12;
        this.onlineText = str13;
        this.resolvingGradientEnd = num6;
        this.resolvingGradientStart = num7;
        this.secondaryActionIcon = str14;
        this.splashHasRadialGradient = bool4;
        this.splashOpacity = num8;
        this.splashUrl = str15;
        this.inviteSplash = str16;
        this.subtitle = str17;
        this.subtitleColor = num9;
        this.thumbnailBackgroundColor = num10;
        this.thumbnailCornerRadius = num11;
        this.thumbnailText = str18;
        this.thumbnailUrl = str19;
        this.titleColor = num12;
        this.titleText = str20;
        this.badgeIconUrl = str21;
    }
}
