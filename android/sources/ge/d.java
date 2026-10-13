package ge;

import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import ke.d0;

/* loaded from: classes3.dex */
public final /* synthetic */ class d implements ei.g {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ DefaultTrackSelector f9175d;

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x0060, code lost:
    
        if (r2.f9187b != false) goto L40;
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x003a, code lost:
    
        if (r2.equals("audio/ac4") == false) goto L16;
     */
    @Override // ei.g
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean apply(Object obj) {
        boolean z5;
        j jVar;
        DefaultTrackSelector defaultTrackSelector = this.f9175d;
        Format format = (Format) obj;
        synchronized (defaultTrackSelector.f5457d) {
            try {
                z5 = true;
                if (defaultTrackSelector.f5461h.f5482g0 && !defaultTrackSelector.f5460g) {
                    char c6 = 2;
                    if (format.V > 2) {
                        String str = format.I;
                        if (str != null) {
                            switch (str.hashCode()) {
                                case -2123537834:
                                    if (str.equals("audio/eac3-joc")) {
                                        c6 = 0;
                                        break;
                                    }
                                    c6 = 65535;
                                    break;
                                case 187078296:
                                    if (str.equals("audio/ac3")) {
                                        c6 = 1;
                                        break;
                                    }
                                    c6 = 65535;
                                    break;
                                case 187078297:
                                    break;
                                case 1504578661:
                                    if (str.equals("audio/eac3")) {
                                        c6 = 3;
                                        break;
                                    }
                                    c6 = 65535;
                                    break;
                                default:
                                    c6 = 65535;
                                    break;
                            }
                            switch (c6) {
                                case 0:
                                case 1:
                                case 2:
                                case 3:
                                    if (d0.a >= 32) {
                                        j jVar2 = defaultTrackSelector.f5462i;
                                        if (jVar2 != null) {
                                            break;
                                        }
                                    }
                                    break;
                                default:
                                    if (d0.a >= 32 || (jVar = defaultTrackSelector.f5462i) == null || !jVar.f9187b || !jVar.c() || !defaultTrackSelector.f5462i.d() || !defaultTrackSelector.f5462i.a(format, defaultTrackSelector.j)) {
                                        z5 = false;
                                        break;
                                    } else {
                                        break;
                                    }
                                    break;
                            }
                        }
                        if (d0.a >= 32) {
                        }
                        z5 = false;
                    }
                }
            } finally {
            }
        }
        return z5;
    }
}
