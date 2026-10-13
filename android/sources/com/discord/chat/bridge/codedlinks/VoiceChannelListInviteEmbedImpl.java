package com.discord.chat.bridge.codedlinks;

import androidx.recyclerview.widget.RecyclerView;
import bs.d;
import bs.g;
import bs.h1;
import bs.o0;
import bs.t0;
import bs.v1;
import com.discord.chat.bridge.codedlinks.CodedLinkExtendedType;
import com.discord.chat.bridge.codedlinks.InviteType;
import com.discord.jank_stats.JankRecordStore;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.uimanager.events.PointerEventHelper;
import fo.l;
import fo.m;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import o5.a;
import org.jetbrains.annotations.NotNull;
import org.webrtc.PeerConnection;
import xr.e;

@e
@Metadata(d1 = {"\u0000l\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0012\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\\\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 \u009f\u00012\u00020\u00012\u00020\u0002:\u0004\u009e\u0001\u009f\u0001B¯\u0003\u0012\b\b\u0001\u0010\u0003\u001a\u00020\u0004\u0012\n\b\u0003\u0010\u0005\u001a\u0004\u0018\u00010\u0004\u0012\b\b\u0001\u0010\u0006\u001a\u00020\u0004\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\n\b\u0003\u0010\t\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\b\u0012\b\b\u0001\u0010\u000b\u001a\u00020\u0004\u0012\b\b\u0001\u0010\f\u001a\u00020\u0004\u0012\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u000e\u0012\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u000e\u0012\b\b\u0001\u0010\u0010\u001a\u00020\u0004\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\u000e\u0012\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u0018\u001a\u0004\u0018\u00010\b\u0012\n\b\u0003\u0010\u0019\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0003\u0010\u001a\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\b\u0012\b\b\u0001\u0010\u001e\u001a\u00020\u0004\u0012\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010 \u001a\u0004\u0018\u00010!\u0012\b\b\u0002\u0010\"\u001a\u00020#\u0012\n\b\u0002\u0010$\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\b\u0012\u0010\b\u0002\u0010&\u001a\n\u0012\u0004\u0012\u00020(\u0018\u00010'\u0012\n\b\u0002\u0010)\u001a\u0004\u0018\u00010*\u0012\u0006\u0010+\u001a\u00020\b\u0012\u0006\u0010,\u001a\u00020\b\u0012\b\b\u0001\u0010-\u001a\u00020\u0004\u0012\b\b\u0002\u0010.\u001a\u00020\u000e\u0012\b\b\u0002\u0010/\u001a\u00020\u000e\u0012\u0006\u00100\u001a\u00020\b¢\u0006\u0004\b1\u00102B\u0093\u0003\b\u0010\u0012\u0006\u00103\u001a\u00020\u0004\u0012\u0006\u00104\u001a\u00020\u0004\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0004\u0012\u0006\u0010\u0006\u001a\u00020\u0004\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\n\u001a\u0004\u0018\u00010\b\u0012\u0006\u0010\u000b\u001a\u00020\u0004\u0012\u0006\u0010\f\u001a\u00020\u0004\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u000e\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\u000e\u0012\u0006\u0010\u0010\u001a\u00020\u0004\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u0013\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u0014\u001a\u0004\u0018\u00010\u000e\u0012\b\u0010\u0015\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u0016\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u0017\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u0018\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u0019\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u001a\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u001b\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u001c\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u001d\u001a\u0004\u0018\u00010\b\u0012\u0006\u0010\u001e\u001a\u00020\u0004\u0012\b\u0010\u001f\u001a\u0004\u0018\u00010\b\u0012\b\u0010 \u001a\u0004\u0018\u00010!\u0012\b\u0010\"\u001a\u0004\u0018\u00010#\u0012\b\u0010$\u001a\u0004\u0018\u00010\b\u0012\b\u0010%\u001a\u0004\u0018\u00010\b\u0012\u000e\u0010&\u001a\n\u0012\u0004\u0012\u00020(\u0018\u00010'\u0012\b\u0010)\u001a\u0004\u0018\u00010*\u0012\b\u0010+\u001a\u0004\u0018\u00010\b\u0012\b\u0010,\u001a\u0004\u0018\u00010\b\u0012\u0006\u0010-\u001a\u00020\u0004\u0012\u0006\u0010.\u001a\u00020\u000e\u0012\u0006\u0010/\u001a\u00020\u000e\u0012\b\u00100\u001a\u0004\u0018\u00010\b\u0012\b\u00105\u001a\u0004\u0018\u000106¢\u0006\u0004\b1\u00107J\t\u0010i\u001a\u00020\u0004HÆ\u0003J\u0010\u0010j\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00109J\t\u0010k\u001a\u00020\u0004HÆ\u0003J\t\u0010l\u001a\u00020\bHÆ\u0003J\u0010\u0010m\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00109J\u000b\u0010n\u001a\u0004\u0018\u00010\bHÆ\u0003J\t\u0010o\u001a\u00020\u0004HÆ\u0003J\t\u0010p\u001a\u00020\u0004HÆ\u0003J\u0010\u0010q\u001a\u0004\u0018\u00010\u000eHÆ\u0003¢\u0006\u0002\u0010EJ\u0010\u0010r\u001a\u0004\u0018\u00010\u000eHÆ\u0003¢\u0006\u0002\u0010EJ\t\u0010s\u001a\u00020\u0004HÆ\u0003J\u000b\u0010t\u001a\u0004\u0018\u00010\bHÆ\u0003J\u0010\u0010u\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00109J\u0010\u0010v\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00109J\u0010\u0010w\u001a\u0004\u0018\u00010\u000eHÆ\u0003¢\u0006\u0002\u0010EJ\u0010\u0010x\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00109J\u000b\u0010y\u001a\u0004\u0018\u00010\bHÆ\u0003J\u000b\u0010z\u001a\u0004\u0018\u00010\bHÆ\u0003J\u000b\u0010{\u001a\u0004\u0018\u00010\bHÆ\u0003J\u0010\u0010|\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00109J\u0010\u0010}\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00109J\u0010\u0010~\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00109J\u000b\u0010\u007f\u001a\u0004\u0018\u00010\bHÆ\u0003J\f\u0010\u0080\u0001\u001a\u0004\u0018\u00010\bHÆ\u0003J\n\u0010\u0081\u0001\u001a\u00020\u0004HÆ\u0003J\f\u0010\u0082\u0001\u001a\u0004\u0018\u00010\bHÆ\u0003J\f\u0010\u0083\u0001\u001a\u0004\u0018\u00010!HÆ\u0003J\n\u0010\u0084\u0001\u001a\u00020#HÆ\u0003J\f\u0010\u0085\u0001\u001a\u0004\u0018\u00010\bHÆ\u0003J\f\u0010\u0086\u0001\u001a\u0004\u0018\u00010\bHÆ\u0003J\u0012\u0010\u0087\u0001\u001a\n\u0012\u0004\u0012\u00020(\u0018\u00010'HÆ\u0003J\u0011\u0010\u0088\u0001\u001a\u0004\u0018\u00010*HÆ\u0003¢\u0006\u0002\u0010aJ\n\u0010\u0089\u0001\u001a\u00020\bHÆ\u0003J\n\u0010\u008a\u0001\u001a\u00020\bHÆ\u0003J\n\u0010\u008b\u0001\u001a\u00020\u0004HÆ\u0003J\n\u0010\u008c\u0001\u001a\u00020\u000eHÆ\u0003J\n\u0010\u008d\u0001\u001a\u00020\u000eHÆ\u0003J\n\u0010\u008e\u0001\u001a\u00020\bHÆ\u0003JÂ\u0003\u0010\u008f\u0001\u001a\u00020\u00002\b\b\u0003\u0010\u0003\u001a\u00020\u00042\n\b\u0003\u0010\u0005\u001a\u0004\u0018\u00010\u00042\b\b\u0003\u0010\u0006\u001a\u00020\u00042\b\b\u0002\u0010\u0007\u001a\u00020\b2\n\b\u0003\u0010\t\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\b2\b\b\u0003\u0010\u000b\u001a\u00020\u00042\b\b\u0003\u0010\f\u001a\u00020\u00042\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u000e2\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u000e2\b\b\u0003\u0010\u0010\u001a\u00020\u00042\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\u000e2\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u0018\u001a\u0004\u0018\u00010\b2\n\b\u0003\u0010\u0019\u001a\u0004\u0018\u00010\u00042\n\b\u0003\u0010\u001a\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\b2\b\b\u0003\u0010\u001e\u001a\u00020\u00042\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010 \u001a\u0004\u0018\u00010!2\b\b\u0002\u0010\"\u001a\u00020#2\n\b\u0002\u0010$\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\b2\u0010\b\u0002\u0010&\u001a\n\u0012\u0004\u0012\u00020(\u0018\u00010'2\n\b\u0002\u0010)\u001a\u0004\u0018\u00010*2\b\b\u0002\u0010+\u001a\u00020\b2\b\b\u0002\u0010,\u001a\u00020\b2\b\b\u0003\u0010-\u001a\u00020\u00042\b\b\u0002\u0010.\u001a\u00020\u000e2\b\b\u0002\u0010/\u001a\u00020\u000e2\b\b\u0002\u00100\u001a\u00020\bHÆ\u0001¢\u0006\u0003\u0010\u0090\u0001J\u0016\u0010\u0091\u0001\u001a\u00020\u000e2\n\u0010\u0092\u0001\u001a\u0005\u0018\u00010\u0093\u0001HÖ\u0003J\n\u0010\u0094\u0001\u001a\u00020\u0004HÖ\u0001J\n\u0010\u0095\u0001\u001a\u00020\bHÖ\u0001J-\u0010\u0096\u0001\u001a\u00030\u0097\u00012\u0007\u0010\u0098\u0001\u001a\u00020\u00002\b\u0010\u0099\u0001\u001a\u00030\u009a\u00012\b\u0010\u009b\u0001\u001a\u00030\u009c\u0001H\u0001¢\u0006\u0003\b\u009d\u0001R\u0014\u0010\u0003\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b8\u00109R\u0018\u0010\u0005\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u0010;\u001a\u0004\b:\u00109R\u0014\u0010\u0006\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b<\u00109R\u0014\u0010\u0007\u001a\u00020\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b=\u0010>R\u0018\u0010\t\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u0010;\u001a\u0004\b?\u00109R\u0016\u0010\n\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b@\u0010>R\u0014\u0010\u000b\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bA\u0010BR\u0014\u0010\f\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bC\u0010BR\u0018\u0010\r\u001a\u0004\u0018\u00010\u000eX\u0096\u0004¢\u0006\n\n\u0002\u0010F\u001a\u0004\bD\u0010ER\u0018\u0010\u000f\u001a\u0004\u0018\u00010\u000eX\u0096\u0004¢\u0006\n\n\u0002\u0010F\u001a\u0004\bG\u0010ER\u0014\u0010\u0010\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bH\u0010BR\u0016\u0010\u0011\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bI\u0010>R\u0018\u0010\u0012\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u0010;\u001a\u0004\bJ\u00109R\u0018\u0010\u0013\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u0010;\u001a\u0004\bK\u00109R\u0018\u0010\u0014\u001a\u0004\u0018\u00010\u000eX\u0096\u0004¢\u0006\n\n\u0002\u0010F\u001a\u0004\bL\u0010ER\u0018\u0010\u0015\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u0010;\u001a\u0004\bM\u00109R\u0016\u0010\u0016\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bN\u0010>R\u0016\u0010\u0017\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bO\u0010>R\u0016\u0010\u0018\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bP\u0010>R\u0018\u0010\u0019\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u0010;\u001a\u0004\bQ\u00109R\u0018\u0010\u001a\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u0010;\u001a\u0004\bR\u00109R\u0018\u0010\u001b\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u0010;\u001a\u0004\bS\u00109R\u0016\u0010\u001c\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bT\u0010>R\u0016\u0010\u001d\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bU\u0010>R\u0014\u0010\u001e\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bV\u00109R\u0016\u0010\u001f\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bW\u0010>R\u0016\u0010 \u001a\u0004\u0018\u00010!X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bX\u0010YR\u0014\u0010\"\u001a\u00020#X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bZ\u0010[R\u0016\u0010$\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\\\u0010>R\u0016\u0010%\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b]\u0010>R\u001c\u0010&\u001a\n\u0012\u0004\u0012\u00020(\u0018\u00010'X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b^\u0010_R\u0018\u0010)\u001a\u0004\u0018\u00010*X\u0096\u0004¢\u0006\n\n\u0002\u0010b\u001a\u0004\b`\u0010aR\u0014\u0010+\u001a\u00020\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bc\u0010>R\u0014\u0010,\u001a\u00020\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bd\u0010>R\u0014\u0010-\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\be\u0010BR\u0014\u0010.\u001a\u00020\u000eX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bf\u0010gR\u0014\u0010/\u001a\u00020\u000eX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b/\u0010gR\u0014\u00100\u001a\u00020\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bh\u0010>¨\u0006 \u0001"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/VoiceChannelListInviteEmbedImpl;", "Lcom/discord/chat/bridge/codedlinks/CodedLinkEmbed;", "Lcom/discord/chat/bridge/codedlinks/VoiceChannelListInviteEmbed;", "acceptLabelBackgroundColor", "", "acceptLabelBorderColor", "acceptLabelColor", "acceptLabelText", "", "bodyTextColor", "bodyText", ViewProps.BACKGROUND_COLOR, ViewProps.BORDER_COLOR, "canBeAccepted", "", "embedCanBeTapped", "headerColor", "headerText", "resolvingGradientEnd", "resolvingGradientStart", "splashHasRadialGradient", "splashOpacity", "splashUrl", "inviteSplash", "subtitle", "subtitleColor", "thumbnailBackgroundColor", "thumbnailCornerRadius", "thumbnailText", "thumbnailUrl", "titleColor", "titleText", "type", "Lcom/discord/chat/bridge/codedlinks/InviteType;", "extendedType", "Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;", "guildIcon", "guildName", "voiceUsers", "", "Lcom/discord/chat/bridge/codedlinks/VoiceUser;", "voiceStartTimestamp", "", "emptyStateText", "streamingLabel", "voiceHeaderBackgroundColor", "reducedMotion", "isConnected", "privacyHintText", "<init>", "(ILjava/lang/Integer;ILjava/lang/String;Ljava/lang/Integer;Ljava/lang/String;IILjava/lang/Boolean;Ljava/lang/Boolean;ILjava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;IZZLjava/lang/String;)V", "seen0", "seen1", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IIILjava/lang/Integer;ILjava/lang/String;Ljava/lang/Integer;Ljava/lang/String;IILjava/lang/Boolean;Ljava/lang/Boolean;ILjava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;IZZLjava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getAcceptLabelBackgroundColor", "()Ljava/lang/Integer;", "getAcceptLabelBorderColor", "Ljava/lang/Integer;", "getAcceptLabelColor", "getAcceptLabelText", "()Ljava/lang/String;", "getBodyTextColor", "getBodyText", "getBackgroundColor", "()I", "getBorderColor", "getCanBeAccepted", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "getEmbedCanBeTapped", "getHeaderColor", "getHeaderText", "getResolvingGradientEnd", "getResolvingGradientStart", "getSplashHasRadialGradient", "getSplashOpacity", "getSplashUrl", "getInviteSplash", "getSubtitle", "getSubtitleColor", "getThumbnailBackgroundColor", "getThumbnailCornerRadius", "getThumbnailText", "getThumbnailUrl", "getTitleColor", "getTitleText", "getType", "()Lcom/discord/chat/bridge/codedlinks/InviteType;", "getExtendedType", "()Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;", "getGuildIcon", "getGuildName", "getVoiceUsers", "()Ljava/util/List;", "getVoiceStartTimestamp", "()Ljava/lang/Long;", "Ljava/lang/Long;", "getEmptyStateText", "getStreamingLabel", "getVoiceHeaderBackgroundColor", "getReducedMotion", "()Z", "getPrivacyHintText", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "component14", "component15", "component16", "component17", "component18", "component19", "component20", "component21", "component22", "component23", "component24", "component25", "component26", "component27", "component28", "component29", "component30", "component31", "component32", "component33", "component34", "component35", "component36", "component37", "component38", "copy", "(ILjava/lang/Integer;ILjava/lang/String;Ljava/lang/Integer;Ljava/lang/String;IILjava/lang/Boolean;Ljava/lang/Boolean;ILjava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/Long;Ljava/lang/String;Ljava/lang/String;IZZLjava/lang/String;)Lcom/discord/chat/bridge/codedlinks/VoiceChannelListInviteEmbedImpl;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class VoiceChannelListInviteEmbedImpl extends CodedLinkEmbed implements VoiceChannelListInviteEmbed {
    private final int acceptLabelBackgroundColor;
    private final Integer acceptLabelBorderColor;
    private final int acceptLabelColor;

    @NotNull
    private final String acceptLabelText;
    private final int backgroundColor;
    private final String bodyText;
    private final Integer bodyTextColor;
    private final int borderColor;
    private final Boolean canBeAccepted;
    private final Boolean embedCanBeTapped;

    @NotNull
    private final String emptyStateText;

    @NotNull
    private final CodedLinkExtendedType extendedType;
    private final String guildIcon;
    private final String guildName;
    private final int headerColor;
    private final String headerText;
    private final String inviteSplash;
    private final boolean isConnected;

    @NotNull
    private final String privacyHintText;
    private final boolean reducedMotion;
    private final Integer resolvingGradientEnd;
    private final Integer resolvingGradientStart;
    private final Boolean splashHasRadialGradient;
    private final Integer splashOpacity;
    private final String splashUrl;

    @NotNull
    private final String streamingLabel;
    private final String subtitle;
    private final Integer subtitleColor;
    private final Integer thumbnailBackgroundColor;
    private final Integer thumbnailCornerRadius;
    private final String thumbnailText;
    private final String thumbnailUrl;
    private final int titleColor;
    private final String titleText;
    private final InviteType type;
    private final int voiceHeaderBackgroundColor;
    private final Long voiceStartTimestamp;
    private final List<VoiceUser> voiceUsers;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy[] $childSerializers = {null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, l.b(m.f8827e, new a(6)), null, null, null, null, null, null, null};

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/VoiceChannelListInviteEmbedImpl$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/codedlinks/VoiceChannelListInviteEmbedImpl;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return VoiceChannelListInviteEmbedImpl$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ VoiceChannelListInviteEmbedImpl(int i5, int i6, int i10, Integer num, int i11, String str, Integer num2, String str2, int i12, int i13, Boolean bool, Boolean bool2, int i14, String str3, Integer num3, Integer num4, Boolean bool3, Integer num5, String str4, String str5, String str6, Integer num6, Integer num7, Integer num8, String str7, String str8, int i15, String str9, InviteType inviteType, CodedLinkExtendedType codedLinkExtendedType, String str10, String str11, List list, Long l6, String str12, String str13, int i16, boolean z5, boolean z6, String str14, SerializationConstructorMarker serializationConstructorMarker) {
        super(r2);
        DefaultConstructorMarker defaultConstructorMarker = null;
        if ((16780493 != (i5 & 16780493)) || (39 != (i6 & 39))) {
            h1.k(new int[]{i5, i6}, new int[]{16780493, 39}, VoiceChannelListInviteEmbedImpl$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        this.acceptLabelBackgroundColor = i10;
        if ((i5 & 2) == 0) {
            this.acceptLabelBorderColor = null;
        } else {
            this.acceptLabelBorderColor = num;
        }
        this.acceptLabelColor = i11;
        this.acceptLabelText = str;
        if ((i5 & 16) == 0) {
            this.bodyTextColor = null;
        } else {
            this.bodyTextColor = num2;
        }
        if ((i5 & 32) == 0) {
            this.bodyText = null;
        } else {
            this.bodyText = str2;
        }
        this.backgroundColor = i12;
        this.borderColor = i13;
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0) {
            this.canBeAccepted = null;
        } else {
            this.canBeAccepted = bool;
        }
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0) {
            this.embedCanBeTapped = null;
        } else {
            this.embedCanBeTapped = bool2;
        }
        this.headerColor = i14;
        this.headerText = str3;
        if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
            this.resolvingGradientEnd = null;
        } else {
            this.resolvingGradientEnd = num3;
        }
        if ((i5 & 8192) == 0) {
            this.resolvingGradientStart = null;
        } else {
            this.resolvingGradientStart = num4;
        }
        if ((i5 & 16384) == 0) {
            this.splashHasRadialGradient = null;
        } else {
            this.splashHasRadialGradient = bool3;
        }
        if ((32768 & i5) == 0) {
            this.splashOpacity = null;
        } else {
            this.splashOpacity = num5;
        }
        if ((65536 & i5) == 0) {
            this.splashUrl = null;
        } else {
            this.splashUrl = str4;
        }
        if ((131072 & i5) == 0) {
            this.inviteSplash = null;
        } else {
            this.inviteSplash = str5;
        }
        if ((262144 & i5) == 0) {
            this.subtitle = null;
        } else {
            this.subtitle = str6;
        }
        if ((524288 & i5) == 0) {
            this.subtitleColor = null;
        } else {
            this.subtitleColor = num6;
        }
        if ((1048576 & i5) == 0) {
            this.thumbnailBackgroundColor = null;
        } else {
            this.thumbnailBackgroundColor = num7;
        }
        if ((2097152 & i5) == 0) {
            this.thumbnailCornerRadius = null;
        } else {
            this.thumbnailCornerRadius = num8;
        }
        if ((4194304 & i5) == 0) {
            this.thumbnailText = null;
        } else {
            this.thumbnailText = str7;
        }
        if ((8388608 & i5) == 0) {
            this.thumbnailUrl = null;
        } else {
            this.thumbnailUrl = str8;
        }
        this.titleColor = i15;
        if ((33554432 & i5) == 0) {
            this.titleText = null;
        } else {
            this.titleText = str9;
        }
        if ((67108864 & i5) == 0) {
            this.type = null;
        } else {
            this.type = inviteType;
        }
        this.extendedType = (134217728 & i5) == 0 ? CodedLinkExtendedType.VOICE_CHANNEL_LIST_INVITE : codedLinkExtendedType;
        if ((268435456 & i5) == 0) {
            this.guildIcon = null;
        } else {
            this.guildIcon = str10;
        }
        if ((536870912 & i5) == 0) {
            this.guildName = null;
        } else {
            this.guildName = str11;
        }
        if ((1073741824 & i5) == 0) {
            this.voiceUsers = null;
        } else {
            this.voiceUsers = list;
        }
        if ((i5 & Integer.MIN_VALUE) == 0) {
            this.voiceStartTimestamp = null;
        } else {
            this.voiceStartTimestamp = l6;
        }
        this.emptyStateText = str12;
        this.streamingLabel = str13;
        this.voiceHeaderBackgroundColor = i16;
        if ((i6 & 8) == 0) {
            this.reducedMotion = false;
        } else {
            this.reducedMotion = z5;
        }
        if ((i6 & 16) == 0) {
            this.isConnected = false;
        } else {
            this.isConnected = z6;
        }
        this.privacyHintText = str14;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return new d(VoiceUser$$serializer.INSTANCE, 0);
    }

    public static /* synthetic */ VoiceChannelListInviteEmbedImpl copy$default(VoiceChannelListInviteEmbedImpl voiceChannelListInviteEmbedImpl, int i5, Integer num, int i6, String str, Integer num2, String str2, int i10, int i11, Boolean bool, Boolean bool2, int i12, String str3, Integer num3, Integer num4, Boolean bool3, Integer num5, String str4, String str5, String str6, Integer num6, Integer num7, Integer num8, String str7, String str8, int i13, String str9, InviteType inviteType, CodedLinkExtendedType codedLinkExtendedType, String str10, String str11, List list, Long l6, String str12, String str13, int i14, boolean z5, boolean z6, String str14, int i15, int i16, Object obj) {
        String str15;
        boolean z7;
        Integer num9;
        String str16;
        String str17;
        int i17;
        String str18;
        InviteType inviteType2;
        CodedLinkExtendedType codedLinkExtendedType2;
        String str19;
        String str20;
        List list2;
        Long l7;
        String str21;
        String str22;
        int i18;
        boolean z8;
        Boolean bool4;
        int i19;
        int i20;
        Boolean bool5;
        Boolean bool6;
        int i21;
        String str23;
        Integer num10;
        Integer num11;
        Integer num12;
        String str24;
        String str25;
        String str26;
        Integer num13;
        Integer num14;
        Integer num15;
        int i22;
        String str27;
        Integer num16;
        String str28;
        int i23 = (i15 & 1) != 0 ? voiceChannelListInviteEmbedImpl.acceptLabelBackgroundColor : i5;
        Integer num17 = (i15 & 2) != 0 ? voiceChannelListInviteEmbedImpl.acceptLabelBorderColor : num;
        int i24 = (i15 & 4) != 0 ? voiceChannelListInviteEmbedImpl.acceptLabelColor : i6;
        String str29 = (i15 & 8) != 0 ? voiceChannelListInviteEmbedImpl.acceptLabelText : str;
        Integer num18 = (i15 & 16) != 0 ? voiceChannelListInviteEmbedImpl.bodyTextColor : num2;
        String str30 = (i15 & 32) != 0 ? voiceChannelListInviteEmbedImpl.bodyText : str2;
        int i25 = (i15 & 64) != 0 ? voiceChannelListInviteEmbedImpl.backgroundColor : i10;
        int i26 = (i15 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? voiceChannelListInviteEmbedImpl.borderColor : i11;
        Boolean bool7 = (i15 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? voiceChannelListInviteEmbedImpl.canBeAccepted : bool;
        Boolean bool8 = (i15 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? voiceChannelListInviteEmbedImpl.embedCanBeTapped : bool2;
        int i27 = (i15 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? voiceChannelListInviteEmbedImpl.headerColor : i12;
        String str31 = (i15 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? voiceChannelListInviteEmbedImpl.headerText : str3;
        Integer num19 = (i15 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? voiceChannelListInviteEmbedImpl.resolvingGradientEnd : num3;
        Integer num20 = (i15 & 8192) != 0 ? voiceChannelListInviteEmbedImpl.resolvingGradientStart : num4;
        int i28 = i23;
        Boolean bool9 = (i15 & 16384) != 0 ? voiceChannelListInviteEmbedImpl.splashHasRadialGradient : bool3;
        Integer num21 = (i15 & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0 ? voiceChannelListInviteEmbedImpl.splashOpacity : num5;
        String str32 = (i15 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) != 0 ? voiceChannelListInviteEmbedImpl.splashUrl : str4;
        String str33 = (i15 & KeyCommandDescriptor.ModifierFlags.SHIFT) != 0 ? voiceChannelListInviteEmbedImpl.inviteSplash : str5;
        String str34 = (i15 & KeyCommandDescriptor.ModifierFlags.CONTROL) != 0 ? voiceChannelListInviteEmbedImpl.subtitle : str6;
        Integer num22 = (i15 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) != 0 ? voiceChannelListInviteEmbedImpl.subtitleColor : num6;
        Integer num23 = (i15 & KeyCommandDescriptor.ModifierFlags.COMMAND) != 0 ? voiceChannelListInviteEmbedImpl.thumbnailBackgroundColor : num7;
        Integer num24 = (i15 & KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD) != 0 ? voiceChannelListInviteEmbedImpl.thumbnailCornerRadius : num8;
        String str35 = (i15 & 4194304) != 0 ? voiceChannelListInviteEmbedImpl.thumbnailText : str7;
        String str36 = (i15 & 8388608) != 0 ? voiceChannelListInviteEmbedImpl.thumbnailUrl : str8;
        int i29 = (i15 & PointerEventHelper.X_FLAG_SUPPORTS_HOVER) != 0 ? voiceChannelListInviteEmbedImpl.titleColor : i13;
        String str37 = (i15 & 33554432) != 0 ? voiceChannelListInviteEmbedImpl.titleText : str9;
        InviteType inviteType3 = (i15 & 67108864) != 0 ? voiceChannelListInviteEmbedImpl.type : inviteType;
        CodedLinkExtendedType codedLinkExtendedType3 = (i15 & 134217728) != 0 ? voiceChannelListInviteEmbedImpl.extendedType : codedLinkExtendedType;
        String str38 = (i15 & 268435456) != 0 ? voiceChannelListInviteEmbedImpl.guildIcon : str10;
        String str39 = (i15 & 536870912) != 0 ? voiceChannelListInviteEmbedImpl.guildName : str11;
        List list3 = (i15 & 1073741824) != 0 ? voiceChannelListInviteEmbedImpl.voiceUsers : list;
        Long l10 = (i15 & Integer.MIN_VALUE) != 0 ? voiceChannelListInviteEmbedImpl.voiceStartTimestamp : l6;
        String str40 = (i16 & 1) != 0 ? voiceChannelListInviteEmbedImpl.emptyStateText : str12;
        String str41 = (i16 & 2) != 0 ? voiceChannelListInviteEmbedImpl.streamingLabel : str13;
        int i30 = (i16 & 4) != 0 ? voiceChannelListInviteEmbedImpl.voiceHeaderBackgroundColor : i14;
        boolean z10 = (i16 & 8) != 0 ? voiceChannelListInviteEmbedImpl.reducedMotion : z5;
        boolean z11 = (i16 & 16) != 0 ? voiceChannelListInviteEmbedImpl.isConnected : z6;
        if ((i16 & 32) != 0) {
            z7 = z11;
            str15 = voiceChannelListInviteEmbedImpl.privacyHintText;
            str16 = str35;
            str17 = str36;
            i17 = i29;
            str18 = str37;
            inviteType2 = inviteType3;
            codedLinkExtendedType2 = codedLinkExtendedType3;
            str19 = str38;
            str20 = str39;
            list2 = list3;
            l7 = l10;
            str21 = str40;
            str22 = str41;
            i18 = i30;
            z8 = z10;
            bool4 = bool9;
            i20 = i26;
            bool5 = bool7;
            bool6 = bool8;
            i21 = i27;
            str23 = str31;
            num10 = num19;
            num11 = num20;
            num12 = num21;
            str24 = str32;
            str25 = str33;
            str26 = str34;
            num13 = num22;
            num14 = num23;
            num9 = num24;
            num15 = num17;
            i22 = i24;
            str27 = str29;
            num16 = num18;
            str28 = str30;
            i19 = i25;
        } else {
            str15 = str14;
            z7 = z11;
            num9 = num24;
            str16 = str35;
            str17 = str36;
            i17 = i29;
            str18 = str37;
            inviteType2 = inviteType3;
            codedLinkExtendedType2 = codedLinkExtendedType3;
            str19 = str38;
            str20 = str39;
            list2 = list3;
            l7 = l10;
            str21 = str40;
            str22 = str41;
            i18 = i30;
            z8 = z10;
            bool4 = bool9;
            i19 = i25;
            i20 = i26;
            bool5 = bool7;
            bool6 = bool8;
            i21 = i27;
            str23 = str31;
            num10 = num19;
            num11 = num20;
            num12 = num21;
            str24 = str32;
            str25 = str33;
            str26 = str34;
            num13 = num22;
            num14 = num23;
            num15 = num17;
            i22 = i24;
            str27 = str29;
            num16 = num18;
            str28 = str30;
        }
        return voiceChannelListInviteEmbedImpl.copy(i28, num15, i22, str27, num16, str28, i19, i20, bool5, bool6, i21, str23, num10, num11, bool4, num12, str24, str25, str26, num13, num14, num9, str16, str17, i17, str18, inviteType2, codedLinkExtendedType2, str19, str20, list2, l7, str21, str22, i18, z8, z7, str15);
    }

    public static final /* synthetic */ void write$Self$chat_release(VoiceChannelListInviteEmbedImpl self, CompositeEncoder output, SerialDescriptor serialDesc) {
        Lazy[] lazyArr = $childSerializers;
        output.n(0, self.getAcceptLabelBackgroundColor().intValue(), serialDesc);
        if (output.I(serialDesc, 1) || self.getAcceptLabelBorderColor() != null) {
            output.z(serialDesc, 1, o0.a, self.getAcceptLabelBorderColor());
        }
        output.n(2, self.getAcceptLabelColor().intValue(), serialDesc);
        output.y(serialDesc, 3, self.getAcceptLabelText());
        if (output.I(serialDesc, 4) || self.getBodyTextColor() != null) {
            output.z(serialDesc, 4, o0.a, self.getBodyTextColor());
        }
        if (output.I(serialDesc, 5) || self.getBodyText() != null) {
            output.z(serialDesc, 5, v1.a, self.getBodyText());
        }
        output.n(6, self.getBackgroundColor(), serialDesc);
        output.n(7, self.getBorderColor(), serialDesc);
        if (output.I(serialDesc, 8) || self.getCanBeAccepted() != null) {
            output.z(serialDesc, 8, g.a, self.getCanBeAccepted());
        }
        if (output.I(serialDesc, 9) || self.getEmbedCanBeTapped() != null) {
            output.z(serialDesc, 9, g.a, self.getEmbedCanBeTapped());
        }
        output.n(10, self.getHeaderColor(), serialDesc);
        v1 v1Var = v1.a;
        output.z(serialDesc, 11, v1Var, self.getHeaderText());
        if (output.I(serialDesc, 12) || self.getResolvingGradientEnd() != null) {
            output.z(serialDesc, 12, o0.a, self.getResolvingGradientEnd());
        }
        if (output.I(serialDesc, 13) || self.getResolvingGradientStart() != null) {
            output.z(serialDesc, 13, o0.a, self.getResolvingGradientStart());
        }
        if (output.I(serialDesc, 14) || self.getSplashHasRadialGradient() != null) {
            output.z(serialDesc, 14, g.a, self.getSplashHasRadialGradient());
        }
        if (output.I(serialDesc, 15) || self.getSplashOpacity() != null) {
            output.z(serialDesc, 15, o0.a, self.getSplashOpacity());
        }
        if (output.I(serialDesc, 16) || self.getSplashUrl() != null) {
            output.z(serialDesc, 16, v1Var, self.getSplashUrl());
        }
        if (output.I(serialDesc, 17) || self.getInviteSplash() != null) {
            output.z(serialDesc, 17, v1Var, self.getInviteSplash());
        }
        if (output.I(serialDesc, 18) || self.getSubtitle() != null) {
            output.z(serialDesc, 18, v1Var, self.getSubtitle());
        }
        if (output.I(serialDesc, 19) || self.getSubtitleColor() != null) {
            output.z(serialDesc, 19, o0.a, self.getSubtitleColor());
        }
        if (output.I(serialDesc, 20) || self.getThumbnailBackgroundColor() != null) {
            output.z(serialDesc, 20, o0.a, self.getThumbnailBackgroundColor());
        }
        if (output.I(serialDesc, 21) || self.getThumbnailCornerRadius() != null) {
            output.z(serialDesc, 21, o0.a, self.getThumbnailCornerRadius());
        }
        if (output.I(serialDesc, 22) || self.getThumbnailText() != null) {
            output.z(serialDesc, 22, v1Var, self.getThumbnailText());
        }
        if (output.I(serialDesc, 23) || self.getThumbnailUrl() != null) {
            output.z(serialDesc, 23, v1Var, self.getThumbnailUrl());
        }
        output.n(24, self.getTitleColor().intValue(), serialDesc);
        if (output.I(serialDesc, 25) || self.getTitleText() != null) {
            output.z(serialDesc, 25, v1Var, self.getTitleText());
        }
        if (output.I(serialDesc, 26) || self.getType() != null) {
            output.z(serialDesc, 26, InviteType.Serializer.INSTANCE, self.getType());
        }
        if (output.I(serialDesc, 27) || self.getExtendedType() != CodedLinkExtendedType.VOICE_CHANNEL_LIST_INVITE) {
            output.g(serialDesc, 27, CodedLinkExtendedType.Serializer.INSTANCE, self.getExtendedType());
        }
        if (output.I(serialDesc, 28) || self.getGuildIcon() != null) {
            output.z(serialDesc, 28, v1Var, self.getGuildIcon());
        }
        if (output.I(serialDesc, 29) || self.getGuildName() != null) {
            output.z(serialDesc, 29, v1Var, self.getGuildName());
        }
        if (output.I(serialDesc, 30) || self.getVoiceUsers() != null) {
            output.z(serialDesc, 30, (KSerializer) lazyArr[30].getValue(), self.getVoiceUsers());
        }
        if (output.I(serialDesc, 31) || self.getVoiceStartTimestamp() != null) {
            output.z(serialDesc, 31, t0.a, self.getVoiceStartTimestamp());
        }
        output.y(serialDesc, 32, self.getEmptyStateText());
        output.y(serialDesc, 33, self.getStreamingLabel());
        output.n(34, self.getVoiceHeaderBackgroundColor(), serialDesc);
        if (output.I(serialDesc, 35) || self.getReducedMotion()) {
            output.x(serialDesc, 35, self.getReducedMotion());
        }
        if (output.I(serialDesc, 36) || self.isConnected()) {
            output.x(serialDesc, 36, self.isConnected());
        }
        output.y(serialDesc, 37, self.getPrivacyHintText());
    }

    /* renamed from: component1, reason: from getter */
    public final int getAcceptLabelBackgroundColor() {
        return this.acceptLabelBackgroundColor;
    }

    /* renamed from: component10, reason: from getter */
    public final Boolean getEmbedCanBeTapped() {
        return this.embedCanBeTapped;
    }

    /* renamed from: component11, reason: from getter */
    public final int getHeaderColor() {
        return this.headerColor;
    }

    /* renamed from: component12, reason: from getter */
    public final String getHeaderText() {
        return this.headerText;
    }

    /* renamed from: component13, reason: from getter */
    public final Integer getResolvingGradientEnd() {
        return this.resolvingGradientEnd;
    }

    /* renamed from: component14, reason: from getter */
    public final Integer getResolvingGradientStart() {
        return this.resolvingGradientStart;
    }

    /* renamed from: component15, reason: from getter */
    public final Boolean getSplashHasRadialGradient() {
        return this.splashHasRadialGradient;
    }

    /* renamed from: component16, reason: from getter */
    public final Integer getSplashOpacity() {
        return this.splashOpacity;
    }

    /* renamed from: component17, reason: from getter */
    public final String getSplashUrl() {
        return this.splashUrl;
    }

    /* renamed from: component18, reason: from getter */
    public final String getInviteSplash() {
        return this.inviteSplash;
    }

    /* renamed from: component19, reason: from getter */
    public final String getSubtitle() {
        return this.subtitle;
    }

    /* renamed from: component2, reason: from getter */
    public final Integer getAcceptLabelBorderColor() {
        return this.acceptLabelBorderColor;
    }

    /* renamed from: component20, reason: from getter */
    public final Integer getSubtitleColor() {
        return this.subtitleColor;
    }

    /* renamed from: component21, reason: from getter */
    public final Integer getThumbnailBackgroundColor() {
        return this.thumbnailBackgroundColor;
    }

    /* renamed from: component22, reason: from getter */
    public final Integer getThumbnailCornerRadius() {
        return this.thumbnailCornerRadius;
    }

    /* renamed from: component23, reason: from getter */
    public final String getThumbnailText() {
        return this.thumbnailText;
    }

    /* renamed from: component24, reason: from getter */
    public final String getThumbnailUrl() {
        return this.thumbnailUrl;
    }

    /* renamed from: component25, reason: from getter */
    public final int getTitleColor() {
        return this.titleColor;
    }

    /* renamed from: component26, reason: from getter */
    public final String getTitleText() {
        return this.titleText;
    }

    /* renamed from: component27, reason: from getter */
    public final InviteType getType() {
        return this.type;
    }

    @NotNull
    /* renamed from: component28, reason: from getter */
    public final CodedLinkExtendedType getExtendedType() {
        return this.extendedType;
    }

    /* renamed from: component29, reason: from getter */
    public final String getGuildIcon() {
        return this.guildIcon;
    }

    /* renamed from: component3, reason: from getter */
    public final int getAcceptLabelColor() {
        return this.acceptLabelColor;
    }

    /* renamed from: component30, reason: from getter */
    public final String getGuildName() {
        return this.guildName;
    }

    public final List<VoiceUser> component31() {
        return this.voiceUsers;
    }

    /* renamed from: component32, reason: from getter */
    public final Long getVoiceStartTimestamp() {
        return this.voiceStartTimestamp;
    }

    @NotNull
    /* renamed from: component33, reason: from getter */
    public final String getEmptyStateText() {
        return this.emptyStateText;
    }

    @NotNull
    /* renamed from: component34, reason: from getter */
    public final String getStreamingLabel() {
        return this.streamingLabel;
    }

    /* renamed from: component35, reason: from getter */
    public final int getVoiceHeaderBackgroundColor() {
        return this.voiceHeaderBackgroundColor;
    }

    /* renamed from: component36, reason: from getter */
    public final boolean getReducedMotion() {
        return this.reducedMotion;
    }

    /* renamed from: component37, reason: from getter */
    public final boolean getIsConnected() {
        return this.isConnected;
    }

    @NotNull
    /* renamed from: component38, reason: from getter */
    public final String getPrivacyHintText() {
        return this.privacyHintText;
    }

    @NotNull
    /* renamed from: component4, reason: from getter */
    public final String getAcceptLabelText() {
        return this.acceptLabelText;
    }

    /* renamed from: component5, reason: from getter */
    public final Integer getBodyTextColor() {
        return this.bodyTextColor;
    }

    /* renamed from: component6, reason: from getter */
    public final String getBodyText() {
        return this.bodyText;
    }

    /* renamed from: component7, reason: from getter */
    public final int getBackgroundColor() {
        return this.backgroundColor;
    }

    /* renamed from: component8, reason: from getter */
    public final int getBorderColor() {
        return this.borderColor;
    }

    /* renamed from: component9, reason: from getter */
    public final Boolean getCanBeAccepted() {
        return this.canBeAccepted;
    }

    @NotNull
    public final VoiceChannelListInviteEmbedImpl copy(int acceptLabelBackgroundColor, Integer acceptLabelBorderColor, int acceptLabelColor, @NotNull String acceptLabelText, Integer bodyTextColor, String bodyText, int backgroundColor, int borderColor, Boolean canBeAccepted, Boolean embedCanBeTapped, int headerColor, String headerText, Integer resolvingGradientEnd, Integer resolvingGradientStart, Boolean splashHasRadialGradient, Integer splashOpacity, String splashUrl, String inviteSplash, String subtitle, Integer subtitleColor, Integer thumbnailBackgroundColor, Integer thumbnailCornerRadius, String thumbnailText, String thumbnailUrl, int titleColor, String titleText, InviteType type, @NotNull CodedLinkExtendedType extendedType, String guildIcon, String guildName, List<VoiceUser> voiceUsers, Long voiceStartTimestamp, @NotNull String emptyStateText, @NotNull String streamingLabel, int voiceHeaderBackgroundColor, boolean reducedMotion, boolean isConnected, @NotNull String privacyHintText) {
        Intrinsics.checkNotNullParameter(acceptLabelText, "acceptLabelText");
        Intrinsics.checkNotNullParameter(extendedType, "extendedType");
        Intrinsics.checkNotNullParameter(emptyStateText, "emptyStateText");
        Intrinsics.checkNotNullParameter(streamingLabel, "streamingLabel");
        Intrinsics.checkNotNullParameter(privacyHintText, "privacyHintText");
        return new VoiceChannelListInviteEmbedImpl(acceptLabelBackgroundColor, acceptLabelBorderColor, acceptLabelColor, acceptLabelText, bodyTextColor, bodyText, backgroundColor, borderColor, canBeAccepted, embedCanBeTapped, headerColor, headerText, resolvingGradientEnd, resolvingGradientStart, splashHasRadialGradient, splashOpacity, splashUrl, inviteSplash, subtitle, subtitleColor, thumbnailBackgroundColor, thumbnailCornerRadius, thumbnailText, thumbnailUrl, titleColor, titleText, type, extendedType, guildIcon, guildName, voiceUsers, voiceStartTimestamp, emptyStateText, streamingLabel, voiceHeaderBackgroundColor, reducedMotion, isConnected, privacyHintText);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof VoiceChannelListInviteEmbedImpl)) {
            return false;
        }
        VoiceChannelListInviteEmbedImpl voiceChannelListInviteEmbedImpl = (VoiceChannelListInviteEmbedImpl) other;
        return this.acceptLabelBackgroundColor == voiceChannelListInviteEmbedImpl.acceptLabelBackgroundColor && Intrinsics.areEqual(this.acceptLabelBorderColor, voiceChannelListInviteEmbedImpl.acceptLabelBorderColor) && this.acceptLabelColor == voiceChannelListInviteEmbedImpl.acceptLabelColor && Intrinsics.areEqual(this.acceptLabelText, voiceChannelListInviteEmbedImpl.acceptLabelText) && Intrinsics.areEqual(this.bodyTextColor, voiceChannelListInviteEmbedImpl.bodyTextColor) && Intrinsics.areEqual(this.bodyText, voiceChannelListInviteEmbedImpl.bodyText) && this.backgroundColor == voiceChannelListInviteEmbedImpl.backgroundColor && this.borderColor == voiceChannelListInviteEmbedImpl.borderColor && Intrinsics.areEqual(this.canBeAccepted, voiceChannelListInviteEmbedImpl.canBeAccepted) && Intrinsics.areEqual(this.embedCanBeTapped, voiceChannelListInviteEmbedImpl.embedCanBeTapped) && this.headerColor == voiceChannelListInviteEmbedImpl.headerColor && Intrinsics.areEqual(this.headerText, voiceChannelListInviteEmbedImpl.headerText) && Intrinsics.areEqual(this.resolvingGradientEnd, voiceChannelListInviteEmbedImpl.resolvingGradientEnd) && Intrinsics.areEqual(this.resolvingGradientStart, voiceChannelListInviteEmbedImpl.resolvingGradientStart) && Intrinsics.areEqual(this.splashHasRadialGradient, voiceChannelListInviteEmbedImpl.splashHasRadialGradient) && Intrinsics.areEqual(this.splashOpacity, voiceChannelListInviteEmbedImpl.splashOpacity) && Intrinsics.areEqual(this.splashUrl, voiceChannelListInviteEmbedImpl.splashUrl) && Intrinsics.areEqual(this.inviteSplash, voiceChannelListInviteEmbedImpl.inviteSplash) && Intrinsics.areEqual(this.subtitle, voiceChannelListInviteEmbedImpl.subtitle) && Intrinsics.areEqual(this.subtitleColor, voiceChannelListInviteEmbedImpl.subtitleColor) && Intrinsics.areEqual(this.thumbnailBackgroundColor, voiceChannelListInviteEmbedImpl.thumbnailBackgroundColor) && Intrinsics.areEqual(this.thumbnailCornerRadius, voiceChannelListInviteEmbedImpl.thumbnailCornerRadius) && Intrinsics.areEqual(this.thumbnailText, voiceChannelListInviteEmbedImpl.thumbnailText) && Intrinsics.areEqual(this.thumbnailUrl, voiceChannelListInviteEmbedImpl.thumbnailUrl) && this.titleColor == voiceChannelListInviteEmbedImpl.titleColor && Intrinsics.areEqual(this.titleText, voiceChannelListInviteEmbedImpl.titleText) && this.type == voiceChannelListInviteEmbedImpl.type && this.extendedType == voiceChannelListInviteEmbedImpl.extendedType && Intrinsics.areEqual(this.guildIcon, voiceChannelListInviteEmbedImpl.guildIcon) && Intrinsics.areEqual(this.guildName, voiceChannelListInviteEmbedImpl.guildName) && Intrinsics.areEqual(this.voiceUsers, voiceChannelListInviteEmbedImpl.voiceUsers) && Intrinsics.areEqual(this.voiceStartTimestamp, voiceChannelListInviteEmbedImpl.voiceStartTimestamp) && Intrinsics.areEqual(this.emptyStateText, voiceChannelListInviteEmbedImpl.emptyStateText) && Intrinsics.areEqual(this.streamingLabel, voiceChannelListInviteEmbedImpl.streamingLabel) && this.voiceHeaderBackgroundColor == voiceChannelListInviteEmbedImpl.voiceHeaderBackgroundColor && this.reducedMotion == voiceChannelListInviteEmbedImpl.reducedMotion && this.isConnected == voiceChannelListInviteEmbedImpl.isConnected && Intrinsics.areEqual(this.privacyHintText, voiceChannelListInviteEmbedImpl.privacyHintText);
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    @NotNull
    public Integer getAcceptLabelBackgroundColor() {
        return Integer.valueOf(this.acceptLabelBackgroundColor);
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getAcceptLabelBorderColor() {
        return this.acceptLabelBorderColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    @NotNull
    public Integer getAcceptLabelColor() {
        return Integer.valueOf(this.acceptLabelColor);
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    @NotNull
    public String getAcceptLabelText() {
        return this.acceptLabelText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public int getBackgroundColor() {
        return this.backgroundColor;
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

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Boolean getEmbedCanBeTapped() {
        return this.embedCanBeTapped;
    }

    @Override // com.discord.chat.bridge.codedlinks.VoiceChannelListInviteEmbed
    @NotNull
    public String getEmptyStateText() {
        return this.emptyStateText;
    }

    @Override // com.discord.chat.bridge.codedlinks.VoiceChannelListInviteEmbed
    @NotNull
    public CodedLinkExtendedType getExtendedType() {
        return this.extendedType;
    }

    @Override // com.discord.chat.bridge.codedlinks.VoiceChannelListInviteEmbed
    public String getGuildIcon() {
        return this.guildIcon;
    }

    @Override // com.discord.chat.bridge.codedlinks.VoiceChannelListInviteEmbed
    public String getGuildName() {
        return this.guildName;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public int getHeaderColor() {
        return this.headerColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getHeaderText() {
        return this.headerText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getInviteSplash() {
        return this.inviteSplash;
    }

    @Override // com.discord.chat.bridge.codedlinks.VoiceChannelListInviteEmbed
    @NotNull
    public String getPrivacyHintText() {
        return this.privacyHintText;
    }

    @Override // com.discord.chat.bridge.codedlinks.VoiceChannelListInviteEmbed
    public boolean getReducedMotion() {
        return this.reducedMotion;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getResolvingGradientEnd() {
        return this.resolvingGradientEnd;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public Integer getResolvingGradientStart() {
        return this.resolvingGradientStart;
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

    @Override // com.discord.chat.bridge.codedlinks.VoiceChannelListInviteEmbed
    @NotNull
    public String getStreamingLabel() {
        return this.streamingLabel;
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
    @NotNull
    public Integer getTitleColor() {
        return Integer.valueOf(this.titleColor);
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getTitleText() {
        return this.titleText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public InviteType getType() {
        return this.type;
    }

    @Override // com.discord.chat.bridge.codedlinks.VoiceChannelListInviteEmbed
    public int getVoiceHeaderBackgroundColor() {
        return this.voiceHeaderBackgroundColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.VoiceChannelListInviteEmbed
    public Long getVoiceStartTimestamp() {
        return this.voiceStartTimestamp;
    }

    @Override // com.discord.chat.bridge.codedlinks.VoiceChannelListInviteEmbed
    public List<VoiceUser> getVoiceUsers() {
        return this.voiceUsers;
    }

    public int hashCode() {
        int hashCode = Integer.hashCode(this.acceptLabelBackgroundColor) * 31;
        Integer num = this.acceptLabelBorderColor;
        int d6 = a3.e.d(com.discord.chat.bridge.botuikit.a.u(this.acceptLabelColor, (hashCode + (num == null ? 0 : num.hashCode())) * 31, 31), 31, this.acceptLabelText);
        Integer num2 = this.bodyTextColor;
        int hashCode2 = (d6 + (num2 == null ? 0 : num2.hashCode())) * 31;
        String str = this.bodyText;
        int u5 = com.discord.chat.bridge.botuikit.a.u(this.borderColor, com.discord.chat.bridge.botuikit.a.u(this.backgroundColor, (hashCode2 + (str == null ? 0 : str.hashCode())) * 31, 31), 31);
        Boolean bool = this.canBeAccepted;
        int hashCode3 = (u5 + (bool == null ? 0 : bool.hashCode())) * 31;
        Boolean bool2 = this.embedCanBeTapped;
        int u6 = com.discord.chat.bridge.botuikit.a.u(this.headerColor, (hashCode3 + (bool2 == null ? 0 : bool2.hashCode())) * 31, 31);
        String str2 = this.headerText;
        int hashCode4 = (u6 + (str2 == null ? 0 : str2.hashCode())) * 31;
        Integer num3 = this.resolvingGradientEnd;
        int hashCode5 = (hashCode4 + (num3 == null ? 0 : num3.hashCode())) * 31;
        Integer num4 = this.resolvingGradientStart;
        int hashCode6 = (hashCode5 + (num4 == null ? 0 : num4.hashCode())) * 31;
        Boolean bool3 = this.splashHasRadialGradient;
        int hashCode7 = (hashCode6 + (bool3 == null ? 0 : bool3.hashCode())) * 31;
        Integer num5 = this.splashOpacity;
        int hashCode8 = (hashCode7 + (num5 == null ? 0 : num5.hashCode())) * 31;
        String str3 = this.splashUrl;
        int hashCode9 = (hashCode8 + (str3 == null ? 0 : str3.hashCode())) * 31;
        String str4 = this.inviteSplash;
        int hashCode10 = (hashCode9 + (str4 == null ? 0 : str4.hashCode())) * 31;
        String str5 = this.subtitle;
        int hashCode11 = (hashCode10 + (str5 == null ? 0 : str5.hashCode())) * 31;
        Integer num6 = this.subtitleColor;
        int hashCode12 = (hashCode11 + (num6 == null ? 0 : num6.hashCode())) * 31;
        Integer num7 = this.thumbnailBackgroundColor;
        int hashCode13 = (hashCode12 + (num7 == null ? 0 : num7.hashCode())) * 31;
        Integer num8 = this.thumbnailCornerRadius;
        int hashCode14 = (hashCode13 + (num8 == null ? 0 : num8.hashCode())) * 31;
        String str6 = this.thumbnailText;
        int hashCode15 = (hashCode14 + (str6 == null ? 0 : str6.hashCode())) * 31;
        String str7 = this.thumbnailUrl;
        int u10 = com.discord.chat.bridge.botuikit.a.u(this.titleColor, (hashCode15 + (str7 == null ? 0 : str7.hashCode())) * 31, 31);
        String str8 = this.titleText;
        int hashCode16 = (u10 + (str8 == null ? 0 : str8.hashCode())) * 31;
        InviteType inviteType = this.type;
        int hashCode17 = (this.extendedType.hashCode() + ((hashCode16 + (inviteType == null ? 0 : inviteType.hashCode())) * 31)) * 31;
        String str9 = this.guildIcon;
        int hashCode18 = (hashCode17 + (str9 == null ? 0 : str9.hashCode())) * 31;
        String str10 = this.guildName;
        int hashCode19 = (hashCode18 + (str10 == null ? 0 : str10.hashCode())) * 31;
        List<VoiceUser> list = this.voiceUsers;
        int hashCode20 = (hashCode19 + (list == null ? 0 : list.hashCode())) * 31;
        Long l6 = this.voiceStartTimestamp;
        return this.privacyHintText.hashCode() + k0.d.d(k0.d.d(com.discord.chat.bridge.botuikit.a.u(this.voiceHeaderBackgroundColor, a3.e.d(a3.e.d((hashCode20 + (l6 != null ? l6.hashCode() : 0)) * 31, 31, this.emptyStateText), 31, this.streamingLabel), 31), 31, this.reducedMotion), 31, this.isConnected);
    }

    @Override // com.discord.chat.bridge.codedlinks.VoiceChannelListInviteEmbed
    public boolean isConnected() {
        return this.isConnected;
    }

    @NotNull
    public String toString() {
        int i5 = this.acceptLabelBackgroundColor;
        Integer num = this.acceptLabelBorderColor;
        int i6 = this.acceptLabelColor;
        String str = this.acceptLabelText;
        Integer num2 = this.bodyTextColor;
        String str2 = this.bodyText;
        int i10 = this.backgroundColor;
        int i11 = this.borderColor;
        Boolean bool = this.canBeAccepted;
        Boolean bool2 = this.embedCanBeTapped;
        int i12 = this.headerColor;
        String str3 = this.headerText;
        Integer num3 = this.resolvingGradientEnd;
        Integer num4 = this.resolvingGradientStart;
        Boolean bool3 = this.splashHasRadialGradient;
        Integer num5 = this.splashOpacity;
        String str4 = this.splashUrl;
        String str5 = this.inviteSplash;
        String str6 = this.subtitle;
        Integer num6 = this.subtitleColor;
        Integer num7 = this.thumbnailBackgroundColor;
        Integer num8 = this.thumbnailCornerRadius;
        String str7 = this.thumbnailText;
        String str8 = this.thumbnailUrl;
        int i13 = this.titleColor;
        String str9 = this.titleText;
        InviteType inviteType = this.type;
        CodedLinkExtendedType codedLinkExtendedType = this.extendedType;
        String str10 = this.guildIcon;
        String str11 = this.guildName;
        List<VoiceUser> list = this.voiceUsers;
        Long l6 = this.voiceStartTimestamp;
        String str12 = this.emptyStateText;
        String str13 = this.streamingLabel;
        int i14 = this.voiceHeaderBackgroundColor;
        boolean z5 = this.reducedMotion;
        boolean z6 = this.isConnected;
        String str14 = this.privacyHintText;
        StringBuilder sb2 = new StringBuilder("VoiceChannelListInviteEmbedImpl(acceptLabelBackgroundColor=");
        sb2.append(i5);
        sb2.append(", acceptLabelBorderColor=");
        sb2.append(num);
        sb2.append(", acceptLabelColor=");
        a3.e.z(sb2, i6, ", acceptLabelText=", str, ", bodyTextColor=");
        k0.d.r(num2, ", bodyText=", str2, ", backgroundColor=", sb2);
        a3.e.y(sb2, i10, ", borderColor=", i11, ", canBeAccepted=");
        sb2.append(bool);
        sb2.append(", embedCanBeTapped=");
        sb2.append(bool2);
        sb2.append(", headerColor=");
        a3.e.z(sb2, i12, ", headerText=", str3, ", resolvingGradientEnd=");
        k0.d.s(sb2, num3, ", resolvingGradientStart=", num4, ", splashHasRadialGradient=");
        sb2.append(bool3);
        sb2.append(", splashOpacity=");
        sb2.append(num5);
        sb2.append(", splashUrl=");
        a3.e.A(sb2, str4, ", inviteSplash=", str5, ", subtitle=");
        com.discord.chat.bridge.botuikit.a.r(num6, str6, ", subtitleColor=", ", thumbnailBackgroundColor=", sb2);
        k0.d.s(sb2, num7, ", thumbnailCornerRadius=", num8, ", thumbnailText=");
        a3.e.A(sb2, str7, ", thumbnailUrl=", str8, ", titleColor=");
        a3.e.z(sb2, i13, ", titleText=", str9, ", type=");
        sb2.append(inviteType);
        sb2.append(", extendedType=");
        sb2.append(codedLinkExtendedType);
        sb2.append(", guildIcon=");
        a3.e.A(sb2, str10, ", guildName=", str11, ", voiceUsers=");
        sb2.append(list);
        sb2.append(", voiceStartTimestamp=");
        sb2.append(l6);
        sb2.append(", emptyStateText=");
        a3.e.A(sb2, str12, ", streamingLabel=", str13, ", voiceHeaderBackgroundColor=");
        sb2.append(i14);
        sb2.append(", reducedMotion=");
        sb2.append(z5);
        sb2.append(", isConnected=");
        sb2.append(z6);
        sb2.append(", privacyHintText=");
        sb2.append(str14);
        sb2.append(")");
        return sb2.toString();
    }

    public /* synthetic */ VoiceChannelListInviteEmbedImpl(int i5, Integer num, int i6, String str, Integer num2, String str2, int i10, int i11, Boolean bool, Boolean bool2, int i12, String str3, Integer num3, Integer num4, Boolean bool3, Integer num5, String str4, String str5, String str6, Integer num6, Integer num7, Integer num8, String str7, String str8, int i13, String str9, InviteType inviteType, CodedLinkExtendedType codedLinkExtendedType, String str10, String str11, List list, Long l6, String str12, String str13, int i14, boolean z5, boolean z6, String str14, int i15, int i16, DefaultConstructorMarker defaultConstructorMarker) {
        this(i5, (i15 & 2) != 0 ? null : num, i6, str, (i15 & 16) != 0 ? null : num2, (i15 & 32) != 0 ? null : str2, i10, i11, (i15 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? null : bool, (i15 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : bool2, i12, str3, (i15 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? null : num3, (i15 & 8192) != 0 ? null : num4, (i15 & 16384) != 0 ? null : bool3, (32768 & i15) != 0 ? null : num5, (65536 & i15) != 0 ? null : str4, (131072 & i15) != 0 ? null : str5, (262144 & i15) != 0 ? null : str6, (524288 & i15) != 0 ? null : num6, (1048576 & i15) != 0 ? null : num7, (2097152 & i15) != 0 ? null : num8, (4194304 & i15) != 0 ? null : str7, (8388608 & i15) != 0 ? null : str8, i13, (33554432 & i15) != 0 ? null : str9, (67108864 & i15) != 0 ? null : inviteType, (134217728 & i15) != 0 ? CodedLinkExtendedType.VOICE_CHANNEL_LIST_INVITE : codedLinkExtendedType, (268435456 & i15) != 0 ? null : str10, (536870912 & i15) != 0 ? null : str11, (1073741824 & i15) != 0 ? null : list, (i15 & Integer.MIN_VALUE) != 0 ? null : l6, str12, str13, i14, (i16 & 8) != 0 ? false : z5, (i16 & 16) != 0 ? false : z6, str14);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public VoiceChannelListInviteEmbedImpl(int i5, Integer num, int i6, @NotNull String acceptLabelText, Integer num2, String str, int i10, int i11, Boolean bool, Boolean bool2, int i12, String str2, Integer num3, Integer num4, Boolean bool3, Integer num5, String str3, String str4, String str5, Integer num6, Integer num7, Integer num8, String str6, String str7, int i13, String str8, InviteType inviteType, @NotNull CodedLinkExtendedType extendedType, String str9, String str10, List<VoiceUser> list, Long l6, @NotNull String emptyStateText, @NotNull String streamingLabel, int i14, boolean z5, boolean z6, @NotNull String privacyHintText) {
        super(null);
        Intrinsics.checkNotNullParameter(acceptLabelText, "acceptLabelText");
        Intrinsics.checkNotNullParameter(extendedType, "extendedType");
        Intrinsics.checkNotNullParameter(emptyStateText, "emptyStateText");
        Intrinsics.checkNotNullParameter(streamingLabel, "streamingLabel");
        Intrinsics.checkNotNullParameter(privacyHintText, "privacyHintText");
        this.acceptLabelBackgroundColor = i5;
        this.acceptLabelBorderColor = num;
        this.acceptLabelColor = i6;
        this.acceptLabelText = acceptLabelText;
        this.bodyTextColor = num2;
        this.bodyText = str;
        this.backgroundColor = i10;
        this.borderColor = i11;
        this.canBeAccepted = bool;
        this.embedCanBeTapped = bool2;
        this.headerColor = i12;
        this.headerText = str2;
        this.resolvingGradientEnd = num3;
        this.resolvingGradientStart = num4;
        this.splashHasRadialGradient = bool3;
        this.splashOpacity = num5;
        this.splashUrl = str3;
        this.inviteSplash = str4;
        this.subtitle = str5;
        this.subtitleColor = num6;
        this.thumbnailBackgroundColor = num7;
        this.thumbnailCornerRadius = num8;
        this.thumbnailText = str6;
        this.thumbnailUrl = str7;
        this.titleColor = i13;
        this.titleText = str8;
        this.type = inviteType;
        this.extendedType = extendedType;
        this.guildIcon = str9;
        this.guildName = str10;
        this.voiceUsers = list;
        this.voiceStartTimestamp = l6;
        this.emptyStateText = emptyStateText;
        this.streamingLabel = streamingLabel;
        this.voiceHeaderBackgroundColor = i14;
        this.reducedMotion = z5;
        this.isConnected = z6;
        this.privacyHintText = privacyHintText;
    }
}
