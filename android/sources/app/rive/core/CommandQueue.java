package app.rive.core;

import a3.e;
import android.graphics.SurfaceTexture;
import android.os.Trace;
import androidx.annotation.Keep;
import androidx.lifecycle.DefaultLifecycleObserver;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.c0;
import androidx.lifecycle.k0;
import app.rive.Fit;
import app.rive.RiveFileException;
import app.rive.RiveLog;
import app.rive.ViewModelInstanceSource;
import app.rive.ViewModelSource;
import app.rive.runtime.kotlin.core.File;
import app.rive.runtime.kotlin.core.ViewModel;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.ViewProps;
import fo.n;
import fo.q;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CancellationException;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicLong;
import k0.d;
import ki.b;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.InlineMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.jvm.internal.Ref;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.time.Duration;
import kotlinx.coroutines.CancellableContinuation;
import kotlinx.coroutines.flow.MutableSharedFlow;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import qr.u;
import qr.y;

@Metadata(d1 = {"\u0000È\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0005\n\u0002\u0010\t\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\r\n\u0002\u0010\u0012\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010 \n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u000e\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\u0007\n\u0002\b&\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b(\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0019\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0016\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\n\b\u0007\u0018\u0000 â\u00022\u00020\u0001:\u0004â\u0002ã\u0002B%\u0012\b\b\u0002\u0010\u0003\u001a\u00020\u0002\u0012\b\b\u0002\u0010\u0005\u001a\u00020\u0004\u0012\b\b\u0002\u0010\u0007\u001a\u00020\u0006¢\u0006\u0004\b\b\u0010\tJ\u0017\u0010\r\u001a\u00020\f2\u0006\u0010\u000b\u001a\u00020\nH\u0016¢\u0006\u0004\b\r\u0010\u000eJ\u001f\u0010\u0010\u001a\u00020\f2\u0006\u0010\u000b\u001a\u00020\n2\u0006\u0010\u000f\u001a\u00020\nH\u0016¢\u0006\u0004\b\u0010\u0010\u0011J\u0017\u0010\u0016\u001a\u00020\u00062\u0006\u0010\u0013\u001a\u00020\u0012H\u0001¢\u0006\u0004\b\u0014\u0010\u0015J\u0015\u0010\u0018\u001a\u00020\f2\u0006\u0010\u0017\u001a\u00020\u0006¢\u0006\u0004\b\u0018\u0010\u0019J\u001d\u0010\u001d\u001a\u00020\u001c2\u0006\u0010\u001b\u001a\u00020\u001a2\u0006\u0010\u000b\u001a\u00020\n¢\u0006\u0004\b\u001d\u0010\u001eJ\"\u0010#\u001a\u00020\f2\u0006\u0010 \u001a\u00020\u001f2\b\b\u0002\u0010\"\u001a\u00020!H\u0086@¢\u0006\u0004\b#\u0010$J\r\u0010%\u001a\u00020\f¢\u0006\u0004\b%\u0010&J\u0017\u0010*\u001a\u00020)2\u0006\u0010(\u001a\u00020'H\u0007¢\u0006\u0004\b*\u0010+J\u0015\u0010*\u001a\u00020)2\u0006\u0010-\u001a\u00020,¢\u0006\u0004\b*\u0010.J\u001d\u00102\u001a\u00020)2\u0006\u00100\u001a\u00020/2\u0006\u00101\u001a\u00020/¢\u0006\u0004\b2\u00103J\u0017\u00104\u001a\u00020\f2\u0006\u0010-\u001a\u00020)H\u0007¢\u0006\u0004\b4\u00105J\u001f\u00108\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\u0006\u00107\u001a\u00020\nH\u0001¢\u0006\u0004\b8\u00109J\u001f\u0010:\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\u0006\u00107\u001a\u00020\nH\u0001¢\u0006\u0004\b:\u00109J\u001f\u0010;\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\u0006\u00107\u001a\u00020\nH\u0001¢\u0006\u0004\b;\u00109J\u001f\u0010<\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\u0006\u00107\u001a\u00020\nH\u0001¢\u0006\u0004\b<\u00109J\u001e\u0010B\u001a\u00020?2\u0006\u0010>\u001a\u00020=H\u0086@ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b@\u0010AJ\u001f\u0010D\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\u0006\u0010C\u001a\u00020?H\u0001¢\u0006\u0004\bD\u0010EJ\u0018\u0010H\u001a\u00020\f2\u0006\u0010C\u001a\u00020?ø\u0001\u0001¢\u0006\u0004\bF\u0010GJ!\u0010L\u001a\b\u0012\u0004\u0012\u00020\n0I2\u0006\u0010C\u001a\u00020?H\u0086@ø\u0001\u0001¢\u0006\u0004\bJ\u0010KJ%\u0010N\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\f\u0010M\u001a\b\u0012\u0004\u0012\u00020\n0IH\u0001¢\u0006\u0004\bN\u0010OJ!\u0010S\u001a\b\u0012\u0004\u0012\u00020\n0I2\u0006\u0010Q\u001a\u00020PH\u0086@ø\u0001\u0001¢\u0006\u0004\bR\u0010KJ%\u0010T\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\f\u0010M\u001a\b\u0012\u0004\u0012\u00020\n0IH\u0001¢\u0006\u0004\bT\u0010OJ#\u0010X\u001a\u00020U2\u0006\u0010C\u001a\u00020?2\u0006\u0010Q\u001a\u00020PH\u0086@ø\u0001\u0001¢\u0006\u0004\bV\u0010WJ'\u0010[\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\u0006\u0010Y\u001a\u00020\n2\u0006\u0010Z\u001a\u00020\nH\u0001¢\u0006\u0004\b[\u0010\\J!\u0010^\u001a\b\u0012\u0004\u0012\u00020\n0I2\u0006\u0010C\u001a\u00020?H\u0086@ø\u0001\u0001¢\u0006\u0004\b]\u0010KJ%\u0010_\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\f\u0010M\u001a\b\u0012\u0004\u0012\u00020\n0IH\u0001¢\u0006\u0004\b_\u0010OJ)\u0010b\u001a\b\u0012\u0004\u0012\u00020\n0I2\u0006\u0010C\u001a\u00020?2\u0006\u0010Y\u001a\u00020\nH\u0086@ø\u0001\u0001¢\u0006\u0004\b`\u0010aJ%\u0010c\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\f\u0010M\u001a\b\u0012\u0004\u0012\u00020\n0IH\u0001¢\u0006\u0004\bc\u0010OJ)\u0010f\u001a\b\u0012\u0004\u0012\u00020d0I2\u0006\u0010C\u001a\u00020?2\u0006\u0010Y\u001a\u00020\nH\u0086@ø\u0001\u0001¢\u0006\u0004\be\u0010aJ%\u0010h\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\f\u0010g\u001a\b\u0012\u0004\u0012\u00020d0IH\u0001¢\u0006\u0004\bh\u0010OJ!\u0010k\u001a\b\u0012\u0004\u0012\u00020i0I2\u0006\u0010C\u001a\u00020?H\u0086@ø\u0001\u0001¢\u0006\u0004\bj\u0010KJ%\u0010m\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\f\u0010l\u001a\b\u0012\u0004\u0012\u00020i0IH\u0001¢\u0006\u0004\bm\u0010OJ\u0018\u0010p\u001a\u00020P2\u0006\u0010C\u001a\u00020?ø\u0001\u0001¢\u0006\u0004\bn\u0010oJ \u0010t\u001a\u00020P2\u0006\u0010C\u001a\u00020?2\u0006\u0010q\u001a\u00020\nø\u0001\u0001¢\u0006\u0004\br\u0010sJ\u0018\u0010v\u001a\u00020\f2\u0006\u0010Q\u001a\u00020Pø\u0001\u0001¢\u0006\u0004\bu\u0010GJ\u0018\u0010y\u001a\u00020w2\u0006\u0010Q\u001a\u00020Pø\u0001\u0001¢\u0006\u0004\bx\u0010oJ \u0010{\u001a\u00020w2\u0006\u0010Q\u001a\u00020P2\u0006\u0010q\u001a\u00020\nø\u0001\u0001¢\u0006\u0004\bz\u0010sJ\u0018\u0010~\u001a\u00020\f2\u0006\u0010|\u001a\u00020wø\u0001\u0001¢\u0006\u0004\b}\u0010GJ#\u0010\u0082\u0001\u001a\u00020\f2\u0006\u0010|\u001a\u00020w2\u0007\u0010\u0080\u0001\u001a\u00020\u007fø\u0001\u0001¢\u0006\u0005\b\u0081\u0001\u0010EJ\u0019\u0010\u0083\u0001\u001a\u00020\f2\u0006\u0010|\u001a\u00020wH\u0001¢\u0006\u0005\b\u0083\u0001\u0010GJ%\u0010\u0088\u0001\u001a\u00030\u0085\u00012\u0006\u0010C\u001a\u00020?2\u0007\u0010\u000b\u001a\u00030\u0084\u0001ø\u0001\u0001¢\u0006\u0006\b\u0086\u0001\u0010\u0087\u0001J\u001c\u0010\u008b\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u0001ø\u0001\u0001¢\u0006\u0005\b\u008a\u0001\u0010GJ$\u0010\u008d\u0001\u001a\u00020\f2\u0006\u0010|\u001a\u00020w2\b\u0010\u0089\u0001\u001a\u00030\u0085\u0001ø\u0001\u0001¢\u0006\u0005\b\u008c\u0001\u0010EJ0\u0010\u0093\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\n2\b\u0010\u0090\u0001\u001a\u00030\u008f\u0001ø\u0001\u0001¢\u0006\u0006\b\u0091\u0001\u0010\u0092\u0001J)\u0010\u0095\u0001\u001a\u00030\u008f\u00012\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\nH\u0086@ø\u0001\u0001¢\u0006\u0005\b\u0094\u0001\u0010aJ7\u0010\u0097\u0001\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u0096\u0001\u001a\u00020\n2\b\u0010\u0090\u0001\u001a\u00030\u008f\u0001H\u0001¢\u0006\u0006\b\u0097\u0001\u0010\u0098\u0001J.\u0010\u009a\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\n2\u0007\u0010\u0090\u0001\u001a\u00020\nø\u0001\u0001¢\u0006\u0005\b\u0099\u0001\u0010\\J(\u0010\u009c\u0001\u001a\u00020\n2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\nH\u0086@ø\u0001\u0001¢\u0006\u0005\b\u009b\u0001\u0010aJ6\u0010\u009d\u0001\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u0096\u0001\u001a\u00020\n2\u0007\u0010\u0090\u0001\u001a\u00020\nH\u0001¢\u0006\u0006\b\u009d\u0001\u0010\u009e\u0001J/\u0010¡\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\n2\u0007\u0010\u0090\u0001\u001a\u00020\u0006ø\u0001\u0001¢\u0006\u0006\b\u009f\u0001\u0010 \u0001J(\u0010£\u0001\u001a\u00020\u00062\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\nH\u0086@ø\u0001\u0001¢\u0006\u0005\b¢\u0001\u0010aJ6\u0010¤\u0001\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u0096\u0001\u001a\u00020\n2\u0007\u0010\u0090\u0001\u001a\u00020\u0006H\u0001¢\u0006\u0006\b¤\u0001\u0010¥\u0001J.\u0010§\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\n2\u0007\u0010\u0090\u0001\u001a\u00020\nø\u0001\u0001¢\u0006\u0005\b¦\u0001\u0010\\J(\u0010©\u0001\u001a\u00020\n2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\nH\u0086@ø\u0001\u0001¢\u0006\u0005\b¨\u0001\u0010aJ6\u0010ª\u0001\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u0096\u0001\u001a\u00020\n2\u0007\u0010\u0090\u0001\u001a\u00020\nH\u0001¢\u0006\u0006\bª\u0001\u0010\u009e\u0001J1\u0010\u00ad\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\n2\t\b\u0001\u0010\u0090\u0001\u001a\u00020/ø\u0001\u0001¢\u0006\u0006\b«\u0001\u0010¬\u0001J(\u0010¯\u0001\u001a\u00020/2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\nH\u0086@ø\u0001\u0001¢\u0006\u0005\b®\u0001\u0010aJ8\u0010°\u0001\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u0096\u0001\u001a\u00020\n2\t\b\u0001\u0010\u0090\u0001\u001a\u00020/H\u0001¢\u0006\u0006\b°\u0001\u0010±\u0001J%\u0010³\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\nø\u0001\u0001¢\u0006\u0005\b²\u0001\u00109J-\u0010´\u0001\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u0096\u0001\u001a\u00020\nH\u0001¢\u0006\u0006\b´\u0001\u0010µ\u0001J0\u0010º\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\n2\b\u0010·\u0001\u001a\u00030¶\u0001ø\u0001\u0001¢\u0006\u0006\b¸\u0001\u0010¹\u0001J0\u0010¿\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\n2\b\u0010¼\u0001\u001a\u00030»\u0001ø\u0001\u0001¢\u0006\u0006\b½\u0001\u0010¾\u0001J.\u0010Á\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\n2\u0006\u0010Q\u001a\u00020Pø\u0001\u0001¢\u0006\u0006\bÀ\u0001\u0010¾\u0001J0\u0010Ä\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\n2\b\u0010Â\u0001\u001a\u00030\u0085\u0001ø\u0001\u0001¢\u0006\u0006\bÃ\u0001\u0010¾\u0001J(\u0010Æ\u0001\u001a\u00020/2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\nH\u0086@ø\u0001\u0001¢\u0006\u0005\bÅ\u0001\u0010aJ#\u0010È\u0001\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\u0007\u0010Ç\u0001\u001a\u00020/H\u0001¢\u0006\u0006\bÈ\u0001\u0010É\u0001J9\u0010Î\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\n2\u0007\u0010Ê\u0001\u001a\u00020/2\b\u0010Ë\u0001\u001a\u00030\u0085\u0001ø\u0001\u0001¢\u0006\u0006\bÌ\u0001\u0010Í\u0001J0\u0010Ð\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\n2\b\u0010Ë\u0001\u001a\u00030\u0085\u0001ø\u0001\u0001¢\u0006\u0006\bÏ\u0001\u0010¾\u0001J/\u0010Ò\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\n2\u0007\u0010Ê\u0001\u001a\u00020/ø\u0001\u0001¢\u0006\u0006\bÑ\u0001\u0010¬\u0001J0\u0010Ô\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\n2\b\u0010Ë\u0001\u001a\u00030\u0085\u0001ø\u0001\u0001¢\u0006\u0006\bÓ\u0001\u0010¾\u0001J8\u0010Ù\u0001\u001a\u00020\f2\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u008e\u0001\u001a\u00020\n2\u0007\u0010Õ\u0001\u001a\u00020/2\u0007\u0010Ö\u0001\u001a\u00020/ø\u0001\u0001¢\u0006\u0006\b×\u0001\u0010Ø\u0001J!\u0010Û\u0001\u001a\u00030»\u00012\u0006\u0010>\u001a\u00020=H\u0086@ø\u0001\u0000ø\u0001\u0001¢\u0006\u0005\bÚ\u0001\u0010AJ#\u0010Ü\u0001\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\b\u0010¼\u0001\u001a\u00030»\u0001H\u0001¢\u0006\u0005\bÜ\u0001\u0010EJ!\u0010Ý\u0001\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\u0006\u00107\u001a\u00020\nH\u0001¢\u0006\u0005\bÝ\u0001\u00109J\u001c\u0010ß\u0001\u001a\u00020\f2\b\u0010¼\u0001\u001a\u00030»\u0001ø\u0001\u0001¢\u0006\u0005\bÞ\u0001\u0010GJ%\u0010â\u0001\u001a\u00020\f2\u0006\u0010q\u001a\u00020\n2\b\u0010¼\u0001\u001a\u00030»\u0001ø\u0001\u0001¢\u0006\u0006\bà\u0001\u0010á\u0001J\u0017\u0010ã\u0001\u001a\u00020\f2\u0006\u0010q\u001a\u00020\n¢\u0006\u0005\bã\u0001\u0010\u000eJ!\u0010æ\u0001\u001a\u00030ä\u00012\u0006\u0010>\u001a\u00020=H\u0086@ø\u0001\u0000ø\u0001\u0001¢\u0006\u0005\bå\u0001\u0010AJ#\u0010è\u0001\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\b\u0010ç\u0001\u001a\u00030ä\u0001H\u0001¢\u0006\u0005\bè\u0001\u0010EJ!\u0010é\u0001\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\u0006\u00107\u001a\u00020\nH\u0001¢\u0006\u0005\bé\u0001\u00109J\u001c\u0010ë\u0001\u001a\u00020\f2\b\u0010ç\u0001\u001a\u00030ä\u0001ø\u0001\u0001¢\u0006\u0005\bê\u0001\u0010GJ%\u0010í\u0001\u001a\u00020\f2\u0006\u0010q\u001a\u00020\n2\b\u0010ç\u0001\u001a\u00030ä\u0001ø\u0001\u0001¢\u0006\u0006\bì\u0001\u0010á\u0001J\u0017\u0010î\u0001\u001a\u00020\f2\u0006\u0010q\u001a\u00020\n¢\u0006\u0005\bî\u0001\u0010\u000eJ!\u0010ñ\u0001\u001a\u00030ï\u00012\u0006\u0010>\u001a\u00020=H\u0086@ø\u0001\u0000ø\u0001\u0001¢\u0006\u0005\bð\u0001\u0010AJ#\u0010ó\u0001\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\b\u0010ò\u0001\u001a\u00030ï\u0001H\u0001¢\u0006\u0005\bó\u0001\u0010EJ!\u0010ô\u0001\u001a\u00020\f2\u0006\u00106\u001a\u00020\u00122\u0006\u00107\u001a\u00020\nH\u0001¢\u0006\u0005\bô\u0001\u00109J\u001c\u0010ö\u0001\u001a\u00020\f2\b\u0010ò\u0001\u001a\u00030ï\u0001ø\u0001\u0001¢\u0006\u0005\bõ\u0001\u0010GJ%\u0010ø\u0001\u001a\u00020\f2\u0006\u0010q\u001a\u00020\n2\b\u0010ò\u0001\u001a\u00030ï\u0001ø\u0001\u0001¢\u0006\u0006\b÷\u0001\u0010á\u0001J\u0017\u0010ù\u0001\u001a\u00020\f2\u0006\u0010q\u001a\u00020\n¢\u0006\u0005\bù\u0001\u0010\u000eJV\u0010\u0083\u0002\u001a\u00020\f2\u0006\u0010|\u001a\u00020w2\b\u0010û\u0001\u001a\u00030ú\u00012\b\u0010ü\u0001\u001a\u00030\u008f\u00012\b\u0010ý\u0001\u001a\u00030\u008f\u00012\u0007\u0010þ\u0001\u001a\u00020/2\b\u0010ÿ\u0001\u001a\u00030\u008f\u00012\b\u0010\u0080\u0002\u001a\u00030\u008f\u0001ø\u0001\u0001¢\u0006\u0006\b\u0081\u0002\u0010\u0082\u0002JV\u0010\u0085\u0002\u001a\u00020\f2\u0006\u0010|\u001a\u00020w2\b\u0010û\u0001\u001a\u00030ú\u00012\b\u0010ü\u0001\u001a\u00030\u008f\u00012\b\u0010ý\u0001\u001a\u00030\u008f\u00012\u0007\u0010þ\u0001\u001a\u00020/2\b\u0010ÿ\u0001\u001a\u00030\u008f\u00012\b\u0010\u0080\u0002\u001a\u00030\u008f\u0001ø\u0001\u0001¢\u0006\u0006\b\u0084\u0002\u0010\u0082\u0002JV\u0010\u0087\u0002\u001a\u00020\f2\u0006\u0010|\u001a\u00020w2\b\u0010û\u0001\u001a\u00030ú\u00012\b\u0010ü\u0001\u001a\u00030\u008f\u00012\b\u0010ý\u0001\u001a\u00030\u008f\u00012\u0007\u0010þ\u0001\u001a\u00020/2\b\u0010ÿ\u0001\u001a\u00030\u008f\u00012\b\u0010\u0080\u0002\u001a\u00030\u008f\u0001ø\u0001\u0001¢\u0006\u0006\b\u0086\u0002\u0010\u0082\u0002JV\u0010\u0089\u0002\u001a\u00020\f2\u0006\u0010|\u001a\u00020w2\b\u0010û\u0001\u001a\u00030ú\u00012\b\u0010ü\u0001\u001a\u00030\u008f\u00012\b\u0010ý\u0001\u001a\u00030\u008f\u00012\u0007\u0010þ\u0001\u001a\u00020/2\b\u0010ÿ\u0001\u001a\u00030\u008f\u00012\b\u0010\u0080\u0002\u001a\u00030\u008f\u0001ø\u0001\u0001¢\u0006\u0006\b\u0088\u0002\u0010\u0082\u0002J/\u0010\u008d\u0002\u001a\u00020\f2\u0006\u0010Q\u001a\u00020P2\u0006\u0010-\u001a\u00020)2\n\b\u0002\u0010\u008a\u0002\u001a\u00030\u008f\u0001ø\u0001\u0001¢\u0006\u0006\b\u008b\u0002\u0010\u008c\u0002J\u001a\u0010\u008f\u0002\u001a\u00020\f2\u0006\u0010Q\u001a\u00020Pø\u0001\u0001¢\u0006\u0005\b\u008e\u0002\u0010GJ@\u0010\u0093\u0002\u001a\u00020\f2\u0006\u0010Q\u001a\u00020P2\u0006\u0010|\u001a\u00020w2\u0006\u0010-\u001a\u00020)2\b\u0010û\u0001\u001a\u00030ú\u00012\t\b\u0002\u0010\u0090\u0002\u001a\u00020/ø\u0001\u0001¢\u0006\u0006\b\u0091\u0002\u0010\u0092\u0002J\u001e\u0010\u0097\u0002\u001a\u00020\f2\b\u0010\u0095\u0002\u001a\u00030\u0094\u0002H\u0000ø\u0001\u0001¢\u0006\u0005\b\u0096\u0002\u0010GJ[\u0010\u009b\u0002\u001a\u00020\f2\u0006\u0010Q\u001a\u00020P2\u0006\u0010|\u001a\u00020w2\u0006\u0010-\u001a\u00020)2\u0007\u0010\u0098\u0002\u001a\u00020=2\u0006\u00100\u001a\u00020/2\u0006\u00101\u001a\u00020/2\n\b\u0002\u0010û\u0001\u001a\u00030ú\u00012\t\b\u0002\u0010\u0090\u0002\u001a\u00020/ø\u0001\u0001¢\u0006\u0006\b\u0099\u0002\u0010\u009a\u0002J\"\u0010 \u0002\u001a\u00020\f2\u000e\u0010\u009d\u0002\u001a\t\u0012\u0004\u0012\u00020\f0\u009c\u0002H\u0000¢\u0006\u0006\b\u009e\u0002\u0010\u009f\u0002J\u001a\u0010¢\u0002\u001a\u00020\f2\u0007\u0010¡\u0002\u001a\u00020\u0012H\u0002¢\u0006\u0005\b¢\u0002\u0010GJ\u0019\u0010¥\u0002\u001a\u00030\u0094\u0002H\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\u0006\b£\u0002\u0010¤\u0002JW\u0010¬\u0002\u001a\u00020\f\"\u0005\b\u0000\u0010¦\u00022\u0006\u00106\u001a\u00020\u00122\b\u0010\u0089\u0001\u001a\u00030\u0085\u00012\u0007\u0010\u0096\u0001\u001a\u00020\n2\u0007\u0010\u0090\u0001\u001a\u00028\u00002\u0015\u0010©\u0002\u001a\u0010\u0012\u000b\u0012\t\u0012\u0004\u0012\u00028\u00000¨\u00020§\u0002H\u0002ø\u0001\u0001¢\u0006\u0006\bª\u0002\u0010«\u0002J\u0011\u0010\u00ad\u0002\u001a\u00020\fH\u0002¢\u0006\u0005\b\u00ad\u0002\u0010&J4\u0010°\u0002\u001a\u00028\u0000\"\u0007\b\u0000\u0010¦\u0002\u0018\u00012\u0016\b\u0004\u0010¯\u0002\u001a\u000f\u0012\u0004\u0012\u00020\u0012\u0012\u0004\u0012\u00020\f0®\u0002H\u0082H¢\u0006\u0006\b°\u0002\u0010±\u0002R\u0015\u0010\u0003\u001a\u00020\u00028\u0002X\u0082\u0004¢\u0006\u0007\n\u0005\b\u0003\u0010²\u0002R\u0015\u0010\u0005\u001a\u00020\u00048\u0002X\u0082\u0004¢\u0006\u0007\n\u0005\b\u0005\u0010³\u0002R\u0018\u0010µ\u0002\u001a\u00030´\u00028\u0002X\u0082\u0004¢\u0006\b\n\u0006\bµ\u0002\u0010¶\u0002R\u0018\u0010¡\u0002\u001a\u00030·\u00028\u0002X\u0082\u0004¢\u0006\b\n\u0006\b¡\u0002\u0010¸\u0002R\u001a\u0010º\u0002\u001a\u00030¹\u00028\u0002@\u0002X\u0082\u000e¢\u0006\b\n\u0006\bº\u0002\u0010»\u0002R\u001e\u0010¼\u0002\u001a\t\u0012\u0004\u0012\u00020w0§\u00028\u0002X\u0082\u0004¢\u0006\b\n\u0006\b¼\u0002\u0010½\u0002R#\u0010¿\u0002\u001a\t\u0012\u0004\u0012\u00020w0¾\u00028\u0006¢\u0006\u0010\n\u0006\b¿\u0002\u0010À\u0002\u001a\u0006\bÁ\u0002\u0010Â\u0002R&\u0010Ã\u0002\u001a\u0011\u0012\f\u0012\n\u0012\u0005\u0012\u00030\u008f\u00010¨\u00020§\u00028\u0002X\u0082\u0004¢\u0006\b\n\u0006\bÃ\u0002\u0010½\u0002R+\u0010Ä\u0002\u001a\u0011\u0012\f\u0012\n\u0012\u0005\u0012\u00030\u008f\u00010¨\u00020¾\u00028\u0006¢\u0006\u0010\n\u0006\bÄ\u0002\u0010À\u0002\u001a\u0006\bÅ\u0002\u0010Â\u0002R%\u0010Æ\u0002\u001a\u0010\u0012\u000b\u0012\t\u0012\u0004\u0012\u00020\n0¨\u00020§\u00028\u0002X\u0082\u0004¢\u0006\b\n\u0006\bÆ\u0002\u0010½\u0002R*\u0010Ç\u0002\u001a\u0010\u0012\u000b\u0012\t\u0012\u0004\u0012\u00020\n0¨\u00020¾\u00028\u0006¢\u0006\u0010\n\u0006\bÇ\u0002\u0010À\u0002\u001a\u0006\bÈ\u0002\u0010Â\u0002R%\u0010É\u0002\u001a\u0010\u0012\u000b\u0012\t\u0012\u0004\u0012\u00020\u00060¨\u00020§\u00028\u0002X\u0082\u0004¢\u0006\b\n\u0006\bÉ\u0002\u0010½\u0002R*\u0010Ê\u0002\u001a\u0010\u0012\u000b\u0012\t\u0012\u0004\u0012\u00020\u00060¨\u00020¾\u00028\u0006¢\u0006\u0010\n\u0006\bÊ\u0002\u0010À\u0002\u001a\u0006\bË\u0002\u0010Â\u0002R%\u0010Ì\u0002\u001a\u0010\u0012\u000b\u0012\t\u0012\u0004\u0012\u00020\n0¨\u00020§\u00028\u0002X\u0082\u0004¢\u0006\b\n\u0006\bÌ\u0002\u0010½\u0002R*\u0010Í\u0002\u001a\u0010\u0012\u000b\u0012\t\u0012\u0004\u0012\u00020\n0¨\u00020¾\u00028\u0006¢\u0006\u0010\n\u0006\bÍ\u0002\u0010À\u0002\u001a\u0006\bÎ\u0002\u0010Â\u0002R%\u0010Ï\u0002\u001a\u0010\u0012\u000b\u0012\t\u0012\u0004\u0012\u00020/0¨\u00020§\u00028\u0002X\u0082\u0004¢\u0006\b\n\u0006\bÏ\u0002\u0010½\u0002R*\u0010Ð\u0002\u001a\u0010\u0012\u000b\u0012\t\u0012\u0004\u0012\u00020/0¨\u00020¾\u00028\u0006¢\u0006\u0010\n\u0006\bÐ\u0002\u0010À\u0002\u001a\u0006\bÑ\u0002\u0010Â\u0002R%\u0010Ò\u0002\u001a\u0010\u0012\u000b\u0012\t\u0012\u0004\u0012\u00020\f0¨\u00020§\u00028\u0002X\u0082\u0004¢\u0006\b\n\u0006\bÒ\u0002\u0010½\u0002R*\u0010Ó\u0002\u001a\u0010\u0012\u000b\u0012\t\u0012\u0004\u0012\u00020\f0¨\u00020¾\u00028\u0006¢\u0006\u0010\n\u0006\bÓ\u0002\u0010À\u0002\u001a\u0006\bÔ\u0002\u0010Â\u0002R,\u0010Ø\u0002\u001a\u0017\u0012\u0004\u0012\u00020\u0012\u0012\f\u0012\n\u0012\u0005\u0012\u00030×\u00020Ö\u00020Õ\u00028\u0002X\u0082\u0004¢\u0006\b\n\u0006\bØ\u0002\u0010Ù\u0002R\u0018\u0010Û\u0002\u001a\u00030Ú\u00028\u0002X\u0082\u0004¢\u0006\b\n\u0006\bÛ\u0002\u0010Ü\u0002R\u0017\u0010ß\u0002\u001a\u00020/8VX\u0096\u0004¢\u0006\b\u001a\u0006\bÝ\u0002\u0010Þ\u0002R\u0017\u0010à\u0002\u001a\u00020\u00068VX\u0096\u0004¢\u0006\b\u001a\u0006\bà\u0002\u0010á\u0002\u0082\u0002\u000b\n\u0002\b!\n\u0005\b¡\u001e0\u0001¨\u0006ä\u0002"}, d2 = {"Lapp/rive/core/CommandQueue;", "Lapp/rive/core/RefCounted;", "Lapp/rive/core/RenderContext;", "renderContext", "Lapp/rive/core/CommandQueueBridge;", "bridge", "", "tracingEnabled", "<init>", "(Lapp/rive/core/RenderContext;Lapp/rive/core/CommandQueueBridge;Z)V", "", "source", "", "acquire", "(Ljava/lang/String;)V", "reason", "release", "(Ljava/lang/String;Ljava/lang/String;)V", "", "timeoutMillis", "awaitShutdown$kotlin_release", "(J)Z", "awaitShutdown", ViewProps.ENABLED, "setTracingEnabled", "(Z)V", "Landroidx/lifecycle/LifecycleOwner;", "owner", "Ljava/lang/AutoCloseable;", "withLifecycle", "(Landroidx/lifecycle/LifecycleOwner;Ljava/lang/String;)Ljava/lang/AutoCloseable;", "Landroidx/lifecycle/Lifecycle;", "lifecycle", "Lapp/rive/core/FrameTicker;", "ticker", "beginPolling", "(Landroidx/lifecycle/Lifecycle;Lapp/rive/core/FrameTicker;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "pollMessages", "()V", "Landroid/graphics/SurfaceTexture;", "surfaceTexture", "Lapp/rive/core/RiveSurface;", "createRiveSurface", "(Landroid/graphics/SurfaceTexture;)Lapp/rive/core/RiveSurface;", "Lapp/rive/core/CloseableSurface;", "surface", "(Lapp/rive/core/CloseableSurface;)Lapp/rive/core/RiveSurface;", "", "width", "height", "createImageSurface", "(II)Lapp/rive/core/RiveSurface;", "destroyRiveSurface", "(Lapp/rive/core/RiveSurface;)V", "requestID", "error", "onFileError", "(JLjava/lang/String;)V", "onArtboardError", "onStateMachineError", "onViewModelInstanceError", "", "bytes", "Lapp/rive/core/FileHandle;", "loadFile-xVnc2tA", "([BLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "loadFile", "fileHandle", "onFileLoaded", "(JJ)V", "deleteFile-dJ1Evnk", "(J)V", "deleteFile", "", "getArtboardNames-evklBmw", "(JLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getArtboardNames", "names", "onArtboardsListed", "(JLjava/util/List;)V", "Lapp/rive/core/ArtboardHandle;", "artboardHandle", "getStateMachineNames-b88yb0A", "getStateMachineNames", "onStateMachinesListed", "Lapp/rive/core/DefaultViewModelInfo;", "getDefaultViewModelInfo-tl3utA8", "(JJLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getDefaultViewModelInfo", "viewModelName", "instanceName", "onDefaultViewModelInfoReceived", "(JLjava/lang/String;Ljava/lang/String;)V", "getViewModelNames-evklBmw", "getViewModelNames", "onViewModelsListed", "getViewModelInstanceNames-mgMojzc", "(JLjava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getViewModelInstanceNames", "onViewModelInstancesListed", "Lapp/rive/runtime/kotlin/core/ViewModel$Property;", "getViewModelProperties-mgMojzc", "getViewModelProperties", "properties", "onViewModelPropertiesListed", "Lapp/rive/runtime/kotlin/core/File$Enum;", "getEnums-evklBmw", "getEnums", "enums", "onEnumsListed", "createDefaultArtboard-6NrLy0M", "(J)J", "createDefaultArtboard", StackTraceHelper.NAME_KEY, "createArtboardByName-2ZIOzHc", "(JLjava/lang/String;)J", "createArtboardByName", "deleteArtboard-uiJWFY8", "deleteArtboard", "Lapp/rive/core/StateMachineHandle;", "createDefaultStateMachine-xY8vNfM", "createDefaultStateMachine", "createStateMachineByName-ItmKBmM", "createStateMachineByName", "stateMachineHandle", "deleteStateMachine-AkTCgDQ", "deleteStateMachine", "Lkotlin/time/Duration;", "deltaTime", "advanceStateMachine-DDXDRQI", "advanceStateMachine", "onStateMachineSettled", "Lapp/rive/ViewModelInstanceSource;", "Lapp/rive/core/ViewModelInstanceHandle;", "createViewModelInstance-j73Dd8U", "(JLapp/rive/ViewModelInstanceSource;)J", "createViewModelInstance", "viewModelInstanceHandle", "deleteViewModelInstance-mBajs_U", "deleteViewModelInstance", "bindViewModelInstance-ei-yHz8", "bindViewModelInstance", "propertyPath", "", "value", "setNumberProperty-iFQtAB8", "(JLjava/lang/String;F)V", "setNumberProperty", "getNumberProperty-iFQtAB8", "getNumberProperty", "propertyName", "onNumberPropertyUpdated", "(JJLjava/lang/String;F)V", "setStringProperty-iFQtAB8", "setStringProperty", "getStringProperty-iFQtAB8", "getStringProperty", "onStringPropertyUpdated", "(JJLjava/lang/String;Ljava/lang/String;)V", "setBooleanProperty-iFQtAB8", "(JLjava/lang/String;Z)V", "setBooleanProperty", "getBooleanProperty-iFQtAB8", "getBooleanProperty", "onBooleanPropertyUpdated", "(JJLjava/lang/String;Z)V", "setEnumProperty-iFQtAB8", "setEnumProperty", "getEnumProperty-iFQtAB8", "getEnumProperty", "onEnumPropertyUpdated", "setColorProperty-iFQtAB8", "(JLjava/lang/String;I)V", "setColorProperty", "getColorProperty-iFQtAB8", "getColorProperty", "onColorPropertyUpdated", "(JJLjava/lang/String;I)V", "fireTriggerProperty-ippgHXQ", "fireTriggerProperty", "onTriggerPropertyUpdated", "(JJLjava/lang/String;)V", "Lapp/rive/runtime/kotlin/core/ViewModel$PropertyDataType;", "propertyType", "subscribeToProperty-iFQtAB8", "(JLjava/lang/String;Lapp/rive/runtime/kotlin/core/ViewModel$PropertyDataType;)V", "subscribeToProperty", "Lapp/rive/core/ImageHandle;", "imageHandle", "setImageProperty-ugE2Goo", "(JLjava/lang/String;J)V", "setImageProperty", "setArtboardProperty-d7r-qXY", "setArtboardProperty", "valueHandle", "setViewModelInstanceProperty-Y8k3COA", "setViewModelInstanceProperty", "getListSize-iFQtAB8", "getListSize", "size", "onViewModelListSizeReceived", "(JI)V", "index", "itemHandle", "insertToListAtIndex-4ua1WBo", "(JLjava/lang/String;IJ)V", "insertToListAtIndex", "appendToList-Y8k3COA", "appendToList", "removeFromListAtIndex-iFQtAB8", "removeFromListAtIndex", "removeFromList-Y8k3COA", "removeFromList", "indexA", "indexB", "swapListItems-C5vwGj0", "(JLjava/lang/String;II)V", "swapListItems", "decodeImage-f0BlWSU", "decodeImage", "onImageDecoded", "onImageError", "deleteImage-JwfOFvA", "deleteImage", "registerImage-QieQ09U", "(Ljava/lang/String;J)V", "registerImage", "unregisterImage", "Lapp/rive/core/AudioHandle;", "decodeAudio-WLIIakE", "decodeAudio", "audioHandle", "onAudioDecoded", "onAudioError", "deleteAudio-QAnvCWo", "deleteAudio", "registerAudio-4kKS7jM", "registerAudio", "unregisterAudio", "Lapp/rive/core/FontHandle;", "decodeFont-sOckvAc", "decodeFont", "fontHandle", "onFontDecoded", "onFontError", "deleteFont-wK5q9OY", "deleteFont", "registerFont-8-RWjZU", "registerFont", "unregisterFont", "Lapp/rive/Fit;", "fit", "surfaceWidth", "surfaceHeight", "pointerID", "pointerX", "pointerY", "pointerMove-iHGrxBs", "(JLapp/rive/Fit;FFIFF)V", "pointerMove", "pointerDown-iHGrxBs", "pointerDown", "pointerUp-iHGrxBs", "pointerUp", "pointerExit-iHGrxBs", "pointerExit", "scaleFactor", "resizeArtboard-VFK_cXo", "(JLapp/rive/core/RiveSurface;F)V", "resizeArtboard", "resetArtboardSize-uiJWFY8", "resetArtboardSize", "clearColor", "draw-Occ3x_Y", "(JJLapp/rive/core/RiveSurface;Lapp/rive/Fit;I)V", "draw", "Lapp/rive/core/DrawKey;", "drawKey", "cancelDraw-RUTHeiE$kotlin_release", "cancelDraw", "buffer", "drawToBuffer-fS7xHJs", "(JJLapp/rive/core/RiveSurface;[BIILapp/rive/Fit;I)V", "drawToBuffer", "Lkotlin/Function0;", "work", "runOnCommandServer$kotlin_release", "(Lkotlin/jvm/functions/Function0;)V", "runOnCommandServer", "cppPointer", "dispose", "nextDrawKey-DhFih_o", "()J", "nextDrawKey", "T", "Lkotlinx/coroutines/flow/MutableSharedFlow;", "Lapp/rive/core/CommandQueue$PropertyUpdate;", "flow", "onPropertyUpdated-UrmHyfM", "(JJLjava/lang/String;Ljava/lang/Object;Lkotlinx/coroutines/flow/MutableSharedFlow;)V", "onPropertyUpdated", "cancelPendingContinuations", "Lkotlin/Function1;", "nativeFn", "suspendNativeRequest", "(Lkotlin/jvm/functions/Function1;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "Lapp/rive/core/RenderContext;", "Lapp/rive/core/CommandQueueBridge;", "Ljava/util/concurrent/CountDownLatch;", "shutdownComplete", "Ljava/util/concurrent/CountDownLatch;", "Lapp/rive/core/RCPointer;", "Lapp/rive/core/RCPointer;", "Lapp/rive/core/Listeners;", "listeners", "Lapp/rive/core/Listeners;", "_settledFlow", "Lkotlinx/coroutines/flow/MutableSharedFlow;", "Lqr/u;", "settledFlow", "Lqr/u;", "getSettledFlow", "()Lqr/u;", "_numberPropertyFlow", "numberPropertyFlow", "getNumberPropertyFlow", "_stringPropertyFlow", "stringPropertyFlow", "getStringPropertyFlow", "_booleanPropertyFlow", "booleanPropertyFlow", "getBooleanPropertyFlow", "_enumPropertyFlow", "enumPropertyFlow", "getEnumPropertyFlow", "_colorPropertyFlow", "colorPropertyFlow", "getColorPropertyFlow", "_triggerPropertyFlow", "triggerPropertyFlow", "getTriggerPropertyFlow", "Ljava/util/concurrent/ConcurrentHashMap;", "Lkotlinx/coroutines/CancellableContinuation;", "", "pendingContinuations", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/atomic/AtomicLong;", "nextRequestID", "Ljava/util/concurrent/atomic/AtomicLong;", "getRefCount", "()I", "refCount", "isDisposed", "()Z", "Companion", "PropertyUpdate", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nCommandQueue.kt\nKotlin\n*S Kotlin\n*F\n+ 1 CommandQueue.kt\napp/rive/core/CommandQueue\n+ 2 RiveLog.kt\napp/rive/RiveLog\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 4 Tracing.kt\napp/rive/core/TracingKt\n+ 5 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,2667:1\n2508#1:2684\n2529#1:2685\n2508#1:2686\n2529#1:2687\n2508#1:2688\n2529#1:2689\n2508#1:2690\n2529#1:2691\n2508#1:2692\n2529#1:2693\n2508#1:2694\n2529#1:2695\n2508#1:2696\n2529#1:2697\n2508#1:2698\n2529#1:2699\n2508#1:2700\n2529#1:2701\n2508#1:2702\n2529#1:2703\n2508#1:2704\n2529#1:2705\n2508#1:2706\n2529#1:2707\n2508#1:2708\n2529#1:2709\n2508#1:2710\n2529#1:2711\n2508#1:2712\n2529#1:2713\n2508#1:2714\n2529#1:2715\n2508#1:2716\n2529#1:2717\n57#2:2668\n69#2,2:2676\n69#2,2:2678\n69#2,2:2680\n69#2,2:2682\n57#2:2720\n70#2:2721\n57#2:2722\n65#2:2723\n1#3:2669\n12#4,6:2670\n1863#5,2:2718\n*S KotlinDebug\n*F\n+ 1 CommandQueue.kt\napp/rive/core/CommandQueue\n*L\n620#1:2684\n620#1:2685\n662#1:2686\n662#1:2687\n695#1:2688\n695#1:2689\n734#1:2690\n734#1:2691\n773#1:2692\n773#1:2693\n811#1:2694\n811#1:2695\n850#1:2696\n850#1:2697\n888#1:2698\n888#1:2699\n1262#1:2700\n1262#1:2701\n1335#1:2702\n1335#1:2703\n1408#1:2704\n1408#1:2705\n1481#1:2706\n1481#1:2707\n1554#1:2708\n1554#1:2709\n1734#1:2710\n1734#1:2711\n1883#1:2712\n1883#1:2713\n1976#1:2714\n1976#1:2715\n2070#1:2716\n2070#1:2717\n387#1:2668\n549#1:2676,2\n567#1:2678,2\n585#1:2680,2\n603#1:2682,2\n171#1:2720\n176#1:2721\n192#1:2722\n199#1:2723\n447#1:2670,6\n2473#1:2718,2\n*E\n"})
/* loaded from: classes.dex */
public final class CommandQueue implements RefCounted {
    public static final int MAX_CONCURRENT_SUBSCRIBERS = 32;
    private static final long SHUTDOWN_WATCHDOG_TIMEOUT_SECONDS = 10;

    @NotNull
    private final MutableSharedFlow _booleanPropertyFlow;

    @NotNull
    private final MutableSharedFlow _colorPropertyFlow;

    @NotNull
    private final MutableSharedFlow _enumPropertyFlow;

    @NotNull
    private final MutableSharedFlow _numberPropertyFlow;

    @NotNull
    private final MutableSharedFlow _settledFlow;

    @NotNull
    private final MutableSharedFlow _stringPropertyFlow;

    @NotNull
    private final MutableSharedFlow _triggerPropertyFlow;

    @NotNull
    private final u booleanPropertyFlow;

    @NotNull
    private final CommandQueueBridge bridge;

    @NotNull
    private final u colorPropertyFlow;

    @NotNull
    private final RCPointer cppPointer;

    @NotNull
    private final u enumPropertyFlow;

    @NotNull
    private Listeners listeners;

    @NotNull
    private final AtomicLong nextRequestID;

    @NotNull
    private final u numberPropertyFlow;

    @NotNull
    private final ConcurrentHashMap<Long, CancellableContinuation> pendingContinuations;

    @NotNull
    private final RenderContext renderContext;

    @NotNull
    private final u settledFlow;

    @NotNull
    private final CountDownLatch shutdownComplete;

    @NotNull
    private final u stringPropertyFlow;

    @NotNull
    private final u triggerPropertyFlow;
    public static final int $stable = 8;

    @NotNull
    private static final AtomicLong nextShutdownThreadID = new AtomicLong();

    @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0012\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u0000*\u0004\b\u0000\u0010\u00012\u00020\u0002B\u001d\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00028\u0000¢\u0006\u0002\u0010\bJ\u0016\u0010\u0011\u001a\u00020\u0004HÆ\u0003ø\u0001\u0001ø\u0001\u0000¢\u0006\u0004\b\u0012\u0010\nJ\t\u0010\u0013\u001a\u00020\u0006HÆ\u0003J\u000e\u0010\u0014\u001a\u00028\u0000HÆ\u0003¢\u0006\u0002\u0010\u000fJ7\u0010\u0015\u001a\b\u0012\u0004\u0012\u00028\u00000\u00002\b\b\u0002\u0010\u0003\u001a\u00020\u00042\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00028\u0000HÆ\u0001ø\u0001\u0000¢\u0006\u0004\b\u0016\u0010\u0017J\u0013\u0010\u0018\u001a\u00020\u00192\b\u0010\u001a\u001a\u0004\u0018\u00010\u0002HÖ\u0003J\t\u0010\u001b\u001a\u00020\u001cHÖ\u0001J\t\u0010\u001d\u001a\u00020\u0006HÖ\u0001R\u0019\u0010\u0003\u001a\u00020\u0004ø\u0001\u0000ø\u0001\u0001¢\u0006\n\n\u0002\u0010\u000b\u001a\u0004\b\t\u0010\nR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0013\u0010\u0007\u001a\u00028\u0000¢\u0006\n\n\u0002\u0010\u0010\u001a\u0004\b\u000e\u0010\u000f\u0082\u0002\u000b\n\u0005\b¡\u001e0\u0001\n\u0002\b!¨\u0006\u001e"}, d2 = {"Lapp/rive/core/CommandQueue$PropertyUpdate;", "T", "", "handle", "Lapp/rive/core/ViewModelInstanceHandle;", "propertyPath", "", "value", "(JLjava/lang/String;Ljava/lang/Object;Lkotlin/jvm/internal/DefaultConstructorMarker;)V", "getHandle-VPLto4w", "()J", "J", "getPropertyPath", "()Ljava/lang/String;", "getValue", "()Ljava/lang/Object;", "Ljava/lang/Object;", "component1", "component1-VPLto4w", "component2", "component3", "copy", "copy-iFQtAB8", "(JLjava/lang/String;Ljava/lang/Object;)Lapp/rive/core/CommandQueue$PropertyUpdate;", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final /* data */ class PropertyUpdate<T> {
        public static final int $stable = 0;
        private final long handle;

        @NotNull
        private final String propertyPath;
        private final T value;

        public /* synthetic */ PropertyUpdate(long j, String str, Object obj, DefaultConstructorMarker defaultConstructorMarker) {
            this(j, str, obj);
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* renamed from: copy-iFQtAB8$default, reason: not valid java name */
        public static /* synthetic */ PropertyUpdate m181copyiFQtAB8$default(PropertyUpdate propertyUpdate, long j, String str, Object obj, int i5, Object obj2) {
            if ((i5 & 1) != 0) {
                j = propertyUpdate.handle;
            }
            if ((i5 & 2) != 0) {
                str = propertyUpdate.propertyPath;
            }
            if ((i5 & 4) != 0) {
                obj = propertyUpdate.value;
            }
            return propertyUpdate.m183copyiFQtAB8(j, str, obj);
        }

        /* renamed from: component1-VPLto4w, reason: not valid java name and from getter */
        public final long getHandle() {
            return this.handle;
        }

        @NotNull
        /* renamed from: component2, reason: from getter */
        public final String getPropertyPath() {
            return this.propertyPath;
        }

        public final T component3() {
            return this.value;
        }

        @NotNull
        /* renamed from: copy-iFQtAB8, reason: not valid java name */
        public final PropertyUpdate<T> m183copyiFQtAB8(long handle, @NotNull String propertyPath, T value) {
            Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
            return new PropertyUpdate<>(handle, propertyPath, value, null);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof PropertyUpdate)) {
                return false;
            }
            PropertyUpdate propertyUpdate = (PropertyUpdate) other;
            return ViewModelInstanceHandle.m232equalsimpl0(this.handle, propertyUpdate.handle) && Intrinsics.areEqual(this.propertyPath, propertyUpdate.propertyPath) && Intrinsics.areEqual(this.value, propertyUpdate.value);
        }

        /* renamed from: getHandle-VPLto4w, reason: not valid java name */
        public final long m184getHandleVPLto4w() {
            return this.handle;
        }

        @NotNull
        public final String getPropertyPath() {
            return this.propertyPath;
        }

        public final T getValue() {
            return this.value;
        }

        public int hashCode() {
            int d6 = e.d(ViewModelInstanceHandle.m233hashCodeimpl(this.handle) * 31, 31, this.propertyPath);
            T t5 = this.value;
            return d6 + (t5 == null ? 0 : t5.hashCode());
        }

        @NotNull
        public String toString() {
            String m234toStringimpl = ViewModelInstanceHandle.m234toStringimpl(this.handle);
            String str = this.propertyPath;
            T t5 = this.value;
            StringBuilder t10 = e.t("PropertyUpdate(handle=", m234toStringimpl, ", propertyPath=", str, ", value=");
            t10.append(t5);
            t10.append(")");
            return t10.toString();
        }

        private PropertyUpdate(long j, String propertyPath, T t5) {
            Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
            this.handle = j;
            this.propertyPath = propertyPath;
            this.value = t5;
        }
    }

    public CommandQueue() {
        this(null, null, false, 7, null);
    }

    public static /* synthetic */ Object beginPolling$default(CommandQueue commandQueue, Lifecycle lifecycle, FrameTicker frameTicker, Continuation continuation, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            frameTicker = FrameTickerKt.getChoreographerFrameTicker();
        }
        return commandQueue.beginPolling(lifecycle, frameTicker, continuation);
    }

    private final void cancelPendingContinuations() {
        Collection<CancellableContinuation> values = this.pendingContinuations.values();
        Intrinsics.checkNotNullExpressionValue(values, "<get-values>(...)");
        Iterator it = CollectionsKt.i0(values).iterator();
        while (it.hasNext()) {
            ((CancellableContinuation) it.next()).m(new CancellationException("CommandQueue was released before operation could complete."));
        }
        this.pendingContinuations.clear();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void dispose(long cppPointer) {
        cancelPendingContinuations();
        String j = d.j(nextShutdownThreadID.getAndIncrement(), "RiveWorkerShutdown-");
        Thread thread = new Thread(new a(this, cppPointer, j, 0), j);
        Thread thread2 = new Thread(new c0(1, this), d.k(j, "-Watchdog"));
        thread2.setDaemon(true);
        thread2.start();
        thread.setDaemon(true);
        thread.start();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void dispose$lambda$0(CommandQueue this$0, long j, final String shutdownThreadName) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(shutdownThreadName, "$shutdownThreadName");
        long nanoTime = System.nanoTime();
        try {
            Function0<String> function0 = new Function0<String>() { // from class: app.rive.core.CommandQueue$dispose$shutdownThread$1$1
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return e.k("Starting command queue native shutdown on ", shutdownThreadName);
                }
            };
            RiveLog riveLog = RiveLog.INSTANCE;
            riveLog.getLogger().d(CommandQueueKt.COMMAND_QUEUE_TAG, function0);
            this$0.bridge.cppDelete(j);
            try {
                this$0.listeners.close();
                this$0.renderContext.close();
                this$0.shutdownComplete.countDown();
                final long millis = TimeUnit.NANOSECONDS.toMillis(System.nanoTime() - nanoTime);
                riveLog.getLogger().d(CommandQueueKt.COMMAND_QUEUE_TAG, new Function0<String>() { // from class: app.rive.core.CommandQueue$dispose$shutdownThread$1$3
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return e.g(millis, "Command queue native shutdown completed in ", "ms");
                    }
                });
            } finally {
                this$0.shutdownComplete.countDown();
            }
        } catch (Throwable th2) {
            RiveLog.INSTANCE.getLogger().e(CommandQueueKt.COMMAND_QUEUE_TAG, th2, new Function0<String>() { // from class: app.rive.core.CommandQueue$dispose$shutdownThread$1$2
                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return "Command queue native shutdown failed. Listener and render context cleanup skipped.";
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void dispose$lambda$1(CommandQueue this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        if (this$0.shutdownComplete.await(SHUTDOWN_WATCHDOG_TIMEOUT_SECONDS, TimeUnit.SECONDS)) {
            return;
        }
        RiveLog.INSTANCE.getLogger().w(CommandQueueKt.COMMAND_QUEUE_TAG, new Function0<String>() { // from class: app.rive.core.CommandQueue$dispose$1$1
            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                return "Command queue native shutdown is taking unusually long and has not completed after 10s";
            }
        });
    }

    /* renamed from: nextDrawKey-DhFih_o, reason: not valid java name */
    private final long m120nextDrawKeyDhFih_o() {
        return DrawKey.m187constructorimpl(this.bridge.cppCreateDrawKey(this.cppPointer.getPointer()));
    }

    /* renamed from: onPropertyUpdated-UrmHyfM, reason: not valid java name */
    private final <T> void m121onPropertyUpdatedUrmHyfM(long requestID, long viewModelInstanceHandle, String propertyName, T value, MutableSharedFlow flow) {
        flow.d(new PropertyUpdate(viewModelInstanceHandle, propertyName, value, null));
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        if (remove != null) {
            q qVar = Result.f13476e;
            Intrinsics.checkNotNull(value, "null cannot be cast to non-null type kotlin.Any");
            remove.resumeWith(value);
        }
    }

    /* renamed from: resizeArtboard-VFK_cXo$default, reason: not valid java name */
    public static /* synthetic */ void m122resizeArtboardVFK_cXo$default(CommandQueue commandQueue, long j, RiveSurface riveSurface, float f2, int i5, Object obj) {
        if ((i5 & 4) != 0) {
            f2 = 1.0f;
        }
        commandQueue.m170resizeArtboardVFK_cXo(j, riveSurface, f2);
    }

    private final <T> Object suspendNativeRequest(Function1<? super Long, Unit> function1, Continuation continuation) {
        ur.e eVar = g0.a;
        or.d dVar = sr.q.a.f16185w;
        Intrinsics.needClassReification();
        CommandQueue$suspendNativeRequest$2 commandQueue$suspendNativeRequest$2 = new CommandQueue$suspendNativeRequest$2(this, function1, null);
        InlineMarker.mark(0);
        Object A = x.A(dVar, commandQueue$suspendNativeRequest$2, continuation);
        InlineMarker.mark(1);
        return A;
    }

    @Override // app.rive.core.RefCounted
    public void acquire(@NotNull String source) {
        Intrinsics.checkNotNullParameter(source, "source");
        this.cppPointer.acquire(source);
    }

    /* renamed from: advanceStateMachine-DDXDRQI, reason: not valid java name */
    public final void m123advanceStateMachineDDXDRQI(long stateMachineHandle, long deltaTime) {
        CommandQueueBridge commandQueueBridge = this.bridge;
        long pointer = this.cppPointer.getPointer();
        long j = deltaTime >> 1;
        lr.a aVar = Duration.f13595e;
        if ((((int) deltaTime) & 1) != 0) {
            j = j > 9223372036854L ? LongCompanionObject.MAX_VALUE : j < -9223372036854L ? Long.MIN_VALUE : j * 1000000;
        }
        commandQueueBridge.cppAdvanceStateMachine(pointer, stateMachineHandle, j);
    }

    /* renamed from: appendToList-Y8k3COA, reason: not valid java name */
    public final void m124appendToListY8k3COA(long viewModelInstanceHandle, @NotNull String propertyPath, long itemHandle) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.bridge.cppAppendToList(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath, itemHandle);
    }

    public final boolean awaitShutdown$kotlin_release(long timeoutMillis) {
        return this.shutdownComplete.await(timeoutMillis, TimeUnit.MILLISECONDS);
    }

    public final Object beginPolling(@NotNull Lifecycle lifecycle, @NotNull FrameTicker frameTicker, @NotNull Continuation continuation) {
        if (isDisposed()) {
            throw new IllegalStateException("CommandQueue has been released.");
        }
        Object a = k0.a(lifecycle, Lifecycle.State.f2141w, new CommandQueue$beginPolling$3(this, frameTicker, null), continuation);
        return a == ko.a.f13464d ? a : Unit.a;
    }

    /* renamed from: bindViewModelInstance-ei-yHz8, reason: not valid java name */
    public final void m125bindViewModelInstanceeiyHz8(long stateMachineHandle, long viewModelInstanceHandle) {
        this.bridge.cppBindViewModelInstance(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), stateMachineHandle, viewModelInstanceHandle);
    }

    /* renamed from: cancelDraw-RUTHeiE$kotlin_release, reason: not valid java name */
    public final void m126cancelDrawRUTHeiE$kotlin_release(long drawKey) {
        this.bridge.cppCancelDraw(this.cppPointer.getPointer(), drawKey);
    }

    /* renamed from: createArtboardByName-2ZIOzHc, reason: not valid java name */
    public final long m127createArtboardByName2ZIOzHc(long fileHandle, @NotNull String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return ArtboardHandle.m105constructorimpl(this.bridge.cppCreateArtboardByName(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), fileHandle, name));
    }

    /* renamed from: createDefaultArtboard-6NrLy0M, reason: not valid java name */
    public final long m128createDefaultArtboard6NrLy0M(long fileHandle) {
        return ArtboardHandle.m105constructorimpl(this.bridge.cppCreateDefaultArtboard(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), fileHandle));
    }

    /* renamed from: createDefaultStateMachine-xY8vNfM, reason: not valid java name */
    public final long m129createDefaultStateMachinexY8vNfM(long artboardHandle) {
        return StateMachineHandle.m221constructorimpl(this.bridge.cppCreateDefaultStateMachine(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), artboardHandle));
    }

    @NotNull
    public final RiveSurface createImageSurface(int width, int height) {
        return this.renderContext.mo215createImageSurfacei4dAsZ4$kotlin_release(width, height, m120nextDrawKeyDhFih_o(), this);
    }

    @fo.d
    @NotNull
    public final RiveSurface createRiveSurface(@NotNull SurfaceTexture surfaceTexture) {
        Intrinsics.checkNotNullParameter(surfaceTexture, "surfaceTexture");
        return createRiveSurface(new SurfaceTextureSurface(surfaceTexture));
    }

    /* renamed from: createStateMachineByName-ItmKBmM, reason: not valid java name */
    public final long m130createStateMachineByNameItmKBmM(long artboardHandle, @NotNull String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return StateMachineHandle.m221constructorimpl(this.bridge.cppCreateStateMachineByName(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), artboardHandle, name));
    }

    /* renamed from: createViewModelInstance-j73Dd8U, reason: not valid java name */
    public final long m131createViewModelInstancej73Dd8U(long fileHandle, @NotNull ViewModelInstanceSource source) {
        Intrinsics.checkNotNullParameter(source, "source");
        if (source instanceof ViewModelInstanceSource.Blank) {
            ViewModelSource m76unboximpl = ((ViewModelInstanceSource.Blank) source).m76unboximpl();
            if (m76unboximpl instanceof ViewModelSource.Named) {
                return ViewModelInstanceHandle.m230constructorimpl(this.bridge.cppNamedVMCreateBlankVMI(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), fileHandle, ((ViewModelSource.Named) m76unboximpl).m103unboximpl()));
            }
            if (m76unboximpl instanceof ViewModelSource.DefaultForArtboard) {
                return ViewModelInstanceHandle.m230constructorimpl(this.bridge.cppDefaultVMCreateBlankVMI(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), fileHandle, ((ViewModelSource.DefaultForArtboard) m76unboximpl).m93unboximpl().getArtboardHandle()));
            }
            throw new n();
        }
        if (source instanceof ViewModelInstanceSource.Default) {
            ViewModelSource m83unboximpl = ((ViewModelInstanceSource.Default) source).m83unboximpl();
            if (m83unboximpl instanceof ViewModelSource.Named) {
                return ViewModelInstanceHandle.m230constructorimpl(this.bridge.cppNamedVMCreateDefaultVMI(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), fileHandle, ((ViewModelSource.Named) m83unboximpl).m103unboximpl()));
            }
            if (m83unboximpl instanceof ViewModelSource.DefaultForArtboard) {
                return ViewModelInstanceHandle.m230constructorimpl(this.bridge.cppDefaultVMCreateDefaultVMI(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), fileHandle, ((ViewModelSource.DefaultForArtboard) m83unboximpl).m93unboximpl().getArtboardHandle()));
            }
            throw new n();
        }
        if (source instanceof ViewModelInstanceSource.Named) {
            ViewModelInstanceSource.Named named = (ViewModelInstanceSource.Named) source;
            ViewModelSource vmSource = named.getVmSource();
            if (vmSource instanceof ViewModelSource.Named) {
                return ViewModelInstanceHandle.m230constructorimpl(this.bridge.cppNamedVMCreateNamedVMI(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), fileHandle, ((ViewModelSource.Named) vmSource).m103unboximpl(), named.getInstanceName()));
            }
            if (vmSource instanceof ViewModelSource.DefaultForArtboard) {
                return ViewModelInstanceHandle.m230constructorimpl(this.bridge.cppDefaultVMCreateNamedVMI(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), fileHandle, ((ViewModelSource.DefaultForArtboard) vmSource).m93unboximpl().getArtboardHandle(), named.getInstanceName()));
            }
            throw new n();
        }
        if (source instanceof ViewModelInstanceSource.Reference) {
            ViewModelInstanceSource.Reference reference = (ViewModelInstanceSource.Reference) source;
            return ViewModelInstanceHandle.m230constructorimpl(this.bridge.cppReferenceNestedVMI(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), reference.getParentInstance().getInstanceHandle(), reference.getPath()));
        }
        if (!(source instanceof ViewModelInstanceSource.ReferenceListItem)) {
            throw new n();
        }
        ViewModelInstanceSource.ReferenceListItem referenceListItem = (ViewModelInstanceSource.ReferenceListItem) source;
        return ViewModelInstanceHandle.m230constructorimpl(this.bridge.cppReferenceListItemVMI(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), referenceListItem.getParentInstance().getInstanceHandle(), referenceListItem.getPathToList(), referenceListItem.getIndex()));
    }

    /* renamed from: decodeAudio-WLIIakE, reason: not valid java name */
    public final Object m132decodeAudioWLIIakE(@NotNull byte[] bArr, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$decodeAudioWLIIakE$$inlined$suspendNativeRequest$1(this, null, this, bArr), continuation);
    }

    /* renamed from: decodeFont-sOckvAc, reason: not valid java name */
    public final Object m133decodeFontsOckvAc(@NotNull byte[] bArr, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$decodeFontsOckvAc$$inlined$suspendNativeRequest$1(this, null, this, bArr), continuation);
    }

    /* renamed from: decodeImage-f0BlWSU, reason: not valid java name */
    public final Object m134decodeImagef0BlWSU(@NotNull byte[] bArr, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$decodeImagef0BlWSU$$inlined$suspendNativeRequest$1(this, null, this, bArr), continuation);
    }

    /* renamed from: deleteArtboard-uiJWFY8, reason: not valid java name */
    public final void m135deleteArtboarduiJWFY8(long artboardHandle) {
        this.bridge.cppDeleteArtboard(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), artboardHandle);
    }

    /* renamed from: deleteAudio-QAnvCWo, reason: not valid java name */
    public final void m136deleteAudioQAnvCWo(long audioHandle) {
        this.bridge.cppDeleteAudio(this.cppPointer.getPointer(), audioHandle);
    }

    /* renamed from: deleteFile-dJ1Evnk, reason: not valid java name */
    public final void m137deleteFiledJ1Evnk(long fileHandle) {
        this.bridge.cppDeleteFile(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), fileHandle);
    }

    /* renamed from: deleteFont-wK5q9OY, reason: not valid java name */
    public final void m138deleteFontwK5q9OY(long fontHandle) {
        this.bridge.cppDeleteFont(this.cppPointer.getPointer(), fontHandle);
    }

    /* renamed from: deleteImage-JwfOFvA, reason: not valid java name */
    public final void m139deleteImageJwfOFvA(long imageHandle) {
        this.bridge.cppDeleteImage(this.cppPointer.getPointer(), imageHandle);
    }

    /* renamed from: deleteStateMachine-AkTCgDQ, reason: not valid java name */
    public final void m140deleteStateMachineAkTCgDQ(long stateMachineHandle) {
        this.bridge.cppDeleteStateMachine(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), stateMachineHandle);
    }

    /* renamed from: deleteViewModelInstance-mBajs_U, reason: not valid java name */
    public final void m141deleteViewModelInstancemBajs_U(long viewModelInstanceHandle) {
        this.bridge.cppDeleteViewModelInstance(this.cppPointer.getPointer(), this.nextRequestID.getAndIncrement(), viewModelInstanceHandle);
    }

    @fo.d
    public final void destroyRiveSurface(@NotNull RiveSurface surface) {
        Intrinsics.checkNotNullParameter(surface, "surface");
        surface.close();
    }

    /* renamed from: draw-Occ3x_Y, reason: not valid java name */
    public final void m142drawOcc3x_Y(long artboardHandle, long stateMachineHandle, @NotNull RiveSurface surface, @NotNull Fit fit, int clearColor) {
        Intrinsics.checkNotNullParameter(surface, "surface");
        Intrinsics.checkNotNullParameter(fit, "fit");
        if (surface.getClosed()) {
            throw new IllegalStateException("Cannot draw to a closed RiveSurface");
        }
        this.bridge.cppDraw(this.cppPointer.getPointer(), this.renderContext.getNativeObjectPointer(), surface.getSurfaceNativePointer(), surface.getDrawKey(), artboardHandle, stateMachineHandle, surface.getRenderTargetPointer().getPointer(), surface.getWidth(), surface.getHeight(), fit.getNativeMapping(), fit.getAlignment().getNativeMapping(), fit.getScaleFactor(), clearColor);
    }

    /* renamed from: drawToBuffer-fS7xHJs, reason: not valid java name */
    public final void m143drawToBufferfS7xHJs(long artboardHandle, long stateMachineHandle, @NotNull RiveSurface surface, @NotNull byte[] buffer, int width, int height, @NotNull Fit fit, int clearColor) {
        Intrinsics.checkNotNullParameter(surface, "surface");
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        Intrinsics.checkNotNullParameter(fit, "fit");
        if (surface.getClosed()) {
            throw new IllegalStateException("Cannot draw to a closed RiveSurface");
        }
        this.bridge.cppDrawToBuffer(this.cppPointer.getPointer(), this.renderContext.getNativeObjectPointer(), surface.getSurfaceNativePointer(), surface.getDrawKey(), artboardHandle, stateMachineHandle, surface.getRenderTargetPointer().getPointer(), width, height, fit.getNativeMapping(), fit.getAlignment().getNativeMapping(), fit.getScaleFactor(), clearColor, buffer);
    }

    /* renamed from: fireTriggerProperty-ippgHXQ, reason: not valid java name */
    public final void m144fireTriggerPropertyippgHXQ(long viewModelInstanceHandle, @NotNull String propertyPath) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.bridge.cppFireTriggerProperty(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath);
    }

    /* renamed from: getArtboardNames-evklBmw, reason: not valid java name */
    public final Object m145getArtboardNamesevklBmw(long j, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$getArtboardNamesevklBmw$$inlined$suspendNativeRequest$1(this, null, this, j), continuation);
    }

    /* renamed from: getBooleanProperty-iFQtAB8, reason: not valid java name */
    public final Object m146getBooleanPropertyiFQtAB8(long j, @NotNull String str, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$getBooleanPropertyiFQtAB8$$inlined$suspendNativeRequest$1(this, null, this, j, str), continuation);
    }

    @NotNull
    public final u getBooleanPropertyFlow() {
        return this.booleanPropertyFlow;
    }

    /* renamed from: getColorProperty-iFQtAB8, reason: not valid java name */
    public final Object m147getColorPropertyiFQtAB8(long j, @NotNull String str, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$getColorPropertyiFQtAB8$$inlined$suspendNativeRequest$1(this, null, this, j, str), continuation);
    }

    @NotNull
    public final u getColorPropertyFlow() {
        return this.colorPropertyFlow;
    }

    /* renamed from: getDefaultViewModelInfo-tl3utA8, reason: not valid java name */
    public final Object m148getDefaultViewModelInfotl3utA8(long j, long j5, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$getDefaultViewModelInfotl3utA8$$inlined$suspendNativeRequest$1(this, null, this, j, j5), continuation);
    }

    /* renamed from: getEnumProperty-iFQtAB8, reason: not valid java name */
    public final Object m149getEnumPropertyiFQtAB8(long j, @NotNull String str, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$getEnumPropertyiFQtAB8$$inlined$suspendNativeRequest$1(this, null, this, j, str), continuation);
    }

    @NotNull
    public final u getEnumPropertyFlow() {
        return this.enumPropertyFlow;
    }

    /* renamed from: getEnums-evklBmw, reason: not valid java name */
    public final Object m150getEnumsevklBmw(long j, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$getEnumsevklBmw$$inlined$suspendNativeRequest$1(this, null, this, j), continuation);
    }

    /* renamed from: getListSize-iFQtAB8, reason: not valid java name */
    public final Object m151getListSizeiFQtAB8(long j, @NotNull String str, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$getListSizeiFQtAB8$$inlined$suspendNativeRequest$1(this, null, this, j, str), continuation);
    }

    /* renamed from: getNumberProperty-iFQtAB8, reason: not valid java name */
    public final Object m152getNumberPropertyiFQtAB8(long j, @NotNull String str, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$getNumberPropertyiFQtAB8$$inlined$suspendNativeRequest$1(this, null, this, j, str), continuation);
    }

    @NotNull
    public final u getNumberPropertyFlow() {
        return this.numberPropertyFlow;
    }

    @Override // app.rive.core.RefCounted
    public int getRefCount() {
        return this.cppPointer.getRefCount();
    }

    @NotNull
    public final u getSettledFlow() {
        return this.settledFlow;
    }

    /* renamed from: getStateMachineNames-b88yb0A, reason: not valid java name */
    public final Object m153getStateMachineNamesb88yb0A(long j, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$getStateMachineNamesb88yb0A$$inlined$suspendNativeRequest$1(this, null, this, j), continuation);
    }

    /* renamed from: getStringProperty-iFQtAB8, reason: not valid java name */
    public final Object m154getStringPropertyiFQtAB8(long j, @NotNull String str, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$getStringPropertyiFQtAB8$$inlined$suspendNativeRequest$1(this, null, this, j, str), continuation);
    }

    @NotNull
    public final u getStringPropertyFlow() {
        return this.stringPropertyFlow;
    }

    @NotNull
    public final u getTriggerPropertyFlow() {
        return this.triggerPropertyFlow;
    }

    /* renamed from: getViewModelInstanceNames-mgMojzc, reason: not valid java name */
    public final Object m155getViewModelInstanceNamesmgMojzc(long j, @NotNull String str, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$getViewModelInstanceNamesmgMojzc$$inlined$suspendNativeRequest$1(this, null, this, j, str), continuation);
    }

    /* renamed from: getViewModelNames-evklBmw, reason: not valid java name */
    public final Object m156getViewModelNamesevklBmw(long j, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$getViewModelNamesevklBmw$$inlined$suspendNativeRequest$1(this, null, this, j), continuation);
    }

    /* renamed from: getViewModelProperties-mgMojzc, reason: not valid java name */
    public final Object m157getViewModelPropertiesmgMojzc(long j, @NotNull String str, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$getViewModelPropertiesmgMojzc$$inlined$suspendNativeRequest$1(this, null, this, j, str), continuation);
    }

    /* renamed from: insertToListAtIndex-4ua1WBo, reason: not valid java name */
    public final void m158insertToListAtIndex4ua1WBo(long viewModelInstanceHandle, @NotNull String propertyPath, int index, long itemHandle) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.bridge.cppInsertToListAtIndex(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath, index, itemHandle);
    }

    @Override // app.rive.core.RefCounted
    public boolean isDisposed() {
        return this.cppPointer.isDisposed();
    }

    /* renamed from: loadFile-xVnc2tA, reason: not valid java name */
    public final Object m159loadFilexVnc2tA(@NotNull byte[] bArr, @NotNull Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(sr.q.a.f16185w, new CommandQueue$loadFilexVnc2tA$$inlined$suspendNativeRequest$1(this, null, this, bArr), continuation);
    }

    @Keep
    public final void onArtboardError(final long requestID, @NotNull final String error) {
        Intrinsics.checkNotNullParameter(error, "error");
        RiveLog.INSTANCE.getLogger().e(CommandQueueKt.COMMAND_QUEUE_TAG, null, new Function0<String>() { // from class: app.rive.core.CommandQueue$onArtboardError$1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                return "Artboard error for request " + requestID + ": " + error;
            }
        });
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(b.i(new RuntimeException(e.k("Artboard error: ", error))));
        }
    }

    @Keep
    public final void onArtboardsListed(long requestID, @NotNull List<String> names) {
        Intrinsics.checkNotNullParameter(names, "names");
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(names);
        }
    }

    @Keep
    public final void onAudioDecoded(long requestID, long audioHandle) {
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            AudioHandle m111boximpl = AudioHandle.m111boximpl(audioHandle);
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(m111boximpl);
        }
    }

    @Keep
    public final void onAudioError(long requestID, @NotNull String error) {
        Intrinsics.checkNotNullParameter(error, "error");
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(b.i(new RuntimeException(e.k("Failed to decode audio: ", error))));
        }
    }

    @Keep
    public final void onBooleanPropertyUpdated(long requestID, long viewModelInstanceHandle, @NotNull String propertyName, boolean value) {
        Intrinsics.checkNotNullParameter(propertyName, "propertyName");
        m121onPropertyUpdatedUrmHyfM(requestID, viewModelInstanceHandle, propertyName, Boolean.valueOf(value), this._booleanPropertyFlow);
    }

    @Keep
    public final void onColorPropertyUpdated(long requestID, long viewModelInstanceHandle, @NotNull String propertyName, int value) {
        Intrinsics.checkNotNullParameter(propertyName, "propertyName");
        m121onPropertyUpdatedUrmHyfM(requestID, viewModelInstanceHandle, propertyName, Integer.valueOf(value), this._colorPropertyFlow);
    }

    @Keep
    public final void onDefaultViewModelInfoReceived(long requestID, @NotNull String viewModelName, @NotNull String instanceName) {
        Intrinsics.checkNotNullParameter(viewModelName, "viewModelName");
        Intrinsics.checkNotNullParameter(instanceName, "instanceName");
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(new DefaultViewModelInfo(viewModelName, instanceName));
        }
    }

    @Keep
    public final void onEnumPropertyUpdated(long requestID, long viewModelInstanceHandle, @NotNull String propertyName, @NotNull String value) {
        Intrinsics.checkNotNullParameter(propertyName, "propertyName");
        Intrinsics.checkNotNullParameter(value, "value");
        m121onPropertyUpdatedUrmHyfM(requestID, viewModelInstanceHandle, propertyName, value, this._enumPropertyFlow);
    }

    @Keep
    public final void onEnumsListed(long requestID, @NotNull List<File.Enum> enums) {
        Intrinsics.checkNotNullParameter(enums, "enums");
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(enums);
        }
    }

    @Keep
    public final void onFileError(final long requestID, @NotNull final String error) {
        Intrinsics.checkNotNullParameter(error, "error");
        RiveLog.INSTANCE.getLogger().e(CommandQueueKt.COMMAND_QUEUE_TAG, null, new Function0<String>() { // from class: app.rive.core.CommandQueue$onFileError$1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                return "File error for request " + requestID + ": " + error;
            }
        });
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(b.i(new RiveFileException(e.k("File error: ", error), null, 2, null)));
        }
    }

    @Keep
    public final void onFileLoaded(long requestID, long fileHandle) {
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            FileHandle m193boximpl = FileHandle.m193boximpl(fileHandle);
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(m193boximpl);
        }
    }

    @Keep
    public final void onFontDecoded(long requestID, long fontHandle) {
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            FontHandle m200boximpl = FontHandle.m200boximpl(fontHandle);
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(m200boximpl);
        }
    }

    @Keep
    public final void onFontError(long requestID, @NotNull String error) {
        Intrinsics.checkNotNullParameter(error, "error");
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(b.i(new RuntimeException(e.k("Failed to decode font: ", error))));
        }
    }

    @Keep
    public final void onImageDecoded(long requestID, long imageHandle) {
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            ImageHandle m207boximpl = ImageHandle.m207boximpl(imageHandle);
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(m207boximpl);
        }
    }

    @Keep
    public final void onImageError(long requestID, @NotNull String error) {
        Intrinsics.checkNotNullParameter(error, "error");
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(b.i(new RuntimeException(e.k("Failed to decode image: ", error))));
        }
    }

    @Keep
    public final void onNumberPropertyUpdated(long requestID, long viewModelInstanceHandle, @NotNull String propertyName, float value) {
        Intrinsics.checkNotNullParameter(propertyName, "propertyName");
        m121onPropertyUpdatedUrmHyfM(requestID, viewModelInstanceHandle, propertyName, Float.valueOf(value), this._numberPropertyFlow);
    }

    @Keep
    public final void onStateMachineError(final long requestID, @NotNull final String error) {
        Intrinsics.checkNotNullParameter(error, "error");
        RiveLog.INSTANCE.getLogger().e(CommandQueueKt.COMMAND_QUEUE_TAG, null, new Function0<String>() { // from class: app.rive.core.CommandQueue$onStateMachineError$1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                return "State machine error for request " + requestID + ": " + error;
            }
        });
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(b.i(new RuntimeException(e.k("State machine error: ", error))));
        }
    }

    @Keep
    public final void onStateMachineSettled(long stateMachineHandle) {
        this._settledFlow.d(StateMachineHandle.m220boximpl(stateMachineHandle));
    }

    @Keep
    public final void onStateMachinesListed(long requestID, @NotNull List<String> names) {
        Intrinsics.checkNotNullParameter(names, "names");
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(names);
        }
    }

    @Keep
    public final void onStringPropertyUpdated(long requestID, long viewModelInstanceHandle, @NotNull String propertyName, @NotNull String value) {
        Intrinsics.checkNotNullParameter(propertyName, "propertyName");
        Intrinsics.checkNotNullParameter(value, "value");
        m121onPropertyUpdatedUrmHyfM(requestID, viewModelInstanceHandle, propertyName, value, this._stringPropertyFlow);
    }

    @Keep
    public final void onTriggerPropertyUpdated(long requestID, long viewModelInstanceHandle, @NotNull String propertyName) {
        Intrinsics.checkNotNullParameter(propertyName, "propertyName");
        m121onPropertyUpdatedUrmHyfM(requestID, viewModelInstanceHandle, propertyName, Unit.a, this._triggerPropertyFlow);
    }

    @Keep
    public final void onViewModelInstanceError(final long requestID, @NotNull final String error) {
        Intrinsics.checkNotNullParameter(error, "error");
        RiveLog.INSTANCE.getLogger().e(CommandQueueKt.COMMAND_QUEUE_TAG, null, new Function0<String>() { // from class: app.rive.core.CommandQueue$onViewModelInstanceError$1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                return "View model instance error for request " + requestID + ": " + error;
            }
        });
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(b.i(new RuntimeException(e.k("View model instance error: ", error))));
        }
    }

    @Keep
    public final void onViewModelInstancesListed(long requestID, @NotNull List<String> names) {
        Intrinsics.checkNotNullParameter(names, "names");
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(names);
        }
    }

    @Keep
    public final void onViewModelListSizeReceived(long requestID, int size) {
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            Integer valueOf = Integer.valueOf(size);
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(valueOf);
        }
    }

    @Keep
    public final void onViewModelPropertiesListed(long requestID, @NotNull List<ViewModel.Property> properties) {
        Intrinsics.checkNotNullParameter(properties, "properties");
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(properties);
        }
    }

    @Keep
    public final void onViewModelsListed(long requestID, @NotNull List<String> names) {
        Intrinsics.checkNotNullParameter(names, "names");
        CancellableContinuation remove = this.pendingContinuations.remove(Long.valueOf(requestID));
        CancellableContinuation cancellableContinuation = remove instanceof Continuation ? remove : null;
        if (cancellableContinuation != null) {
            q qVar = Result.f13476e;
            cancellableContinuation.resumeWith(names);
        }
    }

    /* renamed from: pointerDown-iHGrxBs, reason: not valid java name */
    public final void m160pointerDowniHGrxBs(long stateMachineHandle, @NotNull Fit fit, float surfaceWidth, float surfaceHeight, int pointerID, float pointerX, float pointerY) {
        Intrinsics.checkNotNullParameter(fit, "fit");
        this.bridge.cppPointerDown(this.cppPointer.getPointer(), stateMachineHandle, fit.getNativeMapping(), fit.getAlignment().getNativeMapping(), fit.getScaleFactor(), surfaceWidth, surfaceHeight, pointerID, pointerX, pointerY);
    }

    /* renamed from: pointerExit-iHGrxBs, reason: not valid java name */
    public final void m161pointerExitiHGrxBs(long stateMachineHandle, @NotNull Fit fit, float surfaceWidth, float surfaceHeight, int pointerID, float pointerX, float pointerY) {
        Intrinsics.checkNotNullParameter(fit, "fit");
        this.bridge.cppPointerExit(this.cppPointer.getPointer(), stateMachineHandle, fit.getNativeMapping(), fit.getAlignment().getNativeMapping(), fit.getScaleFactor(), surfaceWidth, surfaceHeight, pointerID, pointerX, pointerY);
    }

    /* renamed from: pointerMove-iHGrxBs, reason: not valid java name */
    public final void m162pointerMoveiHGrxBs(long stateMachineHandle, @NotNull Fit fit, float surfaceWidth, float surfaceHeight, int pointerID, float pointerX, float pointerY) {
        Intrinsics.checkNotNullParameter(fit, "fit");
        this.bridge.cppPointerMove(this.cppPointer.getPointer(), stateMachineHandle, fit.getNativeMapping(), fit.getAlignment().getNativeMapping(), fit.getScaleFactor(), surfaceWidth, surfaceHeight, pointerID, pointerX, pointerY);
    }

    /* renamed from: pointerUp-iHGrxBs, reason: not valid java name */
    public final void m163pointerUpiHGrxBs(long stateMachineHandle, @NotNull Fit fit, float surfaceWidth, float surfaceHeight, int pointerID, float pointerX, float pointerY) {
        Intrinsics.checkNotNullParameter(fit, "fit");
        this.bridge.cppPointerUp(this.cppPointer.getPointer(), stateMachineHandle, fit.getNativeMapping(), fit.getAlignment().getNativeMapping(), fit.getScaleFactor(), surfaceWidth, surfaceHeight, pointerID, pointerX, pointerY);
    }

    public final void pollMessages() {
        Trace.beginSection("Rive/PollMessages");
        try {
            this.bridge.cppPollMessages(this.cppPointer.getPointer());
            Unit unit = Unit.a;
        } finally {
            Trace.endSection();
        }
    }

    /* renamed from: registerAudio-4kKS7jM, reason: not valid java name */
    public final void m164registerAudio4kKS7jM(@NotNull String name, long audioHandle) {
        Intrinsics.checkNotNullParameter(name, "name");
        this.bridge.cppRegisterAudio(this.cppPointer.getPointer(), name, audioHandle);
    }

    /* renamed from: registerFont-8-RWjZU, reason: not valid java name */
    public final void m165registerFont8RWjZU(@NotNull String name, long fontHandle) {
        Intrinsics.checkNotNullParameter(name, "name");
        this.bridge.cppRegisterFont(this.cppPointer.getPointer(), name, fontHandle);
    }

    /* renamed from: registerImage-QieQ09U, reason: not valid java name */
    public final void m166registerImageQieQ09U(@NotNull String name, long imageHandle) {
        Intrinsics.checkNotNullParameter(name, "name");
        this.bridge.cppRegisterImage(this.cppPointer.getPointer(), name, imageHandle);
    }

    @Override // app.rive.core.RefCounted
    public void release(@NotNull String source, @NotNull String reason) {
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(reason, "reason");
        if (this.bridge.isCurrentThreadCommandServer(this.cppPointer.getPointer())) {
            throw new IllegalStateException(e.l("CommandQueue.release() cannot be called from the command server thread as then it may attempt to join itself. Source: ", source, ". Reason: ", reason).toString());
        }
        this.cppPointer.release(source, reason);
    }

    /* renamed from: removeFromList-Y8k3COA, reason: not valid java name */
    public final void m167removeFromListY8k3COA(long viewModelInstanceHandle, @NotNull String propertyPath, long itemHandle) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.bridge.cppRemoveFromList(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath, itemHandle);
    }

    /* renamed from: removeFromListAtIndex-iFQtAB8, reason: not valid java name */
    public final void m168removeFromListAtIndexiFQtAB8(long viewModelInstanceHandle, @NotNull String propertyPath, int index) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.bridge.cppRemoveFromListAtIndex(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath, index);
    }

    /* renamed from: resetArtboardSize-uiJWFY8, reason: not valid java name */
    public final void m169resetArtboardSizeuiJWFY8(long artboardHandle) {
        this.bridge.cppResetArtboardSize(this.cppPointer.getPointer(), artboardHandle);
    }

    /* renamed from: resizeArtboard-VFK_cXo, reason: not valid java name */
    public final void m170resizeArtboardVFK_cXo(long artboardHandle, @NotNull RiveSurface surface, float scaleFactor) {
        Intrinsics.checkNotNullParameter(surface, "surface");
        if (surface.getClosed()) {
            throw new IllegalStateException("Cannot resize a closed RiveSurface");
        }
        this.bridge.cppResizeArtboard(this.cppPointer.getPointer(), artboardHandle, surface.getWidth(), surface.getHeight(), scaleFactor);
    }

    public final void runOnCommandServer$kotlin_release(@NotNull Function0<Unit> work) {
        Intrinsics.checkNotNullParameter(work, "work");
        this.bridge.cppRunOnCommandServer(this.cppPointer.getPointer(), work);
    }

    /* renamed from: setArtboardProperty-d7r-qXY, reason: not valid java name */
    public final void m171setArtboardPropertyd7rqXY(long viewModelInstanceHandle, @NotNull String propertyPath, long artboardHandle) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.bridge.cppSetArtboardProperty(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath, artboardHandle);
    }

    /* renamed from: setBooleanProperty-iFQtAB8, reason: not valid java name */
    public final void m172setBooleanPropertyiFQtAB8(long viewModelInstanceHandle, @NotNull String propertyPath, boolean value) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.bridge.cppSetBooleanProperty(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath, value);
    }

    /* renamed from: setColorProperty-iFQtAB8, reason: not valid java name */
    public final void m173setColorPropertyiFQtAB8(long viewModelInstanceHandle, @NotNull String propertyPath, int value) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.bridge.cppSetColorProperty(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath, value);
    }

    /* renamed from: setEnumProperty-iFQtAB8, reason: not valid java name */
    public final void m174setEnumPropertyiFQtAB8(long viewModelInstanceHandle, @NotNull String propertyPath, @NotNull String value) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        Intrinsics.checkNotNullParameter(value, "value");
        this.bridge.cppSetEnumProperty(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath, value);
    }

    /* renamed from: setImageProperty-ugE2Goo, reason: not valid java name */
    public final void m175setImagePropertyugE2Goo(long viewModelInstanceHandle, @NotNull String propertyPath, long imageHandle) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.bridge.cppSetImageProperty(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath, imageHandle);
    }

    /* renamed from: setNumberProperty-iFQtAB8, reason: not valid java name */
    public final void m176setNumberPropertyiFQtAB8(long viewModelInstanceHandle, @NotNull String propertyPath, float value) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.bridge.cppSetNumberProperty(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath, value);
    }

    /* renamed from: setStringProperty-iFQtAB8, reason: not valid java name */
    public final void m177setStringPropertyiFQtAB8(long viewModelInstanceHandle, @NotNull String propertyPath, @NotNull String value) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        Intrinsics.checkNotNullParameter(value, "value");
        this.bridge.cppSetStringProperty(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath, value);
    }

    public final void setTracingEnabled(boolean enabled) {
        this.bridge.cppSetTracingEnabled(this.cppPointer.getPointer(), enabled);
    }

    /* renamed from: setViewModelInstanceProperty-Y8k3COA, reason: not valid java name */
    public final void m178setViewModelInstancePropertyY8k3COA(long viewModelInstanceHandle, @NotNull String propertyPath, long valueHandle) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.bridge.cppSetViewModelInstanceProperty(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath, valueHandle);
    }

    /* renamed from: subscribeToProperty-iFQtAB8, reason: not valid java name */
    public final void m179subscribeToPropertyiFQtAB8(long viewModelInstanceHandle, @NotNull String propertyPath, @NotNull ViewModel.PropertyDataType propertyType) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        Intrinsics.checkNotNullParameter(propertyType, "propertyType");
        this.bridge.cppSubscribeToProperty(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath, propertyType.getValue());
    }

    /* renamed from: swapListItems-C5vwGj0, reason: not valid java name */
    public final void m180swapListItemsC5vwGj0(long viewModelInstanceHandle, @NotNull String propertyPath, int indexA, int indexB) {
        Intrinsics.checkNotNullParameter(propertyPath, "propertyPath");
        this.bridge.cppSwapListItems(this.cppPointer.getPointer(), viewModelInstanceHandle, propertyPath, indexA, indexB);
    }

    public final void unregisterAudio(@NotNull String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        this.bridge.cppUnregisterAudio(this.cppPointer.getPointer(), name);
    }

    public final void unregisterFont(@NotNull String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        this.bridge.cppUnregisterFont(this.cppPointer.getPointer(), name);
    }

    public final void unregisterImage(@NotNull String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        this.bridge.cppUnregisterImage(this.cppPointer.getPointer(), name);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v0, types: [androidx.lifecycle.u, app.rive.core.CommandQueue$withLifecycle$observer$1] */
    /* JADX WARN: Type inference failed for: r7v0, types: [T, app.rive.core.CloseOnce] */
    @NotNull
    public final AutoCloseable withLifecycle(@NotNull final LifecycleOwner owner, @NotNull final String source) {
        Intrinsics.checkNotNullParameter(owner, "owner");
        Intrinsics.checkNotNullParameter(source, "source");
        final Ref.ObjectRef objectRef = new Ref.ObjectRef();
        final Ref.BooleanRef booleanRef = new Ref.BooleanRef();
        final ?? r32 = new DefaultLifecycleObserver() { // from class: app.rive.core.CommandQueue$withLifecycle$observer$1
            @Override // androidx.lifecycle.DefaultLifecycleObserver
            public void onDestroy(@NotNull LifecycleOwner owner2) {
                CloseOnce closeOnce;
                Intrinsics.checkNotNullParameter(owner2, "owner");
                CloseOnce closeOnce2 = objectRef.element;
                if (closeOnce2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("onClose");
                    closeOnce = null;
                } else {
                    closeOnce = closeOnce2;
                }
                closeOnce.close();
            }

            @Override // androidx.lifecycle.DefaultLifecycleObserver
            public void onPause(@NotNull LifecycleOwner owner2) {
                Intrinsics.checkNotNullParameter(owner2, "owner");
                if (Ref.BooleanRef.this.element) {
                    AudioEngine.INSTANCE.release();
                    Ref.BooleanRef.this.element = false;
                }
            }

            @Override // androidx.lifecycle.DefaultLifecycleObserver
            public void onResume(@NotNull LifecycleOwner owner2) {
                Intrinsics.checkNotNullParameter(owner2, "owner");
                if (Ref.BooleanRef.this.element) {
                    return;
                }
                AudioEngine.INSTANCE.acquire();
                Ref.BooleanRef.this.element = true;
            }
        };
        objectRef.element = new CloseOnce("CommandQueue (withLifecycle)", new Function0<Unit>() { // from class: app.rive.core.CommandQueue$withLifecycle$1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Object invoke() {
                m185invoke();
                return Unit.a;
            }

            /* renamed from: invoke, reason: collision with other method in class */
            public final void m185invoke() {
                RCPointer rCPointer;
                LifecycleOwner.this.getLifecycle().c(r32);
                if (booleanRef.element) {
                    AudioEngine.INSTANCE.release();
                    booleanRef.element = false;
                }
                rCPointer = this.cppPointer;
                rCPointer.release(source, "Closed by withLifecycle");
            }
        });
        owner.getLifecycle().a(r32);
        if (owner.getLifecycle().b().a(Lifecycle.State.f2141w)) {
            AudioEngine.INSTANCE.acquire();
            booleanRef.element = true;
        }
        T t5 = objectRef.element;
        if (t5 != 0) {
            return (CloseOnce) t5;
        }
        Intrinsics.throwUninitializedPropertyAccessException("onClose");
        return null;
    }

    public CommandQueue(@NotNull RenderContext renderContext, @NotNull CommandQueueBridge bridge, boolean z5) {
        Intrinsics.checkNotNullParameter(renderContext, "renderContext");
        Intrinsics.checkNotNullParameter(bridge, "bridge");
        this.renderContext = renderContext;
        this.bridge = bridge;
        this.shutdownComplete = new CountDownLatch(1);
        RCPointer rCPointer = new RCPointer(bridge.cppConstructor(renderContext.getNativeObjectPointer()), CommandQueueKt.COMMAND_QUEUE_TAG, new CommandQueue$cppPointer$1(this));
        this.cppPointer = rCPointer;
        this.listeners = bridge.cppCreateListeners(rCPointer.getPointer(), this);
        setTracingEnabled(z5);
        pr.a aVar = pr.a.f16468e;
        qr.x a = y.a(0, 32, aVar);
        this._settledFlow = a;
        this.settledFlow = a;
        qr.x a10 = y.a(0, 32, aVar);
        this._numberPropertyFlow = a10;
        this.numberPropertyFlow = a10;
        qr.x a11 = y.a(0, 32, aVar);
        this._stringPropertyFlow = a11;
        this.stringPropertyFlow = a11;
        qr.x a12 = y.a(0, 32, aVar);
        this._booleanPropertyFlow = a12;
        this.booleanPropertyFlow = a12;
        qr.x a13 = y.a(0, 32, aVar);
        this._enumPropertyFlow = a13;
        this.enumPropertyFlow = a13;
        qr.x a14 = y.a(0, 32, aVar);
        this._colorPropertyFlow = a14;
        this.colorPropertyFlow = a14;
        qr.x a15 = y.a(0, 32, aVar);
        this._triggerPropertyFlow = a15;
        this.triggerPropertyFlow = a15;
        RiveLog.INSTANCE.getLogger().d(CommandQueueKt.COMMAND_QUEUE_TAG, new Function0<String>() { // from class: app.rive.core.CommandQueue.1
            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                return "Creating command queue";
            }
        });
        this.pendingContinuations = new ConcurrentHashMap<>();
        this.nextRequestID = new AtomicLong();
    }

    @NotNull
    public final RiveSurface createRiveSurface(@NotNull CloseableSurface surface) {
        Intrinsics.checkNotNullParameter(surface, "surface");
        try {
            return this.renderContext.mo216createSurfacemDlYe8U$kotlin_release(surface, m120nextDrawKeyDhFih_o(), this);
        } catch (Throwable th2) {
            surface.close();
            throw th2;
        }
    }

    public /* synthetic */ CommandQueue(RenderContext renderContext, CommandQueueBridge commandQueueBridge, boolean z5, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? new RenderContextGL(null, null, null, 7, null) : renderContext, (i5 & 2) != 0 ? new CommandQueueJNIBridge() : commandQueueBridge, (i5 & 4) != 0 ? false : z5);
    }
}
