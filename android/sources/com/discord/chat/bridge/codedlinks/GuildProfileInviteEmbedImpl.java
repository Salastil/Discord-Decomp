package com.discord.chat.bridge.codedlinks;

import androidx.recyclerview.widget.RecyclerView;
import bs.d;
import bs.g;
import bs.h1;
import bs.o0;
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
@Metadata(d1 = {"\u0000f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0012\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\bY\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 \u009a\u00012\u00020\u00012\u00020\u0002:\u0004\u0099\u0001\u009a\u0001B³\u0003\u0012\n\b\u0003\u0010\u0003\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0003\u0010\u0005\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0003\u0010\u0006\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\n\b\u0003\u0010\t\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\b\u0012\b\b\u0001\u0010\u000b\u001a\u00020\u0004\u0012\b\b\u0001\u0010\f\u001a\u00020\u0004\u0012\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u000e\u0012\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u000e\u0012\b\b\u0001\u0010\u0010\u001a\u00020\u0004\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\u000e\u0012\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u0018\u001a\u0004\u0018\u00010\b\u0012\n\b\u0003\u0010\u0019\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0003\u0010\u001a\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\b\u0012\n\b\u0003\u0010\u001e\u001a\u0004\u0018\u00010\u0004\u0012\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010 \u001a\u0004\u0018\u00010!\u0012\b\b\u0002\u0010\"\u001a\u00020#\u0012\n\b\u0002\u0010$\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\b\u0012\u0006\u0010&\u001a\u00020\u0004\u0012\u0006\u0010'\u001a\u00020\u0004\u0012\u0006\u0010(\u001a\u00020\u000e\u0012\n\b\u0002\u0010)\u001a\u0004\u0018\u00010\b\u0012\n\b\u0002\u0010*\u001a\u0004\u0018\u00010\b\u0012\u0010\b\u0002\u0010+\u001a\n\u0012\u0004\u0012\u00020-\u0018\u00010,\u0012\n\b\u0002\u0010.\u001a\u0004\u0018\u00010\b¢\u0006\u0004\b/\u00100B\u008f\u0003\b\u0010\u0012\u0006\u00101\u001a\u00020\u0004\u0012\u0006\u00102\u001a\u00020\u0004\u0012\b\u0010\u0003\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u0007\u001a\u0004\u0018\u00010\b\u0012\b\u0010\t\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\n\u001a\u0004\u0018\u00010\b\u0012\u0006\u0010\u000b\u001a\u00020\u0004\u0012\u0006\u0010\f\u001a\u00020\u0004\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u000e\u0012\b\u0010\u000f\u001a\u0004\u0018\u00010\u000e\u0012\u0006\u0010\u0010\u001a\u00020\u0004\u0012\b\u0010\u0011\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u0013\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u0014\u001a\u0004\u0018\u00010\u000e\u0012\b\u0010\u0015\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u0016\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u0017\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u0018\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u0019\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u001a\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u001b\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u001c\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u001d\u001a\u0004\u0018\u00010\b\u0012\b\u0010\u001e\u001a\u0004\u0018\u00010\u0004\u0012\b\u0010\u001f\u001a\u0004\u0018\u00010\b\u0012\b\u0010 \u001a\u0004\u0018\u00010!\u0012\b\u0010\"\u001a\u0004\u0018\u00010#\u0012\b\u0010$\u001a\u0004\u0018\u00010\b\u0012\b\u0010%\u001a\u0004\u0018\u00010\b\u0012\u0006\u0010&\u001a\u00020\u0004\u0012\u0006\u0010'\u001a\u00020\u0004\u0012\u0006\u0010(\u001a\u00020\u000e\u0012\b\u0010)\u001a\u0004\u0018\u00010\b\u0012\b\u0010*\u001a\u0004\u0018\u00010\b\u0012\u000e\u0010+\u001a\n\u0012\u0004\u0012\u00020-\u0018\u00010,\u0012\b\u0010.\u001a\u0004\u0018\u00010\b\u0012\b\u00103\u001a\u0004\u0018\u000104¢\u0006\u0004\b/\u00105J\u0010\u0010e\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u0010\u0010f\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u0010\u0010g\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u000b\u0010h\u001a\u0004\u0018\u00010\bHÆ\u0003J\u0010\u0010i\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u000b\u0010j\u001a\u0004\u0018\u00010\bHÆ\u0003J\t\u0010k\u001a\u00020\u0004HÆ\u0003J\t\u0010l\u001a\u00020\u0004HÆ\u0003J\u0010\u0010m\u001a\u0004\u0018\u00010\u000eHÆ\u0003¢\u0006\u0002\u0010CJ\u0010\u0010n\u001a\u0004\u0018\u00010\u000eHÆ\u0003¢\u0006\u0002\u0010CJ\t\u0010o\u001a\u00020\u0004HÆ\u0003J\u000b\u0010p\u001a\u0004\u0018\u00010\bHÆ\u0003J\u0010\u0010q\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u0010\u0010r\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u0010\u0010s\u001a\u0004\u0018\u00010\u000eHÆ\u0003¢\u0006\u0002\u0010CJ\u0010\u0010t\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u000b\u0010u\u001a\u0004\u0018\u00010\bHÆ\u0003J\u000b\u0010v\u001a\u0004\u0018\u00010\bHÆ\u0003J\u000b\u0010w\u001a\u0004\u0018\u00010\bHÆ\u0003J\u0010\u0010x\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u0010\u0010y\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u0010\u0010z\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u000b\u0010{\u001a\u0004\u0018\u00010\bHÆ\u0003J\u000b\u0010|\u001a\u0004\u0018\u00010\bHÆ\u0003J\u0010\u0010}\u001a\u0004\u0018\u00010\u0004HÆ\u0003¢\u0006\u0002\u00107J\u000b\u0010~\u001a\u0004\u0018\u00010\bHÆ\u0003J\u000b\u0010\u007f\u001a\u0004\u0018\u00010!HÆ\u0003J\n\u0010\u0080\u0001\u001a\u00020#HÆ\u0003J\f\u0010\u0081\u0001\u001a\u0004\u0018\u00010\bHÆ\u0003J\f\u0010\u0082\u0001\u001a\u0004\u0018\u00010\bHÆ\u0003J\n\u0010\u0083\u0001\u001a\u00020\u0004HÆ\u0003J\n\u0010\u0084\u0001\u001a\u00020\u0004HÆ\u0003J\n\u0010\u0085\u0001\u001a\u00020\u000eHÆ\u0003J\f\u0010\u0086\u0001\u001a\u0004\u0018\u00010\bHÆ\u0003J\f\u0010\u0087\u0001\u001a\u0004\u0018\u00010\bHÆ\u0003J\u0012\u0010\u0088\u0001\u001a\n\u0012\u0004\u0012\u00020-\u0018\u00010,HÆ\u0003J\f\u0010\u0089\u0001\u001a\u0004\u0018\u00010\bHÆ\u0003JÄ\u0003\u0010\u008a\u0001\u001a\u00020\u00002\n\b\u0003\u0010\u0003\u001a\u0004\u0018\u00010\u00042\n\b\u0003\u0010\u0005\u001a\u0004\u0018\u00010\u00042\n\b\u0003\u0010\u0006\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b2\n\b\u0003\u0010\t\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\n\u001a\u0004\u0018\u00010\b2\b\b\u0003\u0010\u000b\u001a\u00020\u00042\b\b\u0003\u0010\f\u001a\u00020\u00042\n\b\u0002\u0010\r\u001a\u0004\u0018\u00010\u000e2\n\b\u0002\u0010\u000f\u001a\u0004\u0018\u00010\u000e2\b\b\u0003\u0010\u0010\u001a\u00020\u00042\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u0012\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u0014\u001a\u0004\u0018\u00010\u000e2\n\b\u0002\u0010\u0015\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u0016\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u0017\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u0018\u001a\u0004\u0018\u00010\b2\n\b\u0003\u0010\u0019\u001a\u0004\u0018\u00010\u00042\n\b\u0003\u0010\u001a\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u001b\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010\u001d\u001a\u0004\u0018\u00010\b2\n\b\u0003\u0010\u001e\u001a\u0004\u0018\u00010\u00042\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010 \u001a\u0004\u0018\u00010!2\b\b\u0002\u0010\"\u001a\u00020#2\n\b\u0002\u0010$\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010%\u001a\u0004\u0018\u00010\b2\b\b\u0002\u0010&\u001a\u00020\u00042\b\b\u0002\u0010'\u001a\u00020\u00042\b\b\u0002\u0010(\u001a\u00020\u000e2\n\b\u0002\u0010)\u001a\u0004\u0018\u00010\b2\n\b\u0002\u0010*\u001a\u0004\u0018\u00010\b2\u0010\b\u0002\u0010+\u001a\n\u0012\u0004\u0012\u00020-\u0018\u00010,2\n\b\u0002\u0010.\u001a\u0004\u0018\u00010\bHÆ\u0001¢\u0006\u0003\u0010\u008b\u0001J\u0016\u0010\u008c\u0001\u001a\u00020\u000e2\n\u0010\u008d\u0001\u001a\u0005\u0018\u00010\u008e\u0001HÖ\u0003J\n\u0010\u008f\u0001\u001a\u00020\u0004HÖ\u0001J\n\u0010\u0090\u0001\u001a\u00020\bHÖ\u0001J-\u0010\u0091\u0001\u001a\u00030\u0092\u00012\u0007\u0010\u0093\u0001\u001a\u00020\u00002\b\u0010\u0094\u0001\u001a\u00030\u0095\u00012\b\u0010\u0096\u0001\u001a\u00030\u0097\u0001H\u0001¢\u0006\u0003\b\u0098\u0001R\u0018\u0010\u0003\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\b6\u00107R\u0018\u0010\u0005\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\b9\u00107R\u0018\u0010\u0006\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\b:\u00107R\u0016\u0010\u0007\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b;\u0010<R\u0018\u0010\t\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\b=\u00107R\u0016\u0010\n\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b>\u0010<R\u0014\u0010\u000b\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b?\u0010@R\u0014\u0010\f\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bA\u0010@R\u0018\u0010\r\u001a\u0004\u0018\u00010\u000eX\u0096\u0004¢\u0006\n\n\u0002\u0010D\u001a\u0004\bB\u0010CR\u0018\u0010\u000f\u001a\u0004\u0018\u00010\u000eX\u0096\u0004¢\u0006\n\n\u0002\u0010D\u001a\u0004\bE\u0010CR\u0014\u0010\u0010\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bF\u0010@R\u0016\u0010\u0011\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bG\u0010<R\u0018\u0010\u0012\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\bH\u00107R\u0018\u0010\u0013\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\bI\u00107R\u0018\u0010\u0014\u001a\u0004\u0018\u00010\u000eX\u0096\u0004¢\u0006\n\n\u0002\u0010D\u001a\u0004\bJ\u0010CR\u0018\u0010\u0015\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\bK\u00107R\u0016\u0010\u0016\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bL\u0010<R\u0016\u0010\u0017\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bM\u0010<R\u0016\u0010\u0018\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bN\u0010<R\u0018\u0010\u0019\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\bO\u00107R\u0018\u0010\u001a\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\bP\u00107R\u0018\u0010\u001b\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\bQ\u00107R\u0016\u0010\u001c\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bR\u0010<R\u0016\u0010\u001d\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bS\u0010<R\u0018\u0010\u001e\u001a\u0004\u0018\u00010\u0004X\u0096\u0004¢\u0006\n\n\u0002\u00108\u001a\u0004\bT\u00107R\u0016\u0010\u001f\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bU\u0010<R\u0016\u0010 \u001a\u0004\u0018\u00010!X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bV\u0010WR\u0014\u0010\"\u001a\u00020#X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bX\u0010YR\u0016\u0010$\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bZ\u0010<R\u0016\u0010%\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b[\u0010<R\u0014\u0010&\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\\\u0010@R\u0014\u0010'\u001a\u00020\u0004X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b]\u0010@R\u0014\u0010(\u001a\u00020\u000eX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b^\u0010_R\u0016\u0010)\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b`\u0010<R\u0016\u0010*\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\ba\u0010<R\u001c\u0010+\u001a\n\u0012\u0004\u0012\u00020-\u0018\u00010,X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bb\u0010cR\u0016\u0010.\u001a\u0004\u0018\u00010\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\bd\u0010<¨\u0006\u009b\u0001"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/GuildProfileInviteEmbedImpl;", "Lcom/discord/chat/bridge/codedlinks/CodedLinkEmbed;", "Lcom/discord/chat/bridge/codedlinks/GuildProfileInviteEmbed;", "acceptLabelBackgroundColor", "", "acceptLabelBorderColor", "acceptLabelColor", "acceptLabelText", "", "bodyTextColor", "bodyText", ViewProps.BACKGROUND_COLOR, ViewProps.BORDER_COLOR, "canBeAccepted", "", "embedCanBeTapped", "headerColor", "headerText", "resolvingGradientEnd", "resolvingGradientStart", "splashHasRadialGradient", "splashOpacity", "splashUrl", "inviteSplash", "subtitle", "subtitleColor", "thumbnailBackgroundColor", "thumbnailCornerRadius", "thumbnailText", "thumbnailUrl", "titleColor", "titleText", "type", "Lcom/discord/chat/bridge/codedlinks/InviteType;", "extendedType", "Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;", "memberText", "onlineText", "bannerColor", "bannerColorSecondary", "hasProfileOverflow", "badgeIconUrl", "establishedText", "roles", "", "Lcom/discord/chat/bridge/codedlinks/InviteRole;", "rolesHeadingText", "<init>", "(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;IILjava/lang/Boolean;Ljava/lang/Boolean;ILjava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;Ljava/lang/String;Ljava/lang/String;IIZLjava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/String;)V", "seen0", "seen1", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(IILjava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;IILjava/lang/Boolean;Ljava/lang/Boolean;ILjava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;Ljava/lang/String;Ljava/lang/String;IIZLjava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/String;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getAcceptLabelBackgroundColor", "()Ljava/lang/Integer;", "Ljava/lang/Integer;", "getAcceptLabelBorderColor", "getAcceptLabelColor", "getAcceptLabelText", "()Ljava/lang/String;", "getBodyTextColor", "getBodyText", "getBackgroundColor", "()I", "getBorderColor", "getCanBeAccepted", "()Ljava/lang/Boolean;", "Ljava/lang/Boolean;", "getEmbedCanBeTapped", "getHeaderColor", "getHeaderText", "getResolvingGradientEnd", "getResolvingGradientStart", "getSplashHasRadialGradient", "getSplashOpacity", "getSplashUrl", "getInviteSplash", "getSubtitle", "getSubtitleColor", "getThumbnailBackgroundColor", "getThumbnailCornerRadius", "getThumbnailText", "getThumbnailUrl", "getTitleColor", "getTitleText", "getType", "()Lcom/discord/chat/bridge/codedlinks/InviteType;", "getExtendedType", "()Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;", "getMemberText", "getOnlineText", "getBannerColor", "getBannerColorSecondary", "getHasProfileOverflow", "()Z", "getBadgeIconUrl", "getEstablishedText", "getRoles", "()Ljava/util/List;", "getRolesHeadingText", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "component8", "component9", "component10", "component11", "component12", "component13", "component14", "component15", "component16", "component17", "component18", "component19", "component20", "component21", "component22", "component23", "component24", "component25", "component26", "component27", "component28", "component29", "component30", "component31", "component32", "component33", "component34", "component35", "component36", "component37", "copy", "(Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;IILjava/lang/Boolean;Ljava/lang/Boolean;ILjava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Boolean;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/Integer;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/String;Lcom/discord/chat/bridge/codedlinks/InviteType;Lcom/discord/chat/bridge/codedlinks/CodedLinkExtendedType;Ljava/lang/String;Ljava/lang/String;IIZLjava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/String;)Lcom/discord/chat/bridge/codedlinks/GuildProfileInviteEmbedImpl;", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$chat_release", "$serializer", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class GuildProfileInviteEmbedImpl extends CodedLinkEmbed implements GuildProfileInviteEmbed {
    private final Integer acceptLabelBackgroundColor;
    private final Integer acceptLabelBorderColor;
    private final Integer acceptLabelColor;
    private final String acceptLabelText;
    private final int backgroundColor;
    private final String badgeIconUrl;
    private final int bannerColor;
    private final int bannerColorSecondary;
    private final String bodyText;
    private final Integer bodyTextColor;
    private final int borderColor;
    private final Boolean canBeAccepted;
    private final Boolean embedCanBeTapped;
    private final String establishedText;

    @NotNull
    private final CodedLinkExtendedType extendedType;
    private final boolean hasProfileOverflow;
    private final int headerColor;
    private final String headerText;
    private final String inviteSplash;
    private final String memberText;
    private final String onlineText;
    private final Integer resolvingGradientEnd;
    private final Integer resolvingGradientStart;
    private final List<InviteRole> roles;
    private final String rolesHeadingText;
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
    private final InviteType type;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Lazy[] $childSerializers = {null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, null, l.b(m.f8827e, new a(5)), null};

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/chat/bridge/codedlinks/GuildProfileInviteEmbedImpl$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/chat/bridge/codedlinks/GuildProfileInviteEmbedImpl;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return GuildProfileInviteEmbedImpl$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ GuildProfileInviteEmbedImpl(int i5, int i6, Integer num, Integer num2, Integer num3, String str, Integer num4, String str2, int i10, int i11, Boolean bool, Boolean bool2, int i12, String str3, Integer num5, Integer num6, Boolean bool3, Integer num7, String str4, String str5, String str6, Integer num8, Integer num9, Integer num10, String str7, String str8, Integer num11, String str9, InviteType inviteType, CodedLinkExtendedType codedLinkExtendedType, String str10, String str11, int i13, int i14, boolean z5, String str12, String str13, List list, String str14, SerializationConstructorMarker serializationConstructorMarker) {
        super(r2);
        DefaultConstructorMarker defaultConstructorMarker = null;
        if ((-1073738560 != (i5 & (-1073738560))) || (1 != (i6 & 1))) {
            h1.k(new int[]{i5, i6}, new int[]{-1073738560, 1}, GuildProfileInviteEmbedImpl$$serializer.INSTANCE.getDescriptor());
            throw null;
        }
        if ((i5 & 1) == 0) {
            this.acceptLabelBackgroundColor = null;
        } else {
            this.acceptLabelBackgroundColor = num;
        }
        if ((i5 & 2) == 0) {
            this.acceptLabelBorderColor = null;
        } else {
            this.acceptLabelBorderColor = num2;
        }
        if ((i5 & 4) == 0) {
            this.acceptLabelColor = null;
        } else {
            this.acceptLabelColor = num3;
        }
        if ((i5 & 8) == 0) {
            this.acceptLabelText = null;
        } else {
            this.acceptLabelText = str;
        }
        if ((i5 & 16) == 0) {
            this.bodyTextColor = null;
        } else {
            this.bodyTextColor = num4;
        }
        if ((i5 & 32) == 0) {
            this.bodyText = null;
        } else {
            this.bodyText = str2;
        }
        this.backgroundColor = i10;
        this.borderColor = i11;
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
        this.headerColor = i12;
        this.headerText = str3;
        if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
            this.resolvingGradientEnd = null;
        } else {
            this.resolvingGradientEnd = num5;
        }
        if ((i5 & 8192) == 0) {
            this.resolvingGradientStart = null;
        } else {
            this.resolvingGradientStart = num6;
        }
        if ((i5 & 16384) == 0) {
            this.splashHasRadialGradient = null;
        } else {
            this.splashHasRadialGradient = bool3;
        }
        if ((32768 & i5) == 0) {
            this.splashOpacity = null;
        } else {
            this.splashOpacity = num7;
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
            this.subtitleColor = num8;
        }
        if ((1048576 & i5) == 0) {
            this.thumbnailBackgroundColor = null;
        } else {
            this.thumbnailBackgroundColor = num9;
        }
        if ((2097152 & i5) == 0) {
            this.thumbnailCornerRadius = null;
        } else {
            this.thumbnailCornerRadius = num10;
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
        if ((16777216 & i5) == 0) {
            this.titleColor = null;
        } else {
            this.titleColor = num11;
        }
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
        this.extendedType = (134217728 & i5) == 0 ? CodedLinkExtendedType.GUILD_PROFILE_INVITE : codedLinkExtendedType;
        if ((268435456 & i5) == 0) {
            this.memberText = null;
        } else {
            this.memberText = str10;
        }
        if ((i5 & 536870912) == 0) {
            this.onlineText = null;
        } else {
            this.onlineText = str11;
        }
        this.bannerColor = i13;
        this.bannerColorSecondary = i14;
        this.hasProfileOverflow = z5;
        if ((i6 & 2) == 0) {
            this.badgeIconUrl = null;
        } else {
            this.badgeIconUrl = str12;
        }
        if ((i6 & 4) == 0) {
            this.establishedText = null;
        } else {
            this.establishedText = str13;
        }
        if ((i6 & 8) == 0) {
            this.roles = null;
        } else {
            this.roles = list;
        }
        if ((i6 & 16) == 0) {
            this.rolesHeadingText = null;
        } else {
            this.rolesHeadingText = str14;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return new d(InviteRole$$serializer.INSTANCE, 0);
    }

    public static /* synthetic */ GuildProfileInviteEmbedImpl copy$default(GuildProfileInviteEmbedImpl guildProfileInviteEmbedImpl, Integer num, Integer num2, Integer num3, String str, Integer num4, String str2, int i5, int i6, Boolean bool, Boolean bool2, int i10, String str3, Integer num5, Integer num6, Boolean bool3, Integer num7, String str4, String str5, String str6, Integer num8, Integer num9, Integer num10, String str7, String str8, Integer num11, String str9, InviteType inviteType, CodedLinkExtendedType codedLinkExtendedType, String str10, String str11, int i11, int i12, boolean z5, String str12, String str13, List list, String str14, int i13, int i14, Object obj) {
        String str15;
        List list2;
        Integer num12;
        Integer num13;
        String str16;
        String str17;
        Integer num14;
        String str18;
        InviteType inviteType2;
        CodedLinkExtendedType codedLinkExtendedType2;
        String str19;
        String str20;
        int i15;
        int i16;
        boolean z6;
        String str21;
        String str22;
        Boolean bool4;
        String str23;
        int i17;
        int i18;
        Boolean bool5;
        Boolean bool6;
        int i19;
        String str24;
        Integer num15;
        Integer num16;
        Integer num17;
        String str25;
        String str26;
        String str27;
        Integer num18;
        Integer num19;
        Integer num20;
        String str28;
        Integer num21;
        Integer num22 = (i13 & 1) != 0 ? guildProfileInviteEmbedImpl.acceptLabelBackgroundColor : num;
        Integer num23 = (i13 & 2) != 0 ? guildProfileInviteEmbedImpl.acceptLabelBorderColor : num2;
        Integer num24 = (i13 & 4) != 0 ? guildProfileInviteEmbedImpl.acceptLabelColor : num3;
        String str29 = (i13 & 8) != 0 ? guildProfileInviteEmbedImpl.acceptLabelText : str;
        Integer num25 = (i13 & 16) != 0 ? guildProfileInviteEmbedImpl.bodyTextColor : num4;
        String str30 = (i13 & 32) != 0 ? guildProfileInviteEmbedImpl.bodyText : str2;
        int i20 = (i13 & 64) != 0 ? guildProfileInviteEmbedImpl.backgroundColor : i5;
        int i21 = (i13 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? guildProfileInviteEmbedImpl.borderColor : i6;
        Boolean bool7 = (i13 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? guildProfileInviteEmbedImpl.canBeAccepted : bool;
        Boolean bool8 = (i13 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? guildProfileInviteEmbedImpl.embedCanBeTapped : bool2;
        int i22 = (i13 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? guildProfileInviteEmbedImpl.headerColor : i10;
        String str31 = (i13 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? guildProfileInviteEmbedImpl.headerText : str3;
        Integer num26 = (i13 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? guildProfileInviteEmbedImpl.resolvingGradientEnd : num5;
        Integer num27 = (i13 & 8192) != 0 ? guildProfileInviteEmbedImpl.resolvingGradientStart : num6;
        Integer num28 = num22;
        Boolean bool9 = (i13 & 16384) != 0 ? guildProfileInviteEmbedImpl.splashHasRadialGradient : bool3;
        Integer num29 = (i13 & PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS) != 0 ? guildProfileInviteEmbedImpl.splashOpacity : num7;
        String str32 = (i13 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) != 0 ? guildProfileInviteEmbedImpl.splashUrl : str4;
        String str33 = (i13 & KeyCommandDescriptor.ModifierFlags.SHIFT) != 0 ? guildProfileInviteEmbedImpl.inviteSplash : str5;
        String str34 = (i13 & KeyCommandDescriptor.ModifierFlags.CONTROL) != 0 ? guildProfileInviteEmbedImpl.subtitle : str6;
        Integer num30 = (i13 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) != 0 ? guildProfileInviteEmbedImpl.subtitleColor : num8;
        Integer num31 = (i13 & KeyCommandDescriptor.ModifierFlags.COMMAND) != 0 ? guildProfileInviteEmbedImpl.thumbnailBackgroundColor : num9;
        Integer num32 = (i13 & KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD) != 0 ? guildProfileInviteEmbedImpl.thumbnailCornerRadius : num10;
        String str35 = (i13 & 4194304) != 0 ? guildProfileInviteEmbedImpl.thumbnailText : str7;
        String str36 = (i13 & 8388608) != 0 ? guildProfileInviteEmbedImpl.thumbnailUrl : str8;
        Integer num33 = (i13 & PointerEventHelper.X_FLAG_SUPPORTS_HOVER) != 0 ? guildProfileInviteEmbedImpl.titleColor : num11;
        String str37 = (i13 & 33554432) != 0 ? guildProfileInviteEmbedImpl.titleText : str9;
        InviteType inviteType3 = (i13 & 67108864) != 0 ? guildProfileInviteEmbedImpl.type : inviteType;
        CodedLinkExtendedType codedLinkExtendedType3 = (i13 & 134217728) != 0 ? guildProfileInviteEmbedImpl.extendedType : codedLinkExtendedType;
        String str38 = (i13 & 268435456) != 0 ? guildProfileInviteEmbedImpl.memberText : str10;
        String str39 = (i13 & 536870912) != 0 ? guildProfileInviteEmbedImpl.onlineText : str11;
        int i23 = (i13 & 1073741824) != 0 ? guildProfileInviteEmbedImpl.bannerColor : i11;
        int i24 = (i13 & Integer.MIN_VALUE) != 0 ? guildProfileInviteEmbedImpl.bannerColorSecondary : i12;
        boolean z7 = (i14 & 1) != 0 ? guildProfileInviteEmbedImpl.hasProfileOverflow : z5;
        String str40 = (i14 & 2) != 0 ? guildProfileInviteEmbedImpl.badgeIconUrl : str12;
        String str41 = (i14 & 4) != 0 ? guildProfileInviteEmbedImpl.establishedText : str13;
        List list3 = (i14 & 8) != 0 ? guildProfileInviteEmbedImpl.roles : list;
        if ((i14 & 16) != 0) {
            list2 = list3;
            str15 = guildProfileInviteEmbedImpl.rolesHeadingText;
            num13 = num32;
            str16 = str35;
            str17 = str36;
            num14 = num33;
            str18 = str37;
            inviteType2 = inviteType3;
            codedLinkExtendedType2 = codedLinkExtendedType3;
            str19 = str38;
            str20 = str39;
            i15 = i23;
            i16 = i24;
            z6 = z7;
            str21 = str40;
            str22 = str41;
            bool4 = bool9;
            i17 = i20;
            i18 = i21;
            bool5 = bool7;
            bool6 = bool8;
            i19 = i22;
            str24 = str31;
            num15 = num26;
            num16 = num27;
            num17 = num29;
            str25 = str32;
            str26 = str33;
            str27 = str34;
            num18 = num30;
            num12 = num31;
            num19 = num23;
            num20 = num24;
            str28 = str29;
            num21 = num25;
            str23 = str30;
        } else {
            str15 = str14;
            list2 = list3;
            num12 = num31;
            num13 = num32;
            str16 = str35;
            str17 = str36;
            num14 = num33;
            str18 = str37;
            inviteType2 = inviteType3;
            codedLinkExtendedType2 = codedLinkExtendedType3;
            str19 = str38;
            str20 = str39;
            i15 = i23;
            i16 = i24;
            z6 = z7;
            str21 = str40;
            str22 = str41;
            bool4 = bool9;
            str23 = str30;
            i17 = i20;
            i18 = i21;
            bool5 = bool7;
            bool6 = bool8;
            i19 = i22;
            str24 = str31;
            num15 = num26;
            num16 = num27;
            num17 = num29;
            str25 = str32;
            str26 = str33;
            str27 = str34;
            num18 = num30;
            num19 = num23;
            num20 = num24;
            str28 = str29;
            num21 = num25;
        }
        return guildProfileInviteEmbedImpl.copy(num28, num19, num20, str28, num21, str23, i17, i18, bool5, bool6, i19, str24, num15, num16, bool4, num17, str25, str26, str27, num18, num12, num13, str16, str17, num14, str18, inviteType2, codedLinkExtendedType2, str19, str20, i15, i16, z6, str21, str22, list2, str15);
    }

    public static final /* synthetic */ void write$Self$chat_release(GuildProfileInviteEmbedImpl self, CompositeEncoder output, SerialDescriptor serialDesc) {
        Lazy[] lazyArr = $childSerializers;
        if (output.I(serialDesc, 0) || self.getAcceptLabelBackgroundColor() != null) {
            output.z(serialDesc, 0, o0.a, self.getAcceptLabelBackgroundColor());
        }
        if (output.I(serialDesc, 1) || self.getAcceptLabelBorderColor() != null) {
            output.z(serialDesc, 1, o0.a, self.getAcceptLabelBorderColor());
        }
        if (output.I(serialDesc, 2) || self.getAcceptLabelColor() != null) {
            output.z(serialDesc, 2, o0.a, self.getAcceptLabelColor());
        }
        if (output.I(serialDesc, 3) || self.getAcceptLabelText() != null) {
            output.z(serialDesc, 3, v1.a, self.getAcceptLabelText());
        }
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
        if (output.I(serialDesc, 24) || self.getTitleColor() != null) {
            output.z(serialDesc, 24, o0.a, self.getTitleColor());
        }
        if (output.I(serialDesc, 25) || self.getTitleText() != null) {
            output.z(serialDesc, 25, v1Var, self.getTitleText());
        }
        if (output.I(serialDesc, 26) || self.getType() != null) {
            output.z(serialDesc, 26, InviteType.Serializer.INSTANCE, self.getType());
        }
        if (output.I(serialDesc, 27) || self.getExtendedType() != CodedLinkExtendedType.GUILD_PROFILE_INVITE) {
            output.g(serialDesc, 27, CodedLinkExtendedType.Serializer.INSTANCE, self.getExtendedType());
        }
        if (output.I(serialDesc, 28) || self.getMemberText() != null) {
            output.z(serialDesc, 28, v1Var, self.getMemberText());
        }
        if (output.I(serialDesc, 29) || self.getOnlineText() != null) {
            output.z(serialDesc, 29, v1Var, self.getOnlineText());
        }
        output.n(30, self.getBannerColor(), serialDesc);
        output.n(31, self.getBannerColorSecondary(), serialDesc);
        output.x(serialDesc, 32, self.getHasProfileOverflow());
        if (output.I(serialDesc, 33) || self.getBadgeIconUrl() != null) {
            output.z(serialDesc, 33, v1Var, self.getBadgeIconUrl());
        }
        if (output.I(serialDesc, 34) || self.getEstablishedText() != null) {
            output.z(serialDesc, 34, v1Var, self.getEstablishedText());
        }
        if (output.I(serialDesc, 35) || self.getRoles() != null) {
            output.z(serialDesc, 35, (KSerializer) lazyArr[35].getValue(), self.getRoles());
        }
        if (!output.I(serialDesc, 36) && self.getRolesHeadingText() == null) {
            return;
        }
        output.z(serialDesc, 36, v1Var, self.getRolesHeadingText());
    }

    /* renamed from: component1, reason: from getter */
    public final Integer getAcceptLabelBackgroundColor() {
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
    public final Integer getTitleColor() {
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
    public final String getMemberText() {
        return this.memberText;
    }

    /* renamed from: component3, reason: from getter */
    public final Integer getAcceptLabelColor() {
        return this.acceptLabelColor;
    }

    /* renamed from: component30, reason: from getter */
    public final String getOnlineText() {
        return this.onlineText;
    }

    /* renamed from: component31, reason: from getter */
    public final int getBannerColor() {
        return this.bannerColor;
    }

    /* renamed from: component32, reason: from getter */
    public final int getBannerColorSecondary() {
        return this.bannerColorSecondary;
    }

    /* renamed from: component33, reason: from getter */
    public final boolean getHasProfileOverflow() {
        return this.hasProfileOverflow;
    }

    /* renamed from: component34, reason: from getter */
    public final String getBadgeIconUrl() {
        return this.badgeIconUrl;
    }

    /* renamed from: component35, reason: from getter */
    public final String getEstablishedText() {
        return this.establishedText;
    }

    public final List<InviteRole> component36() {
        return this.roles;
    }

    /* renamed from: component37, reason: from getter */
    public final String getRolesHeadingText() {
        return this.rolesHeadingText;
    }

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
    public final GuildProfileInviteEmbedImpl copy(Integer acceptLabelBackgroundColor, Integer acceptLabelBorderColor, Integer acceptLabelColor, String acceptLabelText, Integer bodyTextColor, String bodyText, int backgroundColor, int borderColor, Boolean canBeAccepted, Boolean embedCanBeTapped, int headerColor, String headerText, Integer resolvingGradientEnd, Integer resolvingGradientStart, Boolean splashHasRadialGradient, Integer splashOpacity, String splashUrl, String inviteSplash, String subtitle, Integer subtitleColor, Integer thumbnailBackgroundColor, Integer thumbnailCornerRadius, String thumbnailText, String thumbnailUrl, Integer titleColor, String titleText, InviteType type, @NotNull CodedLinkExtendedType extendedType, String memberText, String onlineText, int bannerColor, int bannerColorSecondary, boolean hasProfileOverflow, String badgeIconUrl, String establishedText, List<InviteRole> roles, String rolesHeadingText) {
        Intrinsics.checkNotNullParameter(extendedType, "extendedType");
        return new GuildProfileInviteEmbedImpl(acceptLabelBackgroundColor, acceptLabelBorderColor, acceptLabelColor, acceptLabelText, bodyTextColor, bodyText, backgroundColor, borderColor, canBeAccepted, embedCanBeTapped, headerColor, headerText, resolvingGradientEnd, resolvingGradientStart, splashHasRadialGradient, splashOpacity, splashUrl, inviteSplash, subtitle, subtitleColor, thumbnailBackgroundColor, thumbnailCornerRadius, thumbnailText, thumbnailUrl, titleColor, titleText, type, extendedType, memberText, onlineText, bannerColor, bannerColorSecondary, hasProfileOverflow, badgeIconUrl, establishedText, roles, rolesHeadingText);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof GuildProfileInviteEmbedImpl)) {
            return false;
        }
        GuildProfileInviteEmbedImpl guildProfileInviteEmbedImpl = (GuildProfileInviteEmbedImpl) other;
        return Intrinsics.areEqual(this.acceptLabelBackgroundColor, guildProfileInviteEmbedImpl.acceptLabelBackgroundColor) && Intrinsics.areEqual(this.acceptLabelBorderColor, guildProfileInviteEmbedImpl.acceptLabelBorderColor) && Intrinsics.areEqual(this.acceptLabelColor, guildProfileInviteEmbedImpl.acceptLabelColor) && Intrinsics.areEqual(this.acceptLabelText, guildProfileInviteEmbedImpl.acceptLabelText) && Intrinsics.areEqual(this.bodyTextColor, guildProfileInviteEmbedImpl.bodyTextColor) && Intrinsics.areEqual(this.bodyText, guildProfileInviteEmbedImpl.bodyText) && this.backgroundColor == guildProfileInviteEmbedImpl.backgroundColor && this.borderColor == guildProfileInviteEmbedImpl.borderColor && Intrinsics.areEqual(this.canBeAccepted, guildProfileInviteEmbedImpl.canBeAccepted) && Intrinsics.areEqual(this.embedCanBeTapped, guildProfileInviteEmbedImpl.embedCanBeTapped) && this.headerColor == guildProfileInviteEmbedImpl.headerColor && Intrinsics.areEqual(this.headerText, guildProfileInviteEmbedImpl.headerText) && Intrinsics.areEqual(this.resolvingGradientEnd, guildProfileInviteEmbedImpl.resolvingGradientEnd) && Intrinsics.areEqual(this.resolvingGradientStart, guildProfileInviteEmbedImpl.resolvingGradientStart) && Intrinsics.areEqual(this.splashHasRadialGradient, guildProfileInviteEmbedImpl.splashHasRadialGradient) && Intrinsics.areEqual(this.splashOpacity, guildProfileInviteEmbedImpl.splashOpacity) && Intrinsics.areEqual(this.splashUrl, guildProfileInviteEmbedImpl.splashUrl) && Intrinsics.areEqual(this.inviteSplash, guildProfileInviteEmbedImpl.inviteSplash) && Intrinsics.areEqual(this.subtitle, guildProfileInviteEmbedImpl.subtitle) && Intrinsics.areEqual(this.subtitleColor, guildProfileInviteEmbedImpl.subtitleColor) && Intrinsics.areEqual(this.thumbnailBackgroundColor, guildProfileInviteEmbedImpl.thumbnailBackgroundColor) && Intrinsics.areEqual(this.thumbnailCornerRadius, guildProfileInviteEmbedImpl.thumbnailCornerRadius) && Intrinsics.areEqual(this.thumbnailText, guildProfileInviteEmbedImpl.thumbnailText) && Intrinsics.areEqual(this.thumbnailUrl, guildProfileInviteEmbedImpl.thumbnailUrl) && Intrinsics.areEqual(this.titleColor, guildProfileInviteEmbedImpl.titleColor) && Intrinsics.areEqual(this.titleText, guildProfileInviteEmbedImpl.titleText) && this.type == guildProfileInviteEmbedImpl.type && this.extendedType == guildProfileInviteEmbedImpl.extendedType && Intrinsics.areEqual(this.memberText, guildProfileInviteEmbedImpl.memberText) && Intrinsics.areEqual(this.onlineText, guildProfileInviteEmbedImpl.onlineText) && this.bannerColor == guildProfileInviteEmbedImpl.bannerColor && this.bannerColorSecondary == guildProfileInviteEmbedImpl.bannerColorSecondary && this.hasProfileOverflow == guildProfileInviteEmbedImpl.hasProfileOverflow && Intrinsics.areEqual(this.badgeIconUrl, guildProfileInviteEmbedImpl.badgeIconUrl) && Intrinsics.areEqual(this.establishedText, guildProfileInviteEmbedImpl.establishedText) && Intrinsics.areEqual(this.roles, guildProfileInviteEmbedImpl.roles) && Intrinsics.areEqual(this.rolesHeadingText, guildProfileInviteEmbedImpl.rolesHeadingText);
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

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public String getAcceptLabelText() {
        return this.acceptLabelText;
    }

    @Override // com.discord.chat.bridge.codedlinks.CodedLinkEmbed
    public int getBackgroundColor() {
        return this.backgroundColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildProfileInviteEmbed
    public String getBadgeIconUrl() {
        return this.badgeIconUrl;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildProfileInviteEmbed
    public int getBannerColor() {
        return this.bannerColor;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildProfileInviteEmbed
    public int getBannerColorSecondary() {
        return this.bannerColorSecondary;
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

    @Override // com.discord.chat.bridge.codedlinks.GuildProfileInviteEmbed
    public String getEstablishedText() {
        return this.establishedText;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildProfileInviteEmbed
    @NotNull
    public CodedLinkExtendedType getExtendedType() {
        return this.extendedType;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildProfileInviteEmbed
    public boolean getHasProfileOverflow() {
        return this.hasProfileOverflow;
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

    @Override // com.discord.chat.bridge.codedlinks.GuildProfileInviteEmbed
    public String getMemberText() {
        return this.memberText;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildProfileInviteEmbed
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

    @Override // com.discord.chat.bridge.codedlinks.GuildProfileInviteEmbed
    public List<InviteRole> getRoles() {
        return this.roles;
    }

    @Override // com.discord.chat.bridge.codedlinks.GuildProfileInviteEmbed
    public String getRolesHeadingText() {
        return this.rolesHeadingText;
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
    public InviteType getType() {
        return this.type;
    }

    public int hashCode() {
        Integer num = this.acceptLabelBackgroundColor;
        int hashCode = (num == null ? 0 : num.hashCode()) * 31;
        Integer num2 = this.acceptLabelBorderColor;
        int hashCode2 = (hashCode + (num2 == null ? 0 : num2.hashCode())) * 31;
        Integer num3 = this.acceptLabelColor;
        int hashCode3 = (hashCode2 + (num3 == null ? 0 : num3.hashCode())) * 31;
        String str = this.acceptLabelText;
        int hashCode4 = (hashCode3 + (str == null ? 0 : str.hashCode())) * 31;
        Integer num4 = this.bodyTextColor;
        int hashCode5 = (hashCode4 + (num4 == null ? 0 : num4.hashCode())) * 31;
        String str2 = this.bodyText;
        int u5 = com.discord.chat.bridge.botuikit.a.u(this.borderColor, com.discord.chat.bridge.botuikit.a.u(this.backgroundColor, (hashCode5 + (str2 == null ? 0 : str2.hashCode())) * 31, 31), 31);
        Boolean bool = this.canBeAccepted;
        int hashCode6 = (u5 + (bool == null ? 0 : bool.hashCode())) * 31;
        Boolean bool2 = this.embedCanBeTapped;
        int u6 = com.discord.chat.bridge.botuikit.a.u(this.headerColor, (hashCode6 + (bool2 == null ? 0 : bool2.hashCode())) * 31, 31);
        String str3 = this.headerText;
        int hashCode7 = (u6 + (str3 == null ? 0 : str3.hashCode())) * 31;
        Integer num5 = this.resolvingGradientEnd;
        int hashCode8 = (hashCode7 + (num5 == null ? 0 : num5.hashCode())) * 31;
        Integer num6 = this.resolvingGradientStart;
        int hashCode9 = (hashCode8 + (num6 == null ? 0 : num6.hashCode())) * 31;
        Boolean bool3 = this.splashHasRadialGradient;
        int hashCode10 = (hashCode9 + (bool3 == null ? 0 : bool3.hashCode())) * 31;
        Integer num7 = this.splashOpacity;
        int hashCode11 = (hashCode10 + (num7 == null ? 0 : num7.hashCode())) * 31;
        String str4 = this.splashUrl;
        int hashCode12 = (hashCode11 + (str4 == null ? 0 : str4.hashCode())) * 31;
        String str5 = this.inviteSplash;
        int hashCode13 = (hashCode12 + (str5 == null ? 0 : str5.hashCode())) * 31;
        String str6 = this.subtitle;
        int hashCode14 = (hashCode13 + (str6 == null ? 0 : str6.hashCode())) * 31;
        Integer num8 = this.subtitleColor;
        int hashCode15 = (hashCode14 + (num8 == null ? 0 : num8.hashCode())) * 31;
        Integer num9 = this.thumbnailBackgroundColor;
        int hashCode16 = (hashCode15 + (num9 == null ? 0 : num9.hashCode())) * 31;
        Integer num10 = this.thumbnailCornerRadius;
        int hashCode17 = (hashCode16 + (num10 == null ? 0 : num10.hashCode())) * 31;
        String str7 = this.thumbnailText;
        int hashCode18 = (hashCode17 + (str7 == null ? 0 : str7.hashCode())) * 31;
        String str8 = this.thumbnailUrl;
        int hashCode19 = (hashCode18 + (str8 == null ? 0 : str8.hashCode())) * 31;
        Integer num11 = this.titleColor;
        int hashCode20 = (hashCode19 + (num11 == null ? 0 : num11.hashCode())) * 31;
        String str9 = this.titleText;
        int hashCode21 = (hashCode20 + (str9 == null ? 0 : str9.hashCode())) * 31;
        InviteType inviteType = this.type;
        int hashCode22 = (this.extendedType.hashCode() + ((hashCode21 + (inviteType == null ? 0 : inviteType.hashCode())) * 31)) * 31;
        String str10 = this.memberText;
        int hashCode23 = (hashCode22 + (str10 == null ? 0 : str10.hashCode())) * 31;
        String str11 = this.onlineText;
        int d6 = k0.d.d(com.discord.chat.bridge.botuikit.a.u(this.bannerColorSecondary, com.discord.chat.bridge.botuikit.a.u(this.bannerColor, (hashCode23 + (str11 == null ? 0 : str11.hashCode())) * 31, 31), 31), 31, this.hasProfileOverflow);
        String str12 = this.badgeIconUrl;
        int hashCode24 = (d6 + (str12 == null ? 0 : str12.hashCode())) * 31;
        String str13 = this.establishedText;
        int hashCode25 = (hashCode24 + (str13 == null ? 0 : str13.hashCode())) * 31;
        List<InviteRole> list = this.roles;
        int hashCode26 = (hashCode25 + (list == null ? 0 : list.hashCode())) * 31;
        String str14 = this.rolesHeadingText;
        return hashCode26 + (str14 != null ? str14.hashCode() : 0);
    }

    @NotNull
    public String toString() {
        Integer num = this.acceptLabelBackgroundColor;
        Integer num2 = this.acceptLabelBorderColor;
        Integer num3 = this.acceptLabelColor;
        String str = this.acceptLabelText;
        Integer num4 = this.bodyTextColor;
        String str2 = this.bodyText;
        int i5 = this.backgroundColor;
        int i6 = this.borderColor;
        Boolean bool = this.canBeAccepted;
        Boolean bool2 = this.embedCanBeTapped;
        int i10 = this.headerColor;
        String str3 = this.headerText;
        Integer num5 = this.resolvingGradientEnd;
        Integer num6 = this.resolvingGradientStart;
        Boolean bool3 = this.splashHasRadialGradient;
        Integer num7 = this.splashOpacity;
        String str4 = this.splashUrl;
        String str5 = this.inviteSplash;
        String str6 = this.subtitle;
        Integer num8 = this.subtitleColor;
        Integer num9 = this.thumbnailBackgroundColor;
        Integer num10 = this.thumbnailCornerRadius;
        String str7 = this.thumbnailText;
        String str8 = this.thumbnailUrl;
        Integer num11 = this.titleColor;
        String str9 = this.titleText;
        InviteType inviteType = this.type;
        CodedLinkExtendedType codedLinkExtendedType = this.extendedType;
        String str10 = this.memberText;
        String str11 = this.onlineText;
        int i11 = this.bannerColor;
        int i12 = this.bannerColorSecondary;
        boolean z5 = this.hasProfileOverflow;
        String str12 = this.badgeIconUrl;
        String str13 = this.establishedText;
        List<InviteRole> list = this.roles;
        String str14 = this.rolesHeadingText;
        StringBuilder sb2 = new StringBuilder("GuildProfileInviteEmbedImpl(acceptLabelBackgroundColor=");
        sb2.append(num);
        sb2.append(", acceptLabelBorderColor=");
        sb2.append(num2);
        sb2.append(", acceptLabelColor=");
        k0.d.r(num3, ", acceptLabelText=", str, ", bodyTextColor=", sb2);
        k0.d.r(num4, ", bodyText=", str2, ", backgroundColor=", sb2);
        a3.e.y(sb2, i5, ", borderColor=", i6, ", canBeAccepted=");
        sb2.append(bool);
        sb2.append(", embedCanBeTapped=");
        sb2.append(bool2);
        sb2.append(", headerColor=");
        a3.e.z(sb2, i10, ", headerText=", str3, ", resolvingGradientEnd=");
        k0.d.s(sb2, num5, ", resolvingGradientStart=", num6, ", splashHasRadialGradient=");
        sb2.append(bool3);
        sb2.append(", splashOpacity=");
        sb2.append(num7);
        sb2.append(", splashUrl=");
        a3.e.A(sb2, str4, ", inviteSplash=", str5, ", subtitle=");
        com.discord.chat.bridge.botuikit.a.r(num8, str6, ", subtitleColor=", ", thumbnailBackgroundColor=", sb2);
        k0.d.s(sb2, num9, ", thumbnailCornerRadius=", num10, ", thumbnailText=");
        a3.e.A(sb2, str7, ", thumbnailUrl=", str8, ", titleColor=");
        k0.d.r(num11, ", titleText=", str9, ", type=", sb2);
        sb2.append(inviteType);
        sb2.append(", extendedType=");
        sb2.append(codedLinkExtendedType);
        sb2.append(", memberText=");
        a3.e.A(sb2, str10, ", onlineText=", str11, ", bannerColor=");
        a3.e.y(sb2, i11, ", bannerColorSecondary=", i12, ", hasProfileOverflow=");
        sb2.append(z5);
        sb2.append(", badgeIconUrl=");
        sb2.append(str12);
        sb2.append(", establishedText=");
        sb2.append(str13);
        sb2.append(", roles=");
        sb2.append(list);
        sb2.append(", rolesHeadingText=");
        return com.discord.chat.bridge.botuikit.a.j(sb2, str14, ")");
    }

    public /* synthetic */ GuildProfileInviteEmbedImpl(Integer num, Integer num2, Integer num3, String str, Integer num4, String str2, int i5, int i6, Boolean bool, Boolean bool2, int i10, String str3, Integer num5, Integer num6, Boolean bool3, Integer num7, String str4, String str5, String str6, Integer num8, Integer num9, Integer num10, String str7, String str8, Integer num11, String str9, InviteType inviteType, CodedLinkExtendedType codedLinkExtendedType, String str10, String str11, int i11, int i12, boolean z5, String str12, String str13, List list, String str14, int i13, int i14, DefaultConstructorMarker defaultConstructorMarker) {
        this((i13 & 1) != 0 ? null : num, (i13 & 2) != 0 ? null : num2, (i13 & 4) != 0 ? null : num3, (i13 & 8) != 0 ? null : str, (i13 & 16) != 0 ? null : num4, (i13 & 32) != 0 ? null : str2, i5, i6, (i13 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? null : bool, (i13 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? null : bool2, i10, str3, (i13 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? null : num5, (i13 & 8192) != 0 ? null : num6, (i13 & 16384) != 0 ? null : bool3, (32768 & i13) != 0 ? null : num7, (65536 & i13) != 0 ? null : str4, (131072 & i13) != 0 ? null : str5, (262144 & i13) != 0 ? null : str6, (524288 & i13) != 0 ? null : num8, (1048576 & i13) != 0 ? null : num9, (2097152 & i13) != 0 ? null : num10, (4194304 & i13) != 0 ? null : str7, (8388608 & i13) != 0 ? null : str8, (16777216 & i13) != 0 ? null : num11, (33554432 & i13) != 0 ? null : str9, (67108864 & i13) != 0 ? null : inviteType, (134217728 & i13) != 0 ? CodedLinkExtendedType.GUILD_PROFILE_INVITE : codedLinkExtendedType, (268435456 & i13) != 0 ? null : str10, (i13 & 536870912) != 0 ? null : str11, i11, i12, z5, (i14 & 2) != 0 ? null : str12, (i14 & 4) != 0 ? null : str13, (i14 & 8) != 0 ? null : list, (i14 & 16) != 0 ? null : str14);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public GuildProfileInviteEmbedImpl(Integer num, Integer num2, Integer num3, String str, Integer num4, String str2, int i5, int i6, Boolean bool, Boolean bool2, int i10, String str3, Integer num5, Integer num6, Boolean bool3, Integer num7, String str4, String str5, String str6, Integer num8, Integer num9, Integer num10, String str7, String str8, Integer num11, String str9, InviteType inviteType, @NotNull CodedLinkExtendedType extendedType, String str10, String str11, int i11, int i12, boolean z5, String str12, String str13, List<InviteRole> list, String str14) {
        super(null);
        Intrinsics.checkNotNullParameter(extendedType, "extendedType");
        this.acceptLabelBackgroundColor = num;
        this.acceptLabelBorderColor = num2;
        this.acceptLabelColor = num3;
        this.acceptLabelText = str;
        this.bodyTextColor = num4;
        this.bodyText = str2;
        this.backgroundColor = i5;
        this.borderColor = i6;
        this.canBeAccepted = bool;
        this.embedCanBeTapped = bool2;
        this.headerColor = i10;
        this.headerText = str3;
        this.resolvingGradientEnd = num5;
        this.resolvingGradientStart = num6;
        this.splashHasRadialGradient = bool3;
        this.splashOpacity = num7;
        this.splashUrl = str4;
        this.inviteSplash = str5;
        this.subtitle = str6;
        this.subtitleColor = num8;
        this.thumbnailBackgroundColor = num9;
        this.thumbnailCornerRadius = num10;
        this.thumbnailText = str7;
        this.thumbnailUrl = str8;
        this.titleColor = num11;
        this.titleText = str9;
        this.type = inviteType;
        this.extendedType = extendedType;
        this.memberText = str10;
        this.onlineText = str11;
        this.bannerColor = i11;
        this.bannerColorSecondary = i12;
        this.hasProfileOverflow = z5;
        this.badgeIconUrl = str12;
        this.establishedText = str13;
        this.roles = list;
        this.rolesHeadingText = str14;
    }
}
